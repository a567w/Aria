/************************************************************************************************/
/** 
 * @file		KsRenderTarget.h
 * @brief		描画ターゲット
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/
#ifndef __KSRENDERTARGET_H__
#define __KSRENDERTARGET_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsImage.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/**
 * @class		KsRenderTarget
 * @brief		描画ターゲット
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 */
/************************************************************************************************/
class ksENGINE_API KsRenderTarget
{
	protected:
		KsUInt32					m_flags;		/**< 各種フラグ		*/
		KsUInt32					m_width;		/**< 幅				*/
		KsUInt32					m_height;		/**< 高さ			*/
		ksPIXEL_FORMAT				m_format;		/**< フォーマット		*/

	public:
		/**
		 * コンストラクタ
		 */
									KsRenderTarget(){}

		/**
		 * デストラクタ
		 */
		virtual						~KsRenderTarget(){}

		/**
		 * ロックする
		 * @return					データのポインタ
		 */
		virtual void*				lock() = 0;

		/**
		 * ロックを解除する
		 */
		virtual void				unlock() = 0;

		/**
		 * テクスチャの破棄
		 */
		virtual void				destroy() = 0;

		/**
		 * リソースを取得する
		 * @return					 リソース
		 */
		virtual void*				getRenderResource() = 0;

		/**
		 * フラグ取得
		 * @param	flags			テクスチャの各種フラグ
		 */
		void						setFlags( KsUInt32 flags ) { m_flags = flags; }

		/**
		 * フラグ取得
		 * @return					テクスチャの各種フラグ
		 */
		KsUInt32					getFlags() const { return m_flags; }

		/**
		 * テクスチャの幅を取得する
		 * @return					テクスチャの幅
		 */
		KsUInt16					getWidth() const { return m_width; }

		/**
		 * テクスチャの高さを取得する
		 * @return					テクスチャの高さ
		 */
		KsUInt16					getHeight() const { return m_height; }
};

ksNS_KS_END

#endif		/* __KSRENDERTARGET_H__ */



