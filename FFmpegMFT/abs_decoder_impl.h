#pragma once
#include "IDecoderStrategy.h"

extern "C"
{
	#include <libavcodec/avcodec.h>
}

class abs_decoder_impl : public IDecoderStrategy
{
public:
	abs_decoder_impl();
	virtual ~abs_decoder_impl();

	virtual bool init(std::string codec_name, DWORD pixel_format) = 0;
	virtual bool release();
	virtual long get_last_error();

	virtual bool decode(unsigned char* in, int in_size, void*& out, int pitch) = 0;
	virtual void flush();

protected:
	/*FFmpeg related members*/
	AVCodec const*		m_avCodec;
	AVCodecContext* m_avContext;
	AVFrame*		m_avFrame;
	AVPacket*		m_avPkt;

	DWORD			m_dwPixelFmt;
	long			m_lLastErr;
};