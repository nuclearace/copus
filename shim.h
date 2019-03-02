#ifndef __COPUS_SHIM_H__
#define __COPUS_SHIM_H__

#include <opus.h>

#define OPUS_SHIM_CTL(macroname, funcname, vartype, varname) \
inline int opus_encoder_##funcname(OpusEncoder *st, vartype varname) {\
	return opus_encoder_ctl(st, OPUS_##macroname(varname));\
}

#include "ctl_shim.h"

#define OPUS_SHIM_CTL(macroname, funcname, vartype, varname) \
inline int opus_decoder_##funcname(OpusDecoder *st, vartype varname) {\
	return opus_decoder_ctl(st, OPUS_##macroname(varname));\
}

#include "ctl_shim.h"

#endif
