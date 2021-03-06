/*! \file bcmfp_sysm.c
 *
 * BCM Field Processor - System Manager Integration
 *
 * This file contains the BCMFP implementation for the integration
 * to the System Manager.
 */
/*
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */

#include <bsl/bsl.h>
#include <shr/shr_types.h>
#include <shr/shr_debug.h>
#include <shr/shr_error.h>
#include <shr/shr_sysm.h>
#include <bcmmgmt/bcmmgmt_sysm.h>
#include <bcmfp/bcmfp_sysm.h>
#include <bcmfp/bcmfp_internal.h>

#define BSL_LOG_MODULE BSL_LS_BCMFP_INIT

/*!
 * \brief BCMFP initialization function.
 * BCMFP is requested to initialize.
 * Expect Devices will be attached, BD, DRD, LRD will
 * happen here. We can do config-independent init here
 *
 * \param [in] instance_category System manager instance category.
 * \param [in] unit Unit number.
 * \param [in] comp_data Pointer to the component context.
 * \param [in] warm Indicates cold or warm start.
 * \param [out] blocking_component Blocking component.
 *
 * \return SHR_SYSM_RV_DONE on success, SHR_SYSM_RV_ERROR on error and
 *         SHR_SYSM_RV_BLOCKED when waiting on other component.
 */
static shr_sysm_rv_t
bcmfp_sysm_init(shr_sysm_categories_t instance_category,
                int unit,
                void *comp_data,
                bool warm,
                uint32_t *blocking_component)
{
    if (bcmfp_init(unit, warm) != SHR_E_NONE) {
        return SHR_SYSM_RV_ERROR;
    }
    return SHR_SYSM_RV_DONE;
}

/*!
 * \brief BCMFP shutdown function.
 *
 * BCMFP is requested to being shutdown completely.
 *
 * \param [in] instance_category System manager instance category.
 * \param [in] unit Unit number.
 * \param [in] comp_data Pointer to the component context.
 * \param [in] warm Indicates cold or warm start.
 * \param [out] blocking_component Blocking component.
 *
 * \return SHR_SYSM_RV_DONE on success, SHR_SYSM_RV_ERROR on error and
 *         SHR_SYSM_RV_BLOCKED when waiting on other component.
 */
static shr_sysm_rv_t
bcmfp_sysm_shutdown(shr_sysm_categories_t instance_category,
                    int unit,
                    void *comp_data,
                    bool warm,
                    uint32_t *blocking_component)
{
    if (bcmfp_cleanup(unit, warm) != SHR_E_NONE) {
        return SHR_SYSM_RV_ERROR;
    }
    return SHR_SYSM_RV_DONE;
}

/*!
 * \brief BCMFP config function.
 *
 * BCMFP is requested to configure.
 *
 * \param [in] instance_category System manager instance category.
 * \param [in] unit Unit number.
 * \param [in] comp_data Pointer to the component context.
 * \param [in] warm Indicates cold or warm start.
 * \param [out] blocking_component Blocking component.
 *
 * \return SHR_SYSM_RV_DONE on success, SHR_SYSM_RV_ERROR on error and
 *         SHR_SYSM_RV_BLOCKED when waiting on other component.
 */
static shr_sysm_rv_t
bcmfp_sysm_comp_config(shr_sysm_categories_t instance_category,
                       int unit,
                       void *comp_data,
                       bool warm,
                       uint32_t *blocking_component)
{
    if (!shr_sysm_is_comp_complete(BCMMGMT_IMM_FE_COMP_ID,
                                   instance_category, unit)) {
        *blocking_component = BCMMGMT_IMM_FE_COMP_ID;
        return SHR_SYSM_RV_BLOCKED;
    }

    if (bcmfp_imm_reg(unit) != SHR_E_NONE) {
        return SHR_SYSM_RV_ERROR;
    }
    return SHR_SYSM_RV_DONE;
}

/*!
 * \brief BCMFP pre_config function.
 *
 * BCMFP is requested to pre-configure.Expect Cfg writes.
 * Unit-dependent config will happen with LT writes
 *
 * \param [in] instance_category System manager instance category.
 * \param [in] unit Unit number.
 * \param [in] comp_data Pointer to the component context.
 * \param [in] warm Indicates cold or warm start.
 * \param [out] blocking_component Blocking component.
 *
 * \return SHR_SYSM_RV_DONE on success, SHR_SYSM_RV_ERROR on error and
 *         SHR_SYSM_RV_BLOCKED when waiting on other component.
 */
static shr_sysm_rv_t
bcmfp_sysm_pre_config(shr_sysm_categories_t instance_category,
                      int unit,
                      void *comp_data,
                      bool warm,
                      uint32_t *blocking_component)
{
    return SHR_SYSM_RV_DONE;
}

/*!
 * \brief BCMFP run function.
 *
 * BCMFP is requested to start all threads as configured.
 *
 * \param [in] instance_category System manager instance category.
 * \param [in] unit Unit number.
 * \param [in] comp_data Pointer to the component context.
 *
 * \return SHR_SYSM_RV_DONE on success, SHR_SYSM_RV_ERROR on error and
 *         SHR_SYSM_RV_BLOCKED when waiting on other component.
 */
static void
bcmfp_sysm_run(shr_sysm_categories_t instance_category,
               int unit,
               void *comp_data)
{
}

/* Phase: stop
 */
/*!
 * \brief BCMFP stop function.
 *
 * BCMFP is requested to stop all threads as configured.
 *
 * \param [in] instance_category System manager instance category.
 * \param [in] unit Unit number.
 * \param [in] comp_data Pointer to the component context.
 * \param [in] graceful Stop should be performed gracefully or not.
 * \param [out] blocking_component Blocking component.
 *
 * \return SHR_SYSM_RV_DONE on success, SHR_SYSM_RV_ERROR on error and
 *         SHR_SYSM_RV_BLOCKED when waiting on other component.
 */
static shr_sysm_rv_t
bcmfp_sysm_stop(shr_sysm_categories_t instance_category,
                int unit,
                void *comp_data,
                bool graceful,
                uint32_t *blocking_component)
{
    return SHR_SYSM_RV_DONE;
}

/*!
 * \brief BCMFP System manager init struct.
 */
static shr_sysm_cb_func_set_t bcmfp_sysm_handler = {
    /*! Initialization. */
    .init        = bcmfp_sysm_init,

    /*! Component configuration. */
    .comp_config = bcmfp_sysm_comp_config,

    /*! Pre-configuration. */
    .pre_config  = bcmfp_sysm_pre_config,

    /*! Run. */
    .run         = bcmfp_sysm_run,

    /*! Stop. */
    .stop        = bcmfp_sysm_stop,

    /*! Shutdown. */
    .shutdown    = bcmfp_sysm_shutdown
};

int
bcmfp_start(void)
{

    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);

    /* Register unit-independent functions */
    /* None */

    /* Register unit-specific functions */
    SHR_IF_ERR_EXIT(shr_sysm_register(BCMMGMT_FP_COMP_ID,
                                      SHR_SYSM_CAT_UNIT,
                                      &bcmfp_sysm_handler,
                                      NULL));
exit:
    SHR_FUNC_EXIT();
}
