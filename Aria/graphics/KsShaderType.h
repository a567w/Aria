/************************************************************************************************/
/** 
 * @file		KsShaderType.h
 * @brief		シェーダータイプ
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/
#ifndef __KSSHADERTYPE_H__
#define __KSSHADERTYPE_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsBase.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/**
 * @enum		ksSHADER_TYPE
 * @brief		シェーダータイプ
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @note		
 */
/************************************************************************************************/
enum ksSHADER_TYPE
{
	ksSHADER_UNKNOWN,		/**< 未定義シェーダー			*/
	ksVERTEX_SHADER,		/**< 頂点シェーダー			*/
	ksPIXEL_SHADER,			/**< ピクセルシェーダー		*/
	ksGEOMETRY_SHADER,		/**< ジオメトリシェーダー		*/
	ksCOMPUTE_SHADER		/**< コンピュートシェーダー		*/
};

/************************************************************************************************/
/**
 * @enum		ksSHADER_MODEL_TYPE
 * @brief		シェーダーモデル
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @note		
 */
/************************************************************************************************/
enum ksSHADER_MODEL_TYPE
{
	ksSHADE_MODEL_2_0,
	ksSHADE_MODEL_3_0,
	ksSHADE_MODEL_4_0,
	ksSHADE_MODEL_5_0
};

ksNS_KS_END

#endif		/* __KSSHADERTYPE_H__ */

