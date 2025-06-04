FFMPEG=..\ffmpeg

CFLAGS=-nologo -W3 -O2x -LD -EHsc -DNDEBUG -DUNICODE -D_UNICODE-DFFMPEGMFT_EXPORTS -D_WINDOWS -D_USLDLL -I$(FFMPEG)\include -Yc
CPPFLAGS=$(CFLAGS)
LFLAGS=-NOLOGO -RELEASE -OPT:REF -LIBPATH:$(FFMPEG)\lib -DEF:FFmpegMFT.def -DLL

LIBRARIES= \
    mf.lib \
    mfplat.lib \
    mfuuid.lib \
    evr.lib \
    strmiids.lib \
    shlwapi.lib \
    avcodec.lib \
    avdevice.lib \
    avfilter.lib \
    avformat.lib \
    avutil.lib \
    swresample.lib \
    swscale.lib \

OBJ_FILES= \
    dllmain.obj \
    abs_decoder_impl.obj \
    cpu_decoder_impl.obj \
    hw_decoder_impl.obj \
    hybrid_decoder_impl.obj \
    decoder.obj \
    FFmpegMFT.obj \
    MFTClassFactory.obj \
    stdafx.obj \

RES_FILES= \
    FFmpegMFT.res \

ffmpegmft.dll : $(OBJ_FILES) $(RES_FILES)
    link $(LFLAGS) $(LIBRARIES) -OUT:$@ $**
