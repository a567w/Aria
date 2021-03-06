/************************************************************************************************/
/** 
 * @file		KsDepthStencilStateCmd.h
 * @brief		DirectX用深度ステンシルステート
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/
#ifndef __KSDDEPTHSTENCILSTAECMD_H__
#define __KSDDEPTHSTENCILSTAECMD_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsRenderCmd.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/**
 * @class		KsDepthStencilStateCmd
 * @brief		深度ステンシルステート
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @note		参照カウンタつき
 */
/************************************************************************************************/
class ksENGINE_API KsDepthStencilStateCmd : public KsRenderCmd
{
    public:
        KsDepthStencilState*        m_pState;
        KsUInt32                    m_stencilRef;

    public:
        void                        execute( KS_DEPTH_STENCIL_DESC* pSrc );
};

ksNS_KS_END

#endif		/* __KSDDEPTHSTENCILSTAECMD_H__ */

