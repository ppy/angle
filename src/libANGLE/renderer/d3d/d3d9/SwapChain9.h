//
// Copyright 2012 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// SwapChain9.h: Defines a back-end specific class for the D3D9 swap chain.

#ifndef LIBANGLE_RENDERER_D3D_D3D9_SWAPCHAIN9_H_
#define LIBANGLE_RENDERER_D3D_D3D9_SWAPCHAIN9_H_

#include "common/angleutils.h"
#include "libANGLE/renderer/d3d/SwapChainD3D.h"
#include "libANGLE/renderer/d3d/d3d9/RenderTarget9.h"

namespace rx
{
class NativeWindow9;
class Renderer9;

class SwapChain9 : public SwapChainD3D
{
  public:
    SwapChain9(Renderer9 *renderer,
               NativeWindow9 *nativeWindow,
               HANDLE shareHandle,
               IUnknown *d3dTexture,
               GLenum backBufferFormat,
               GLenum depthBufferFormat,
               EGLint orientation);
    ~SwapChain9() override;

    EGLint resize(DisplayD3D *displayD3D, EGLint backbufferWidth, EGLint backbufferHeight) override;
    EGLint reset(DisplayD3D *displayD3D,
                 EGLint backbufferWidth,
                 EGLint backbufferHeight,
                 EGLint swapInterval) override;
    EGLint swapRect(DisplayD3D *displayD3D,
                    EGLint x,
                    EGLint y,
                    EGLint width,
                    EGLint height) override;
    void recreate() override;

    RenderTargetD3D *getColorRenderTarget() override;
    RenderTargetD3D *getDepthStencilRenderTarget() override;

    virtual IDirect3DSurface9 *getRenderTarget();
    virtual IDirect3DSurface9 *getDepthStencil();
    virtual IDirect3DTexture9 *getOffscreenTexture();

    EGLint getWidth() const override { return mWidth; }
    EGLint getHeight() const override { return mHeight; }

    void *getKeyedMutex() override;

    egl::Error getSyncValues(EGLuint64KHR *ust, EGLuint64KHR *msc, EGLuint64KHR *sbc) override;

    egl::Error toggleWindowed() override;
    EGLBoolean getWindowed() override { return mWindowed; }
    int getTargetWidth() override { return getDisplayMode().Width; }
    int getTargetHeight() override { return getDisplayMode().Height; }
    D3DDISPLAYMODE getDisplayMode() const;

  private:
    void release();

    Renderer9 *mRenderer;
    EGLint mWidth;
    EGLint mHeight;
    EGLint mSwapInterval;
    EGLBoolean mWindowed;

    NativeWindow9 *mNativeWindow;

    IDirect3DSwapChain9 *mSwapChain;
    IDirect3DSurface9 *mBackBuffer;
    IDirect3DSurface9 *mRenderTarget;
    IDirect3DSurface9 *mDepthStencil;
    IDirect3DTexture9 *mOffscreenTexture;

    SurfaceRenderTarget9 mColorRenderTarget;
    SurfaceRenderTarget9 mDepthStencilRenderTarget;
};

}  // namespace rx
#endif  // LIBANGLE_RENDERER_D3D_D3D9_SWAPCHAIN9_H_
