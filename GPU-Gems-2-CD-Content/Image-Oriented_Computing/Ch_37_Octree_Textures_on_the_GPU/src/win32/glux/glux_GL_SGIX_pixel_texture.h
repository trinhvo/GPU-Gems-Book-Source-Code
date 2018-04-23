
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_SGIX_pixel_texture__
#define __GLUX_GL_SGIX_pixel_texture__

GLUX_NEW_PLUGIN(GL_SGIX_pixel_texture);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_PIXEL_TEX_GEN_SGIX
#  define GL_PIXEL_TEX_GEN_SGIX 0x8139
#endif
#ifndef GL_PIXEL_TEX_GEN_MODE_SGIX
#  define GL_PIXEL_TEX_GEN_MODE_SGIX 0x832B
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glPixelTexGenSGIX
typedef void (APIENTRYP PFNGLUXPIXELTEXGENSGIXPROC) (GLenum mode);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glPixelTexGenSGIX
extern PFNGLUXPIXELTEXGENSGIXPROC glPixelTexGenSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------