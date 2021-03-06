/************************************************************************************************/
/** 
 * @file		KsFileAsyncReader.cpp
 * @brief		ファイルスレッド
 * @author		A567W
 * @date		2011/07/02
 * @since		2011/07/02
 * @version		1.0.0
 */
/************************************************************************************************/

/*==============================================================================================*/
/*                                 << インクルード >>                                           */
/*==============================================================================================*/
#include "KsFileAsyncReader.h"
#include "KsFileSystem.h"
#include "KsFileBuffer.h"

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
 * 同期読み込み(読み込みが終了するまで待つ)
 * @param		fileName		ファイル名
 */
/************************************************************************************************/
KsFileAsyncReader::KsFileAsyncReader( const KsString& fileName )
{
	m_fileName = fileName;

	KsFileSystem*	pFileSystem = KsFileSystem::getInstancePtr();

	pFileSystem->pushRequest( this );
}

/************************************************************************************************/
/*
 * コンストラクタ
 * 同期読み込み(読み込みが終了するまで待つ)
 * @param		pFileName		ファイル名
 */
/************************************************************************************************/
KsFileAsyncReader::KsFileAsyncReader( const KsChar* pFileName )
{
	KsFileAsyncReader( KsString(pFileName) );
}

/************************************************************************************************/
/*
 * デストラクタ
 */
/************************************************************************************************/
KsFileAsyncReader::~KsFileAsyncReader()
{
}

/************************************************************************************************/
/*
 * コールバック（メイン用）
 */
/************************************************************************************************/
void KsFileAsyncReader::callback()
{
	if( ksREADING_END == m_status )
	{
		KsFileBuffer file( m_pBuffer, m_readSize, ksFILE_FLAG_DEFAULT, ksFALSE );

		readEndCB( &file );
	
		m_status = ksREADING_CLOSE_IDLE;
	}
}

/************************************************************************************************/
/*
 * コールバック（スレッド用）
 */
/************************************************************************************************/
void KsFileAsyncReader::callbackThread()
{
	KsFileBuffer file( m_pBuffer, m_readSize, ksFILE_FLAG_DEFAULT, ksFALSE );

	readEndThreadCB( &file );
}

/************************************************************************************************/
/*
 * 読み込み終了時のコールバック関数
 * @param		pFile			ファイルオブジェクト
 */
/************************************************************************************************/
KsBool KsFileAsyncReader::readEndCB( KsFileObject* pFile )
{
	return ksTRUE;
}

/************************************************************************************************/
/*
 * 読み込み終了時のコールバック関数
 * @param		pFile			ファイルオブジェクト
 */
/************************************************************************************************/
KsBool KsFileAsyncReader::readEndThreadCB( KsFileObject* pFile )
{
	return ksTRUE;
}

ksNS_KS_END


