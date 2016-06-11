#pragma once

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/mathematics.h>
#include <libavutil/rational.h>
#include <libavutil/avstring.h>
#include <libswscale/swscale.h>
#include <libavutil/intreadwrite.h>
#include <libavutil/dict.h>
}

/* checking version compatibility */
#define LIBAVCODEC_VER_AT_LEAST(major,minor)  (LIBAVCODEC_VERSION_MAJOR > major || \
                                              (LIBAVCODEC_VERSION_MAJOR == major && \
                                               LIBAVCODEC_VERSION_MINOR >= minor))


#if !LIBAVCODEC_VER_AT_LEAST(54,25)
    #define AV_CODEC_ID_NONE CODEC_ID_NONE
    #define AV_CODEC_ID_MJPEG CODEC_ID_MJPEG
    #define AV_CODEC_ID_RAWVIDEO CODEC_ID_RAWVIDEO
    #define AV_CODEC_ID_H264 CODEC_ID_H264
    #define AV_CODEC_ID_VP8 CODEC_ID_VP8
    #define AVCodecID CodecID
#endif

#if !LIBAVCODEC_VER_AT_LEAST(54,25)
    #define AV_CODEC_ID_H264 CODEC_ID_H264
#endif


