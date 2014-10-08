/************************************************************************************************/
/** 
 * @file		KsVertexBufferCmd.h
 * @brief		DirectX用深度ステンシルステート
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/
#ifndef __KSVERTEXBUFFERCMD_H__
#define __KSVERTEXBUFFERCMD_H__

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
 * @class		KsVertexBufferCmd
 * @brief		深度ステンシルステート
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @note		参照カウンタつき
 */
/************************************************************************************************/
class ksENGINE_API KsVertexBufferCmd : public KsRenderCmd
{
    public:
        KsSamplerState*             m_pState;
        KsUInt32                    m_slot;
        KsUInt32                    m_numView;
};


ksNS_KS_END

#endif		/* __KSVERTEXBUFFERCMD_H__ */

