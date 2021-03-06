/*************************************************************************************************/
/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 A567W
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * 
 * @file	KsRenderCmd.h
 * @brief	描画コマンド
 * @date	2014/04/12
 * @author	A567W
 * @version	1.0.0
 */
 /************************************************************************************************/
#ifndef __KSRENDERCMD_H__
#define __KSRENDERCMD_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "../KsCommonGL.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/*************************************************************************************************/
/**
 * @enum	ksRENDER_CMD_TYPE
 * @brief	描画コマンドタイプ
 */
/*************************************************************************************************/
enum ksRENDER_CMD_TYPE
{
    ksRENDER_CMD_UNKNOWN = 0,
    ksRENDER_CMD_CLEARRENDERTARGET,
    ksRENDER_CMD_CLEARRENDERTARGETS,
    ksRENDER_CMD_CLEARDEPTHSTENCIL,
    ksRENDER_CMD_VIEWPORT,
    ksRENDER_CMD_VIEWPORTS,
    ksRENDER_CMD_INPUTLAYOUT,
    ksRENDER_CMD_VERTEXBUFFER,
    ksRENDER_CMD_INDEXBUFFER,
    ksRENDER_CMD_VERTEXSHADER,
    ksRENDER_CMD_PIXELSHADER,
    ksRENDER_CMD_SHADERRESOURCE,
    ksRENDER_CMD_SAMPLERSTATE,
    ksRENDER_CMD_BLENDSTATE,
    ksRENDER_CMD_RASTERIZERSTATE,
    ksRENDER_CMD_DEPTHSTENCILSTATE,
    ksRENDER_CMD_DRAW,
    ksRENDER_CMD_DRAWINDEX,
};


/************************************************************************************************/
/**
 * @class		KsRenderCmd
 * @brief		描画コマンド
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @note		参照カウンタつき
 */
/************************************************************************************************/
class ksENGINE_API KsRenderCmd
{
    public:
        KsUInt32            m_cmd;
        KsUInt32            m_size;

    public:
        void                setCmd( KsUInt32 cmd, KsUInt32 size )
        {
            m_cmd  = cmd;
            m_size = size;
        }
};

ksNS_KS_END

#endif		/* __KSRENDERCMD_H__ */

