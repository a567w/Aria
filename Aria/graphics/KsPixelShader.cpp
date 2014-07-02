/************************************************************************************************/
/** 
 * @file		KsPixelShader.cpp
 * @brief		シェーダーオブジェクト
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsPixelShader.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/*
 * コンストラクタ
 */
/************************************************************************************************/
KsPixelShader::KsPixelShader()
	: KsShaderProgram( ksPIXEL_SHADER )
{
}

/************************************************************************************************/
/*
 * デストラクタ
 */
/************************************************************************************************/
KsPixelShader::~KsPixelShader()
{
}

ksNS_KS_END

