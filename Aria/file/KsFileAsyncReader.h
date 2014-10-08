/************************************************************************************************/
/** 
 * @file		KsFileAsyncReader.cpp
 * @brief		�t�@�C���̔񓯊��ǂݍ��݃N���X
 * @author		A567W
 * @date		2011/07/02
 * @since		2011/07/02
 * @version		1.0.0
 */
/************************************************************************************************/
#ifndef __KSFILEASYNCREADER_H__
#define __KSFILEASYNCREADER_H__

/*==============================================================================================*/
/*                                 << �C���N���[�h >>                                            */
/*==============================================================================================*/
#include "KsFileObject.h"
#include "KsReadRequest.h"

/*==============================================================================================*/
/*                                     << ��` >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << �錾 >>                                               */
/*==============================================================================================*/

ksNS_KS_BEGIN

/************************************************************************************************/
/**
 * �t�@�C���̔񓯊��ǂݍ��݃N���X
 * @class	KsFileAsyncReader
 * @author  A567W
 * @since   2003/03/22
 * @version ----/--/--
 */
/************************************************************************************************/
class ksENGINE_API KsFileAsyncReader : public KsReadRequest
{
	public:
		/**
		 * �R���X�g���N�^
		 * �����ǂݍ���(�ǂݍ��݂��I������܂ő҂�)
		 * @param		fileName		�t�@�C����
		 */
										KsFileAsyncReader( const KsString& fileName );

		/**
		 * �R���X�g���N�^
		 * �����ǂݍ���(�ǂݍ��݂��I������܂ő҂�)
		 * @param		pFileName		�t�@�C����
		 */
										KsFileAsyncReader( const KsChar* pFileName );

		/**
		 * �f�X�g���N�^
		 */
										~KsFileAsyncReader();

		/**
		 * �R�[���o�b�N�i���C���p�j
		 */
		virtual void					callback();

		/**
		 * �R�[���o�b�N�i�X���b�h�p�j
		 */
		virtual void					callbackThread();

	protected:
		/**
		 * �ǂݍ��ݏI�����̃R�[���o�b�N�֐�
		 * @param		pFile			�t�@�C���I�u�W�F�N�g
		 */
		virtual KsBool					readEndCB( KsFileObject* pFile );

		/**
		 * �ǂݍ��ݏI�����̃R�[���o�b�N�֐�
		 * @param		pFile			�t�@�C���I�u�W�F�N�g
		 */
		virtual KsBool					readEndThreadCB( KsFileObject* pFile );
};

ksNS_KS_END

#endif	/* __KSFILEASYNCREADER_H__ */

