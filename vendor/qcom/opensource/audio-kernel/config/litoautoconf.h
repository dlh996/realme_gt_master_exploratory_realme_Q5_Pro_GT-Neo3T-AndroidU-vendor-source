/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2019-2020, The Linux Foundation. All rights reserved.
 */

#define CONFIG_PINCTRL_LPI 1
#define CONFIG_AUDIO_EXT_CLK 1
#define CONFIG_SND_SOC_WCD9XXX_V2 1
#define CONFIG_SND_SOC_WCD_MBHC 1
#define CONFIG_SND_SOC_WSA881X 1
#define CONFIG_SND_SOC_WSA883X 1
#define CONFIG_WCD9XXX_CODEC_CORE_V2 1
#define CONFIG_MSM_CDC_PINCTRL 1
#define CONFIG_MSM_QDSP6V2_CODECS 1
#define CONFIG_MSM_ULTRASOUND 1
#define CONFIG_MSM_QDSP6_APRV2_RPMSG 1
#define CONFIG_SND_SOC_MSM_QDSP6V2_INTF 1
#define CONFIG_MSM_ADSP_LOADER 1
#define CONFIG_REGMAP_SWR 1
#define CONFIG_MSM_QDSP6_SSR 1
#define CONFIG_MSM_QDSP6_PDR 1
#define CONFIG_MSM_QDSP6_NOTIFIER 1
#define CONFIG_SND_SOC_MSM_HOSTLESS_PCM 1
#define CONFIG_SOUNDWIRE 1
#define CONFIG_SOUNDWIRE_MSTR_CTRL 1
#define CONFIG_SND_SOC_WCD_MBHC_ADC 1
#define CONFIG_SND_SOC_QDSP6V2 1
#define CONFIG_SND_SOC_MSM_HDMI_CODEC_RX 1
#define CONFIG_QTI_PP 1
#define CONFIG_SND_HWDEP_ROUTING 1
#define CONFIG_SND_SOC_MSM_STUB 1
#define CONFIG_MSM_AVTIMER 1
#define CONFIG_SND_SOC_BOLERO 1
#define CONFIG_WSA_MACRO 1
#define CONFIG_VA_MACRO 1
#define CONFIG_RX_MACRO 1
#define CONFIG_TX_MACRO 1
#define CONFIG_DIGITAL_CDC_RSC_MGR 1
#define CONFIG_SND_SOC_WCD_IRQ 1
#define CONFIG_SND_SOC_WCD938X 1
#define CONFIG_SND_SOC_WCD938X_SLAVE 1
#define CONFIG_SND_SOC_WCD937X 1
#define CONFIG_SND_SOC_WCD937X_SLAVE 1
#define CONFIG_SND_SOC_LITO 1
#define CONFIG_SND_EVENT 1
#ifdef OPLUS_ARCH_EXTENDS
//#define CONFIG_MI2S_DISABLE 1
//#define CONFIG_TDM_DISABLE 1
//#define CONFIG_AUXPCM_DISABLE 1
#endif

#ifdef OPLUS_ARCH_EXTENDS
#define CONFIG_SND_SOC_TFA98XX 1
#define OPLUS_FEATURE_SPEAKER_MUTE 1
#define OPLUS_FEATURE_FADE_IN  1
#define CONFIG_SND_SOC_SIA81XX 1
#define OPLUS_FEATURE_PLATFORM_LITO 1
#define OPLUS_FEATURE_SMARTPA_PM 1

#ifdef CONFIG_SND_SOC_TFA98XX
#define OPLUS_FEATURE_TFA98XX_VI_FEEDBACK 1
#endif
#endif /* OPLUS_ARCH_EXTENDS */