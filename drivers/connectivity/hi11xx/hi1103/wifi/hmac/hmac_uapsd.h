

#ifndef __HMAC_UAPSD_H__
#define __HMAC_UAPSD_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "mac_user.h"
#include "hmac_ext_if.h"
#include "dmac_ext_if.h"
#include "hmac_user.h"
#include "hmac_vap.h"

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_HMAC_UAPSD_H

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define HMAC_UAPSD_SEND_ALL  0xff          /*���Ͷ��������б���,����ΪUINT8�������ֵ*/
#define HMAC_UAPSD_WME_LEN   8
/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern oal_void hmac_uapsd_update_user_para (oal_uint8  *puc_payload,
                                                        oal_uint8  uc_sub_type,
                                                        oal_uint32 ul_msg_len,
                                                        hmac_user_stru *pst_hmac_user);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of hmac_uapsd.h */