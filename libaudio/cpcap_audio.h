/* include/linux/cpcap_audio.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *     Iliyan Malchev <malchev@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _CPCAP_AUDIO_H
#define _CPCAP_AUDIO_H

#include <linux/ioctl.h>

#define CPCAP_AUDIO_MAGIC 'c'

#define CPCAP_AUDIO_OUT_SPEAKER		0
#define CPCAP_AUDIO_OUT_HEADSET		1
#define CPCAP_AUDIO_OUT_MAX		1

struct cpcap_audio_output {
	int id; /* e.g., CPCAP_AUDIO_OUT_SPEAKER */
	int on;
};

#define CPCAP_AUDIO_OUT_SET_OUTPUT _IOW(CPCAP_AUDIO_MAGIC, 0, \
			struct cpcap_audio_output *)

#define CPCAP_AUDIO_OUT_VOL_MIN 0
#define CPCAP_AUDIO_OUT_VOL_MAX 15

#define CPCAP_AUDIO_OUT_SET_VOLUME _IOW(CPCAP_AUDIO_MAGIC, 1, unsigned int)

#define CPCAP_AUDIO_OUT_GET_OUTPUT \
			_IOR(CPCAP_AUDIO_MAGIC, 2, unsigned int *)
#define CPCAP_AUDIO_OUT_GET_VOLUME \
			_IOR(CPCAP_AUDIO_MAGIC, 3, unsigned int *)

#define CPCAP_AUDIO_IN_MIC1		0
#define CPCAP_AUDIO_IN_MIC2		1
#define CPCAP_AUDIO_IN_MAX		1

#define CPCAP_AUDIO_IN_SET_INPUT   _IOW(CPCAP_AUDIO_MAGIC, 4, unsigned int)

#define CPCAP_AUDIO_IN_GET_INPUT   _IOR(CPCAP_AUDIO_MAGIC, 5, unsigned int *)

#define CPCAP_AUDIO_IN_VOL_MIN 0
#define CPCAP_AUDIO_IN_VOL_MAX 31

#define CPCAP_AUDIO_IN_SET_VOLUME  _IOW(CPCAP_AUDIO_MAGIC, 6, unsigned int)

#define CPCAP_AUDIO_IN_GET_VOLUME  _IOR(CPCAP_AUDIO_MAGIC, 7, unsigned int *)

#endif/*_CPCAP_AUDIO_H*/
