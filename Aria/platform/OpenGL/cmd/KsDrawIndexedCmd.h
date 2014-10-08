/************************************************************************************************/
/** 
 * @file		KsDrawIndexedCmd.h
 * @brief		DirectX�p�[�x�X�e���V���X�e�[�g
 * @author		A567W
 * @date		----/--/--
 * @since		----/--/--
 * @version		1.0
 */
/************************************************************************************************/
#ifndef __KSDRAWINDEXEDCMD_H__
#define __KSDRAWINDEXEDCMD_H__

/*==============================================================================================*/
/*                                 << �C���N���[�h >>                                           */
/*==============================================================================================*/
#include "KsRenderCmd.h"

/*==============================================================================================*/
/*                                     << ��` >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << �錾 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN

/************************************************************************************************/
/**
 * @class		KsDrawIndexedCmd
 * @brief		�[�x�X�e���V���X�e�[�g
 * @author		A567W
 */
/************************************************************************************************/
class ksENGINE_API KsDrawIndexedCmd : public KsRenderCmd
{
    public:
        KsUInt32            m_primitiveType;        /**< �v���~�e�B�u�^�C�v  */
        KsUInt32            m_indexCount;           /**< ���_��    */
        KsUInt32            m_startVertexLocation;  /**< �J�n���_   */
        KsUInt32            m_baseVertexLocation;

    public:
        /**
         * KsDrawCmd�̕`��R�}���h�����s����B
         */
        void                execute();
};

ksNS_KS_END

#endif		/* __KSDRAWINDEXEDCMD_H__ */
