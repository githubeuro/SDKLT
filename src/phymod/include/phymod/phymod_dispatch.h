/*
 *         
 * $Id: phymod.xml,v 1.1.2.5 2013/09/12 10:43:06 nirf Exp $
 * 
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
 * 
 * 
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef _PHYMOD_DISPATCH_H__H_
#define _PHYMOD_DISPATCH_H__H_

#include <phymod/phymod_definitions.h>
#include <phymod/phymod.h>

typedef int (*__dispatch__phymod_core_identify_f)(const phymod_core_access_t* core, uint32_t core_id, uint32_t* is_identified);
typedef int (*__dispatch__phymod_core_info_get_f)(const phymod_core_access_t* core, phymod_core_info_t* info);
typedef int (*__dispatch__phymod_core_lane_map_set_f)(const phymod_core_access_t* core, const phymod_lane_map_t* lane_map);
typedef int (*__dispatch__phymod_core_lane_map_get_f)(const phymod_core_access_t* core, phymod_lane_map_t* lane_map);
typedef int (*__dispatch__phymod_core_reset_set_f)(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t direction);
typedef int (*__dispatch__phymod_core_reset_get_f)(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t* direction);
typedef int (*__dispatch__phymod_core_firmware_info_get_f)(const phymod_core_access_t* core, phymod_core_firmware_info_t* fw_info);
typedef int (*__dispatch__phymod_phy_firmware_core_config_set_f)(const phymod_phy_access_t* phy, phymod_firmware_core_config_t fw_core_config);
typedef int (*__dispatch__phymod_phy_firmware_core_config_get_f)(const phymod_phy_access_t* phy, phymod_firmware_core_config_t* fw_core_config);
typedef int (*__dispatch__phymod_phy_firmware_lane_config_set_f)(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t fw_lane_config);
typedef int (*__dispatch__phymod_phy_firmware_lane_config_get_f)(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t* fw_lane_config);
typedef int (*__dispatch__phymod_core_pll_sequencer_restart_f)(const phymod_core_access_t* core, uint32_t flags, phymod_sequencer_operation_t operation);
typedef int (*__dispatch__phymod_core_wait_event_f)(const phymod_core_access_t* core, phymod_core_event_t event, uint32_t timeout);
typedef int (*__dispatch__phymod_phy_rx_restart_f)(const phymod_phy_access_t* phy);
typedef int (*__dispatch__phymod_phy_polarity_set_f)(const phymod_phy_access_t* phy, const phymod_polarity_t* polarity);
typedef int (*__dispatch__phymod_phy_polarity_get_f)(const phymod_phy_access_t* phy, phymod_polarity_t* polarity);
typedef int (*__dispatch__phymod_phy_tx_set_f)(const phymod_phy_access_t* phy, const phymod_tx_t* tx);
typedef int (*__dispatch__phymod_phy_tx_get_f)(const phymod_phy_access_t* phy, phymod_tx_t* tx);
typedef int (*__dispatch__phymod_phy_media_type_tx_get_f)(const phymod_phy_access_t* phy, phymod_media_typed_t media, phymod_tx_t* tx);
typedef int (*__dispatch__phymod_phy_tx_override_set_f)(const phymod_phy_access_t* phy, const phymod_tx_override_t* tx_override);
typedef int (*__dispatch__phymod_phy_tx_override_get_f)(const phymod_phy_access_t* phy, phymod_tx_override_t* tx_override);
typedef int (*__dispatch__phymod_phy_txpi_config_set_f)(const phymod_phy_access_t* phy, const phymod_txpi_config_t* config);
typedef int (*__dispatch__phymod_phy_txpi_config_get_f)(const phymod_phy_access_t* phy, phymod_txpi_config_t* config);
typedef int (*__dispatch__phymod_phy_rx_set_f)(const phymod_phy_access_t* phy, const phymod_rx_t* rx);
typedef int (*__dispatch__phymod_phy_rx_get_f)(const phymod_phy_access_t* phy, phymod_rx_t* rx);
typedef int (*__dispatch__phymod_phy_rx_adaptation_resume_f)(const phymod_phy_access_t* phy);
typedef int (*__dispatch__phymod_phy_reset_set_f)(const phymod_phy_access_t* phy, const phymod_phy_reset_t* reset);
typedef int (*__dispatch__phymod_phy_reset_get_f)(const phymod_phy_access_t* phy, phymod_phy_reset_t* reset);
typedef int (*__dispatch__phymod_phy_power_set_f)(const phymod_phy_access_t* phy, const phymod_phy_power_t* power);
typedef int (*__dispatch__phymod_phy_power_get_f)(const phymod_phy_access_t* phy, phymod_phy_power_t* power);
typedef int (*__dispatch__phymod_phy_hg2_codec_control_set_f)(const phymod_phy_access_t* phy, phymod_phy_hg2_codec_t hg2_codec);
typedef int (*__dispatch__phymod_phy_hg2_codec_control_get_f)(const phymod_phy_access_t* phy, phymod_phy_hg2_codec_t* hg2_codec);
typedef int (*__dispatch__phymod_phy_tx_lane_control_set_f)(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t tx_control);
typedef int (*__dispatch__phymod_phy_tx_lane_control_get_f)(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t* tx_control);
typedef int (*__dispatch__phymod_phy_rx_lane_control_set_f)(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t rx_control);
typedef int (*__dispatch__phymod_phy_rx_lane_control_get_f)(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t* rx_control);
typedef int (*__dispatch__phymod_phy_fec_enable_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_fec_enable_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);
typedef int (*__dispatch__phymod_phy_forced_speed_line_side_set_f)(const phymod_phy_access_t* phy, uint32_t speed);
typedef int (*__dispatch__phymod_phy_forced_speed_line_side_get_f)(const phymod_phy_access_t* phy, uint32_t* speed);
typedef int (*__dispatch__phymod_phy_autoneg_line_side_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_autoneg_line_side_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);
typedef int (*__dispatch__phymod_phy_flow_control_mode_set_f)(const phymod_phy_access_t* phy, uint32_t mode, uint32_t ingress);
typedef int (*__dispatch__phymod_phy_flow_control_mode_get_f)(const phymod_phy_access_t* phy, uint32_t ingress, uint32_t* mode);
typedef int (*__dispatch__phymod_phy_psm_cos_bmp_set_f)(const phymod_phy_access_t* phy, uint32_t cos_bmp);
typedef int (*__dispatch__phymod_phy_psm_cos_bmp_get_f)(const phymod_phy_access_t* phy, uint32_t* cos_bmp);
typedef int (*__dispatch__phymod_phy_autoneg_oui_set_f)(const phymod_phy_access_t* phy, phymod_autoneg_oui_t an_oui);
typedef int (*__dispatch__phymod_phy_autoneg_oui_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_oui_t* an_oui);
typedef int (*__dispatch__phymod_phy_eee_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_eee_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);
typedef int (*__dispatch__phymod_phy_interface_config_set_f)(const phymod_phy_access_t* phy, uint32_t flags, const phymod_phy_inf_config_t* config);
typedef int (*__dispatch__phymod_phy_interface_config_get_f)(const phymod_phy_access_t* phy, uint32_t flags, phymod_ref_clk_t ref_clock, phymod_phy_inf_config_t* config);
typedef int (*__dispatch__phymod_phy_cl72_set_f)(const phymod_phy_access_t* phy, uint32_t cl72_en);
typedef int (*__dispatch__phymod_phy_cl72_get_f)(const phymod_phy_access_t* phy, uint32_t* cl72_en);
typedef int (*__dispatch__phymod_phy_cl72_status_get_f)(const phymod_phy_access_t* phy, phymod_cl72_status_t* status);
typedef int (*__dispatch__phymod_phy_autoneg_ability_set_f)(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type);
typedef int (*__dispatch__phymod_phy_autoneg_ability_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type);
typedef int (*__dispatch__phymod_phy_autoneg_remote_ability_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type);
typedef int (*__dispatch__phymod_phy_autoneg_set_f)(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an);
typedef int (*__dispatch__phymod_phy_autoneg_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_control_t* an, uint32_t* an_done);
typedef int (*__dispatch__phymod_phy_autoneg_restart_set_f)(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an);
typedef int (*__dispatch__phymod_phy_autoneg_status_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_status_t* status);
typedef int (*__dispatch__phymod_core_init_f)(const phymod_core_access_t* core, const phymod_core_init_config_t* init_config, const phymod_core_status_t* core_status);
typedef int (*__dispatch__phymod_phy_pll_multiplier_get_f)(const phymod_phy_access_t* phy, uint32_t* core_vco_pll_multiplier);
typedef int (*__dispatch__phymod_phy_init_f)(const phymod_phy_access_t* phy, const phymod_phy_init_config_t* init_config);
typedef int (*__dispatch__phymod_phy_loopback_set_f)(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t enable);
typedef int (*__dispatch__phymod_phy_loopback_get_f)(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t* enable);
typedef int (*__dispatch__phymod_phy_rx_pmd_locked_get_f)(const phymod_phy_access_t* phy, uint32_t* rx_pmd_locked);
typedef int (*__dispatch__phymod_phy_rx_signal_detect_get_f)(const phymod_phy_access_t* phy, uint32_t* rx_signal_detect);
typedef int (*__dispatch__phymod_phy_link_status_get_f)(const phymod_phy_access_t* phy, uint32_t* link_status);
typedef int (*__dispatch__phymod_phy_status_dump_f)(const phymod_phy_access_t* phy);
typedef int (*__dispatch__phymod_phy_pcs_userspeed_set_f)(const phymod_phy_access_t* phy, const phymod_pcs_userspeed_config_t* config);
typedef int (*__dispatch__phymod_phy_pcs_userspeed_get_f)(const phymod_phy_access_t* phy, phymod_pcs_userspeed_config_t* config);
typedef int (*__dispatch__phymod_phy_reg_read_f)(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t* val);
typedef int (*__dispatch__phymod_phy_reg_write_f)(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t val);
typedef int (*__dispatch__phymod_phy_private_read_f)(const phymod_phy_access_t* phy, uint32_t addr, uint32_t* val);
typedef int (*__dispatch__phymod_phy_private_write_f)(const phymod_phy_access_t* phy, uint32_t addr, uint32_t val);
typedef int (*__dispatch__phymod_phy_rev_id_f)(const phymod_phy_access_t* phy, uint32_t* rev_id);
typedef int (*__dispatch__phymod_phy_lane_cross_switch_map_set_f)(const phymod_phy_access_t* phy, const uint32_t* tx_array);
typedef int (*__dispatch__phymod_phy_lane_cross_switch_map_get_f)(const phymod_phy_access_t* phy, uint32_t* tx_array);
typedef int (*__dispatch__phymod_phy_intr_enable_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_intr_enable_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);
typedef int (*__dispatch__phymod_phy_intr_status_get_f)(const phymod_phy_access_t* phy, uint32_t* intr_status);
typedef int (*__dispatch__phymod_phy_intr_status_clear_f)(const phymod_phy_access_t* phy, uint32_t intr_clr);
typedef int (*__dispatch__phymod_phy_i2c_read_f)(const phymod_phy_access_t* phy, uint32_t flags, uint32_t addr, uint32_t offset, uint32_t size, uint8_t* data);
typedef int (*__dispatch__phymod_phy_i2c_write_f)(const phymod_phy_access_t* phy, uint32_t flags, uint32_t addr, uint32_t offset, uint32_t size, const uint8_t* data);
typedef int (*__dispatch__phymod_phy_gpio_config_set_f)(const phymod_phy_access_t* phy, int pin_no, phymod_gpio_mode_t gpio_mode);
typedef int (*__dispatch__phymod_phy_gpio_config_get_f)(const phymod_phy_access_t* phy, int pin_no, phymod_gpio_mode_t* gpio_mode);
typedef int (*__dispatch__phymod_phy_gpio_pin_value_set_f)(const phymod_phy_access_t* phy, int pin_no, int value);
typedef int (*__dispatch__phymod_phy_gpio_pin_value_get_f)(const phymod_phy_access_t* phy, int pin_no, int* value);
typedef int (*__dispatch__phymod_timesync_config_set_f)(const phymod_phy_access_t* phy, const phymod_timesync_config_t* config);
typedef int (*__dispatch__phymod_timesync_config_get_f)(const phymod_phy_access_t* phy, phymod_timesync_config_t* config);
typedef int (*__dispatch__phymod_timesync_enable_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_timesync_enable_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);
typedef int (*__dispatch__phymod_timesync_nco_addend_set_f)(const phymod_phy_access_t* phy, uint32_t freq_step);
typedef int (*__dispatch__phymod_timesync_nco_addend_get_f)(const phymod_phy_access_t* phy, uint32_t* freq_step);
typedef int (*__dispatch__phymod_timesync_framesync_mode_set_f)(const phymod_phy_access_t* phy, const phymod_timesync_framesync_t* framesync);
typedef int (*__dispatch__phymod_timesync_framesync_mode_get_f)(const phymod_phy_access_t* phy, phymod_timesync_framesync_t* framesync);
typedef int (*__dispatch__phymod_timesync_local_time_set_f)(const phymod_phy_access_t* phy, uint64_t local_time);
typedef int (*__dispatch__phymod_timesync_local_time_get_f)(const phymod_phy_access_t* phy, uint64_t* local_time);
typedef int (*__dispatch__phymod_timesync_load_ctrl_set_f)(const phymod_phy_access_t* phy, uint32_t load_once, uint32_t load_always);
typedef int (*__dispatch__phymod_timesync_load_ctrl_get_f)(const phymod_phy_access_t* phy, uint32_t* load_once, uint32_t* load_always);
typedef int (*__dispatch__phymod_timesync_tx_timestamp_offset_set_f)(const phymod_phy_access_t* phy, uint32_t ts_offset);
typedef int (*__dispatch__phymod_timesync_tx_timestamp_offset_get_f)(const phymod_phy_access_t* phy, uint32_t* ts_offset);
typedef int (*__dispatch__phymod_timesync_rx_timestamp_offset_set_f)(const phymod_phy_access_t* phy, uint32_t ts_offset);
typedef int (*__dispatch__phymod_timesync_rx_timestamp_offset_get_f)(const phymod_phy_access_t* phy, uint32_t* ts_offset);
typedef int (*__dispatch__phymod_timesync_capture_timestamp_get_f)(const phymod_phy_access_t* phy, uint64_t* cap_ts);
typedef int (*__dispatch__phymod_timesync_heartbeat_timestamp_get_f)(const phymod_phy_access_t* phy, uint64_t* hb_ts);
typedef int (*__dispatch__phymod_timesync_do_sync_f)(const phymod_phy_access_t* phy);
typedef int (*__dispatch__phymod_timesync_offset_set_f)(const phymod_core_access_t* core, uint32_t ts_offset);
typedef int (*__dispatch__phymod_timesync_adjust_set_f)(const phymod_phy_access_t* phy, phymod_timesync_compensation_mode_t ts_am_norm_mode);
typedef int (*__dispatch__phymod_edc_config_set_f)(const phymod_phy_access_t* phy, const phymod_edc_config_t* edc_config);
typedef int (*__dispatch__phymod_edc_config_get_f)(const phymod_phy_access_t* phy, phymod_edc_config_t* edc_config);
typedef int (*__dispatch__phymod_phy_core_mode_set_f)(const phymod_phy_access_t* phy, phymod_core_mode_t core_mode);
typedef int (*__dispatch__phymod_phy_core_mode_get_f)(const phymod_phy_access_t* phy, phymod_core_mode_t* core_mode);
typedef int (*__dispatch__phymod_failover_mode_set_f)(const phymod_phy_access_t* phy, phymod_failover_mode_t failover_mode);
typedef int (*__dispatch__phymod_failover_mode_get_f)(const phymod_phy_access_t* phy, phymod_failover_mode_t* failover_mode);
typedef int (*__dispatch__phymod_port_init_f)(const phymod_phy_access_t* phy, const phymod_port_config_t* port_config);
typedef int (*__dispatch__phymod_phy_autoneg_try_enable_f)(const phymod_phy_access_t* phy, const phymod_an_try_enable_control_t* an, phymod_phy_an_status_t* an_status);
typedef int (*__dispatch__phymod_debug_ether_f)(const phymod_phy_access_t* phy);
typedef int (*__dispatch__phymod_reset_interface_f)(const phymod_phy_access_t* phy);
typedef int (*__dispatch__phymod_phy_short_chn_mode_enable_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_short_chn_mode_enable_get_f)(const phymod_phy_access_t* phy, uint32_t* enable, uint32_t* status);
typedef int (*__dispatch__phymod_port_enable_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_port_enable_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);
typedef int (*__dispatch__phymod_phy_eye_margin_est_get_f)(const phymod_phy_access_t* phy, phymod_eye_margin_mode_t eye_margin_mode, uint32_t* value);
typedef int (*__dispatch__phymod_phy_multi_get_f)(const phymod_phy_access_t* phy, phymod_multi_data_t* multi_data);
typedef int (*__dispatch__phymod_phy_rescal_set_f)(const phymod_phy_access_t* phy, uint32_t enable, uint32_t value);
typedef int (*__dispatch__phymod_phy_rescal_get_f)(const phymod_phy_access_t* phy, uint32_t* value);
typedef int (*__dispatch__phymod_phy_sw_an_control_status_get_f)(const phymod_phy_access_t* phy, phymod_sw_an_ctrl_status_t* an_ctrl_status);
typedef int (*__dispatch__phymod_phy_sw_an_base_page_exchange_handler_f)(const phymod_phy_access_t* phy, phymod_sw_an_ctxt_t* an_ctxt);
typedef int (*__dispatch__phymod_phy_sw_an_lp_page_rdy_handler_f)(const phymod_phy_access_t* phy, phymod_sw_an_ctxt_t* an_ctxt);
typedef int (*__dispatch__phymod_phy_sw_an_advert_set_f)(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type, phymod_sw_an_ctxt_t* an_ctxt);
typedef int (*__dispatch__phymod_phy_sw_autoneg_enable_f)(const phymod_phy_access_t* phy, int enable);
typedef int (*__dispatch__phymod_phy_speed_config_set_f)(const phymod_phy_access_t* phy, const phymod_phy_speed_config_t* speed_config, const phymod_phy_pll_state_t* old_pll_state, phymod_phy_pll_state_t* new_pll_state);
typedef int (*__dispatch__phymod_phy_speed_config_get_f)(const phymod_phy_access_t* phy, phymod_phy_speed_config_t* speed_config);
typedef int (*__dispatch__phymod_phy_op_mode_get_f)(const phymod_phy_access_t* phy, phymod_operation_mode_t* op_mode);
typedef int (*__dispatch__phymod_phy_tx_taps_default_get_f)(const phymod_phy_access_t* phy, phymod_phy_signalling_method_t mode, phymod_tx_t* tx);
typedef int (*__dispatch__phymod_phy_lane_config_default_get_f)(const phymod_phy_access_t* phy, phymod_phy_signalling_method_t mode, phymod_firmware_lane_config_t* lane_config);
typedef int (*__dispatch__phymod_phy_firmware_load_info_get_f)(const phymod_phy_access_t* phy, phymod_firmware_load_info_t* info);
typedef int (*__dispatch__phymod_phy_autoneg_advert_ability_set_f)(const phymod_phy_access_t* phy, const phymod_autoneg_advert_abilities_t* an_advert_abilities, const phymod_phy_pll_state_t* old_pll_adv_state, phymod_phy_pll_state_t* new_pll_adv_state);
typedef int (*__dispatch__phymod_phy_autoneg_advert_ability_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_advert_abilities_t* an_advert_abilities);
typedef int (*__dispatch__phymod_phy_autoneg_remote_advert_ability_get_f)(const phymod_phy_access_t* phy, phymod_autoneg_advert_abilities_t* an_advert_abilities);
typedef int (*__dispatch__phymod_phy_bond_in_pwrdn_override_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_tx_pam4_precoder_enable_set_f)(const phymod_phy_access_t* phy, int enable);
typedef int (*__dispatch__phymod_phy_tx_pam4_precoder_enable_get_f)(const phymod_phy_access_t* phy, int* enable);
typedef int (*__dispatch__phymod_phy_tx_phase_lock_set_f)(const phymod_phy_access_t* phy, uint8_t enable);
typedef int (*__dispatch__phymod_phy_plls_reconfig_f)(const phymod_phy_access_t* phy, uint32_t num_plls, const uint32_t* plls);
typedef int (*__dispatch__phymod_phy_linkdown_transmit_set_f)(const phymod_phy_access_t* phy, uint32_t enable);
typedef int (*__dispatch__phymod_phy_linkdown_transmit_get_f)(const phymod_phy_access_t* phy, uint32_t* enable);

typedef struct __phymod__dispatch__s__ {
    __dispatch__phymod_core_identify_f                                               f_phymod_core_identify;
    __dispatch__phymod_core_info_get_f                                               f_phymod_core_info_get;
    __dispatch__phymod_core_lane_map_set_f                                           f_phymod_core_lane_map_set;
    __dispatch__phymod_core_lane_map_get_f                                           f_phymod_core_lane_map_get;
    __dispatch__phymod_core_reset_set_f                                              f_phymod_core_reset_set;
    __dispatch__phymod_core_reset_get_f                                              f_phymod_core_reset_get;
    __dispatch__phymod_core_firmware_info_get_f                                      f_phymod_core_firmware_info_get;
    __dispatch__phymod_phy_firmware_core_config_set_f                                f_phymod_phy_firmware_core_config_set;
    __dispatch__phymod_phy_firmware_core_config_get_f                                f_phymod_phy_firmware_core_config_get;
    __dispatch__phymod_phy_firmware_lane_config_set_f                                f_phymod_phy_firmware_lane_config_set;
    __dispatch__phymod_phy_firmware_lane_config_get_f                                f_phymod_phy_firmware_lane_config_get;
    __dispatch__phymod_core_pll_sequencer_restart_f                                  f_phymod_core_pll_sequencer_restart;
    __dispatch__phymod_core_wait_event_f                                             f_phymod_core_wait_event;
    __dispatch__phymod_phy_rx_restart_f                                              f_phymod_phy_rx_restart;
    __dispatch__phymod_phy_polarity_set_f                                            f_phymod_phy_polarity_set;
    __dispatch__phymod_phy_polarity_get_f                                            f_phymod_phy_polarity_get;
    __dispatch__phymod_phy_tx_set_f                                                  f_phymod_phy_tx_set;
    __dispatch__phymod_phy_tx_get_f                                                  f_phymod_phy_tx_get;
    __dispatch__phymod_phy_media_type_tx_get_f                                       f_phymod_phy_media_type_tx_get;
    __dispatch__phymod_phy_tx_override_set_f                                         f_phymod_phy_tx_override_set;
    __dispatch__phymod_phy_tx_override_get_f                                         f_phymod_phy_tx_override_get;
    __dispatch__phymod_phy_txpi_config_set_f                                         f_phymod_phy_txpi_config_set;
    __dispatch__phymod_phy_txpi_config_get_f                                         f_phymod_phy_txpi_config_get;
    __dispatch__phymod_phy_rx_set_f                                                  f_phymod_phy_rx_set;
    __dispatch__phymod_phy_rx_get_f                                                  f_phymod_phy_rx_get;
    __dispatch__phymod_phy_rx_adaptation_resume_f                                    f_phymod_phy_rx_adaptation_resume;
    __dispatch__phymod_phy_reset_set_f                                               f_phymod_phy_reset_set;
    __dispatch__phymod_phy_reset_get_f                                               f_phymod_phy_reset_get;
    __dispatch__phymod_phy_power_set_f                                               f_phymod_phy_power_set;
    __dispatch__phymod_phy_power_get_f                                               f_phymod_phy_power_get;
    __dispatch__phymod_phy_hg2_codec_control_set_f                                   f_phymod_phy_hg2_codec_control_set;
    __dispatch__phymod_phy_hg2_codec_control_get_f                                   f_phymod_phy_hg2_codec_control_get;
    __dispatch__phymod_phy_tx_lane_control_set_f                                     f_phymod_phy_tx_lane_control_set;
    __dispatch__phymod_phy_tx_lane_control_get_f                                     f_phymod_phy_tx_lane_control_get;
    __dispatch__phymod_phy_rx_lane_control_set_f                                     f_phymod_phy_rx_lane_control_set;
    __dispatch__phymod_phy_rx_lane_control_get_f                                     f_phymod_phy_rx_lane_control_get;
    __dispatch__phymod_phy_fec_enable_set_f                                          f_phymod_phy_fec_enable_set;
    __dispatch__phymod_phy_fec_enable_get_f                                          f_phymod_phy_fec_enable_get;
    __dispatch__phymod_phy_forced_speed_line_side_set_f                              f_phymod_phy_forced_speed_line_side_set;
    __dispatch__phymod_phy_forced_speed_line_side_get_f                              f_phymod_phy_forced_speed_line_side_get;
    __dispatch__phymod_phy_autoneg_line_side_set_f                                   f_phymod_phy_autoneg_line_side_set;
    __dispatch__phymod_phy_autoneg_line_side_get_f                                   f_phymod_phy_autoneg_line_side_get;
    __dispatch__phymod_phy_flow_control_mode_set_f                                   f_phymod_phy_flow_control_mode_set;
    __dispatch__phymod_phy_flow_control_mode_get_f                                   f_phymod_phy_flow_control_mode_get;
    __dispatch__phymod_phy_psm_cos_bmp_set_f                                         f_phymod_phy_psm_cos_bmp_set;
    __dispatch__phymod_phy_psm_cos_bmp_get_f                                         f_phymod_phy_psm_cos_bmp_get;
    __dispatch__phymod_phy_autoneg_oui_set_f                                         f_phymod_phy_autoneg_oui_set;
    __dispatch__phymod_phy_autoneg_oui_get_f                                         f_phymod_phy_autoneg_oui_get;
    __dispatch__phymod_phy_eee_set_f                                                 f_phymod_phy_eee_set;
    __dispatch__phymod_phy_eee_get_f                                                 f_phymod_phy_eee_get;
    __dispatch__phymod_phy_interface_config_set_f                                    f_phymod_phy_interface_config_set;
    __dispatch__phymod_phy_interface_config_get_f                                    f_phymod_phy_interface_config_get;
    __dispatch__phymod_phy_cl72_set_f                                                f_phymod_phy_cl72_set;
    __dispatch__phymod_phy_cl72_get_f                                                f_phymod_phy_cl72_get;
    __dispatch__phymod_phy_cl72_status_get_f                                         f_phymod_phy_cl72_status_get;
    __dispatch__phymod_phy_autoneg_ability_set_f                                     f_phymod_phy_autoneg_ability_set;
    __dispatch__phymod_phy_autoneg_ability_get_f                                     f_phymod_phy_autoneg_ability_get;
    __dispatch__phymod_phy_autoneg_remote_ability_get_f                              f_phymod_phy_autoneg_remote_ability_get;
    __dispatch__phymod_phy_autoneg_set_f                                             f_phymod_phy_autoneg_set;
    __dispatch__phymod_phy_autoneg_get_f                                             f_phymod_phy_autoneg_get;
    __dispatch__phymod_phy_autoneg_restart_set_f                                     f_phymod_phy_autoneg_restart_set;
    __dispatch__phymod_phy_autoneg_status_get_f                                      f_phymod_phy_autoneg_status_get;
    __dispatch__phymod_core_init_f                                                   f_phymod_core_init;
    __dispatch__phymod_phy_pll_multiplier_get_f                                      f_phymod_phy_pll_multiplier_get;
    __dispatch__phymod_phy_init_f                                                    f_phymod_phy_init;
    __dispatch__phymod_phy_loopback_set_f                                            f_phymod_phy_loopback_set;
    __dispatch__phymod_phy_loopback_get_f                                            f_phymod_phy_loopback_get;
    __dispatch__phymod_phy_rx_pmd_locked_get_f                                       f_phymod_phy_rx_pmd_locked_get;
    __dispatch__phymod_phy_rx_signal_detect_get_f                                    f_phymod_phy_rx_signal_detect_get;
    __dispatch__phymod_phy_link_status_get_f                                         f_phymod_phy_link_status_get;
    __dispatch__phymod_phy_status_dump_f                                             f_phymod_phy_status_dump;
    __dispatch__phymod_phy_pcs_userspeed_set_f                                       f_phymod_phy_pcs_userspeed_set;
    __dispatch__phymod_phy_pcs_userspeed_get_f                                       f_phymod_phy_pcs_userspeed_get;
    __dispatch__phymod_phy_reg_read_f                                                f_phymod_phy_reg_read;
    __dispatch__phymod_phy_reg_write_f                                               f_phymod_phy_reg_write;
    __dispatch__phymod_phy_private_read_f                                            f_phymod_phy_private_read;
    __dispatch__phymod_phy_private_write_f                                           f_phymod_phy_private_write;
    __dispatch__phymod_phy_rev_id_f                                                  f_phymod_phy_rev_id;
    __dispatch__phymod_phy_lane_cross_switch_map_set_f                               f_phymod_phy_lane_cross_switch_map_set;
    __dispatch__phymod_phy_lane_cross_switch_map_get_f                               f_phymod_phy_lane_cross_switch_map_get;
    __dispatch__phymod_phy_intr_enable_set_f                                         f_phymod_phy_intr_enable_set;
    __dispatch__phymod_phy_intr_enable_get_f                                         f_phymod_phy_intr_enable_get;
    __dispatch__phymod_phy_intr_status_get_f                                         f_phymod_phy_intr_status_get;
    __dispatch__phymod_phy_intr_status_clear_f                                       f_phymod_phy_intr_status_clear;
    __dispatch__phymod_phy_i2c_read_f                                                f_phymod_phy_i2c_read;
    __dispatch__phymod_phy_i2c_write_f                                               f_phymod_phy_i2c_write;
    __dispatch__phymod_phy_gpio_config_set_f                                         f_phymod_phy_gpio_config_set;
    __dispatch__phymod_phy_gpio_config_get_f                                         f_phymod_phy_gpio_config_get;
    __dispatch__phymod_phy_gpio_pin_value_set_f                                      f_phymod_phy_gpio_pin_value_set;
    __dispatch__phymod_phy_gpio_pin_value_get_f                                      f_phymod_phy_gpio_pin_value_get;
    __dispatch__phymod_timesync_config_set_f                                         f_phymod_timesync_config_set;
    __dispatch__phymod_timesync_config_get_f                                         f_phymod_timesync_config_get;
    __dispatch__phymod_timesync_enable_set_f                                         f_phymod_timesync_enable_set;
    __dispatch__phymod_timesync_enable_get_f                                         f_phymod_timesync_enable_get;
    __dispatch__phymod_timesync_nco_addend_set_f                                     f_phymod_timesync_nco_addend_set;
    __dispatch__phymod_timesync_nco_addend_get_f                                     f_phymod_timesync_nco_addend_get;
    __dispatch__phymod_timesync_framesync_mode_set_f                                 f_phymod_timesync_framesync_mode_set;
    __dispatch__phymod_timesync_framesync_mode_get_f                                 f_phymod_timesync_framesync_mode_get;
    __dispatch__phymod_timesync_local_time_set_f                                     f_phymod_timesync_local_time_set;
    __dispatch__phymod_timesync_local_time_get_f                                     f_phymod_timesync_local_time_get;
    __dispatch__phymod_timesync_load_ctrl_set_f                                      f_phymod_timesync_load_ctrl_set;
    __dispatch__phymod_timesync_load_ctrl_get_f                                      f_phymod_timesync_load_ctrl_get;
    __dispatch__phymod_timesync_tx_timestamp_offset_set_f                            f_phymod_timesync_tx_timestamp_offset_set;
    __dispatch__phymod_timesync_tx_timestamp_offset_get_f                            f_phymod_timesync_tx_timestamp_offset_get;
    __dispatch__phymod_timesync_rx_timestamp_offset_set_f                            f_phymod_timesync_rx_timestamp_offset_set;
    __dispatch__phymod_timesync_rx_timestamp_offset_get_f                            f_phymod_timesync_rx_timestamp_offset_get;
    __dispatch__phymod_timesync_capture_timestamp_get_f                              f_phymod_timesync_capture_timestamp_get;
    __dispatch__phymod_timesync_heartbeat_timestamp_get_f                            f_phymod_timesync_heartbeat_timestamp_get;
    __dispatch__phymod_timesync_do_sync_f                                            f_phymod_timesync_do_sync;
    __dispatch__phymod_timesync_offset_set_f                                         f_phymod_timesync_offset_set;
    __dispatch__phymod_timesync_adjust_set_f                                         f_phymod_timesync_adjust_set;
    __dispatch__phymod_edc_config_set_f                                              f_phymod_edc_config_set;
    __dispatch__phymod_edc_config_get_f                                              f_phymod_edc_config_get;
    __dispatch__phymod_phy_core_mode_set_f                                           f_phymod_phy_core_mode_set;
    __dispatch__phymod_phy_core_mode_get_f                                           f_phymod_phy_core_mode_get;
    __dispatch__phymod_failover_mode_set_f                                           f_phymod_failover_mode_set;
    __dispatch__phymod_failover_mode_get_f                                           f_phymod_failover_mode_get;
    __dispatch__phymod_port_init_f                                                   f_phymod_port_init;
    __dispatch__phymod_phy_autoneg_try_enable_f                                      f_phymod_phy_autoneg_try_enable;
    __dispatch__phymod_debug_ether_f                                                 f_phymod_debug_ether;
    __dispatch__phymod_reset_interface_f                                             f_phymod_reset_interface;
    __dispatch__phymod_phy_short_chn_mode_enable_set_f                               f_phymod_phy_short_chn_mode_enable_set;
    __dispatch__phymod_phy_short_chn_mode_enable_get_f                               f_phymod_phy_short_chn_mode_enable_get;
    __dispatch__phymod_port_enable_set_f                                             f_phymod_port_enable_set;
    __dispatch__phymod_port_enable_get_f                                             f_phymod_port_enable_get;
    __dispatch__phymod_phy_eye_margin_est_get_f                                      f_phymod_phy_eye_margin_est_get;
    __dispatch__phymod_phy_multi_get_f                                               f_phymod_phy_multi_get;
    __dispatch__phymod_phy_rescal_set_f                                              f_phymod_phy_rescal_set;
    __dispatch__phymod_phy_rescal_get_f                                              f_phymod_phy_rescal_get;
    __dispatch__phymod_phy_sw_an_control_status_get_f                                f_phymod_phy_sw_an_control_status_get;
    __dispatch__phymod_phy_sw_an_base_page_exchange_handler_f                        f_phymod_phy_sw_an_base_page_exchange_handler;
    __dispatch__phymod_phy_sw_an_lp_page_rdy_handler_f                               f_phymod_phy_sw_an_lp_page_rdy_handler;
    __dispatch__phymod_phy_sw_an_advert_set_f                                        f_phymod_phy_sw_an_advert_set;
    __dispatch__phymod_phy_sw_autoneg_enable_f                                       f_phymod_phy_sw_autoneg_enable;
    __dispatch__phymod_phy_speed_config_set_f                                        f_phymod_phy_speed_config_set;
    __dispatch__phymod_phy_speed_config_get_f                                        f_phymod_phy_speed_config_get;
    __dispatch__phymod_phy_op_mode_get_f                                             f_phymod_phy_op_mode_get;
    __dispatch__phymod_phy_tx_taps_default_get_f                                     f_phymod_phy_tx_taps_default_get;
    __dispatch__phymod_phy_lane_config_default_get_f                                 f_phymod_phy_lane_config_default_get;
    __dispatch__phymod_phy_firmware_load_info_get_f                                  f_phymod_phy_firmware_load_info_get;
    __dispatch__phymod_phy_autoneg_advert_ability_set_f                              f_phymod_phy_autoneg_advert_ability_set;
    __dispatch__phymod_phy_autoneg_advert_ability_get_f                              f_phymod_phy_autoneg_advert_ability_get;
    __dispatch__phymod_phy_autoneg_remote_advert_ability_get_f                       f_phymod_phy_autoneg_remote_advert_ability_get;
    __dispatch__phymod_phy_bond_in_pwrdn_override_f                                  f_phymod_phy_bond_in_pwrdn_override;
    __dispatch__phymod_phy_tx_pam4_precoder_enable_set_f                             f_phymod_phy_tx_pam4_precoder_enable_set;
    __dispatch__phymod_phy_tx_pam4_precoder_enable_get_f                             f_phymod_phy_tx_pam4_precoder_enable_get;
    __dispatch__phymod_phy_tx_phase_lock_set_f                                       f_phymod_phy_tx_phase_lock_set;
    __dispatch__phymod_phy_plls_reconfig_f                                           f_phymod_phy_plls_reconfig;
    __dispatch__phymod_phy_linkdown_transmit_set_f                                   f_phymod_phy_linkdown_transmit_set;
    __dispatch__phymod_phy_linkdown_transmit_get_f                                   f_phymod_phy_linkdown_transmit_get;
} __phymod__dispatch__t__;

extern __phymod__dispatch__t__* __phymod__dispatch__[phymodDispatchTypeCount];

#endif /*_PHYMOD_DISPATCH_H_*/
