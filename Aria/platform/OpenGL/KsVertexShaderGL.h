/************************************************************************************************/
/** 
 * @file		KsVertexShaderGL.h
 * @brief		頂点シェーダー
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/
#ifndef __KSVERTEXSHADERGL_H__
#define __KSVERTEXSHADERGL_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsCommonGL.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

class KsRenderSystemGL;

/************************************************************************************************/
/**
 * @class		KsVertexShaderGL
 * @brief		頂点シェーダー
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @note		
 */
/************************************************************************************************/
class ksENGINE_API KsVertexShaderGL : public KsVertexShader
{
		friend class KsRenderContextGL;
	public:
		/**
		 * コンストラクタ
		 */
									KsVertexShaderGL( KsRenderSystemGL* pRenderSystem );

		/**
		 * デストラクタ
		 */
		virtual						~KsVertexShaderGL();

		/**
		 * ファイルから頂点シェーダーを生成する
		 * @param	pFileName		ファイル名
		 * @param	shaderModel		シェーダーモデル
		 * @retval	ksTRUE			生成成功
		 * @retval	ksFALSE			生成失敗
		 */
		virtual KsBool				createFromFile( const KsChar* pFileName, const KsChar* pEntryPoint, ksSHADER_MODEL_TYPE shaderModel );

		/**
		 * 破棄処理
		 */
		virtual void				destroy();
	
		/**
		 * バッファのポインタを取得する
		 * @return					バッファのポインタ
		 */
		virtual const void*			getBufferPointer();

		/**
		 * バッファのサイズを取得する
		 * @return					バッファのサイズ
		 */
		virtual KsUInt32			getBufferSize();

	private:
        KsRenderSystemGL*           m_pRenderSystem;
        GLuint                      m_shaderID;
};

ksNS_KS_END

#endif		/* __KSVERTEXSHADERGL_H__ */

