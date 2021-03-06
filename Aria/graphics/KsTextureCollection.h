/************************************************************************************************/
/** 
 * @file		KsTextureCollection.h
 * @brief		テクスチャコレクション
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0.0
 */
/************************************************************************************************/
#ifndef __KSTEXTURECOLLECTION_H__
#define __KSTEXTURECOLLECTION_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                            */
/*==============================================================================================*/
#include "KsGraphicsCommon.h"
#include "KsTexture.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/**
 * @class		KsTextureCollection
 * @brief		テクスチャコレクション
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 */
/************************************************************************************************/
typedef KsArray<KsTexture*>	KsTextureCollection;

ksNS_KS_END

#endif		/* __KSTEXTURECOLLECTION_H__ */



