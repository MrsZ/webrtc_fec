CC := g++
SOURCE_DIR = webrtc/src/modules/rtp_rtcp/source/
SRCS =  $(SOURCE_DIR)../include/rtp_rtcp_defines.cc $(SOURCE_DIR)dtmf_queue.cc $(SOURCE_DIR)fec_private_tables_bursty.cc $(SOURCE_DIR)fec_private_tables_random.cc \
	 $(SOURCE_DIR)flexfec_header_reader_writer.cc \
       $(SOURCE_DIR)flexfec_receiver.cc $(SOURCE_DIR)flexfec_sender.cc $(SOURCE_DIR)forward_error_correction.cc $(SOURCE_DIR)forward_error_correction_internal.cc \
	$(SOURCE_DIR)packet_loss_stats.cc $(SOURCE_DIR)playout_delay_oracle.cc $(SOURCE_DIR)receive_statistics_impl.cc $(SOURCE_DIR)remote_ntp_time_estimator.cc \
	$(SOURCE_DIR)rtcp_nack_stats.cc $(SOURCE_DIR)rtcp_receiver.cc $(SOURCE_DIR)rtcp_sender.cc $(SOURCE_DIR)rtp_format.cc $(SOURCE_DIR)rtp_format_h264.cc \
	$(SOURCE_DIR)rtp_format_video_generic.cc $(SOURCE_DIR)rtp_format_vp8.cc $(SOURCE_DIR)rtp_format_vp9.cc $(SOURCE_DIR)rtp_header_parser.cc  \
	$(SOURCE_DIR)rtp_header_extension_map.cc $(SOURCE_DIR)rtp_header_extensions.cc $(SOURCE_DIR)rtp_packet.cc\
	$(SOURCE_DIR)rtp_packet_history.cc $(SOURCE_DIR)rtp_packet_received.cc $(SOURCE_DIR)rtp_packet_to_send.cc $(SOURCE_DIR)rtp_payload_registry.cc \
	$(SOURCE_DIR)rtp_receiver_audio.cc $(SOURCE_DIR)rtp_receiver_impl.cc \
	$(SOURCE_DIR)rtp_receiver_strategy.cc $(SOURCE_DIR)rtp_receiver_video.cc $(SOURCE_DIR)rtp_rtcp_impl.cc $(SOURCE_DIR)rtp_sender.cc $(SOURCE_DIR)rtp_sender_audio.cc \
	$(SOURCE_DIR)rtp_sender_video.cc $(SOURCE_DIR)rtp_utility.cc $(SOURCE_DIR)time_util.cc $(SOURCE_DIR)tmmbr_help.cc $(SOURCE_DIR)ulpfec_generator.cc \
	$(SOURCE_DIR)ulpfec_header_reader_writer.cc $(SOURCE_DIR)ulpfec_receiver_impl.cc

SOURCE_DIR_WRAPPERS = webrtc/src/system_wrappers/source/
SRCS_WRAPPERS = $(SOURCE_DIR_WRAPPERS)clock.cc $(SOURCE_DIR_WRAPPERS)cpu_features.cc $(SOURCE_DIR_WRAPPERS)cpu_info.cc $(SOURCE_DIR_WRAPPERS)event.cc \
	        $(SOURCE_DIR_WRAPPERS)event_timer_posix.cc $(SOURCE_DIR_WRAPPERS)rtp_to_ntp_estimator.cc $(SOURCE_DIR_WRAPPERS)sleep.cc

SOURCE_DIR_API = webrtc/src/api/
SRCS_API = $(SOURCE_DIR_API)audio_codecs/audio_format.cc $(SOURCE_DIR_API)rtp_headers.cc $(SOURCE_DIR_API)rtpparameters.cc $(SOURCE_DIR_API)video/video_content_type.cc

SOURCE_DIR_RTC_BASE = webrtc/src/rtc_base/
SRCS_RTC_BASE = $(SOURCE_DIR_RTC_BASE)checks.cc $(SOURCE_DIR_RTC_BASE)copyonwritebuffer.cc $(SOURCE_DIR_RTC_BASE)criticalsection.cc $(SOURCE_DIR_RTC_BASE)event.cc \
	        $(SOURCE_DIR_RTC_BASE)logging.cc $(SOURCE_DIR_RTC_BASE)platform_thread.cc $(SOURCE_DIR_RTC_BASE)platform_thread_types.cc $(SOURCE_DIR_RTC_BASE)random.cc \
		$(SOURCE_DIR_RTC_BASE)synchronization/rw_lock_posix.cc $(SOURCE_DIR_RTC_BASE)synchronization/rw_lock_wrapper.cc  \
		$(SOURCE_DIR_RTC_BASE)sequenced_task_checker_impl.cc $(SOURCE_DIR_RTC_BASE)strings/string_builder.cc $(SOURCE_DIR_RTC_BASE)stringencode.cc \
		$(SOURCE_DIR_RTC_BASE)task_queue_posix.cc $(SOURCE_DIR_RTC_BASE)task_queue_libevent.cc $(SOURCE_DIR_RTC_BASE)thread_checker_impl.cc \
		$(SOURCE_DIR_RTC_BASE)timeutils.cc $(SOURCE_DIR_RTC_BASE)zero_memory.cc 

SOURCE_DIR_LIBEVENT = webrtc/src/base/third_party/libevent/
SRCS_RTC_LIBEVENT = $(SOURCE_DIR_LIBEVENT)buffer.c $(SOURCE_DIR_LIBEVENT)evbuffer.c $(SOURCE_DIR_LIBEVENT)evdns.c $(SOURCE_DIR_LIBEVENT)event.c \
		    $(SOURCE_DIR_LIBEVENT)event_tagging.c $(SOURCE_DIR_LIBEVENT)evrpc.c $(SOURCE_DIR_LIBEVENT)evutil.c $(SOURCE_DIR_LIBEVENT)http.c \
		    $(SOURCE_DIR_LIBEVENT)log.c $(SOURCE_DIR_LIBEVENT)poll.c $(SOURCE_DIR_LIBEVENT)select.c $(SOURCE_DIR_LIBEVENT)signal.c \
		    $(SOURCE_DIR_LIBEVENT)strlcpy.c $(SOURCE_DIR_LIBEVENT)epoll.c 


INCLUDE_DIR = webrtc/src -Iwebrtc/src/base/third_party/libevent/linux/ -Iwebrtc/src/base/third_party/libevent/

OBJ = rtp_rtcp_defines.o dtmf_queue.o fec_private_tables_bursty.o fec_private_tables_random.o flexfec_header_reader_writer.o \
      flexfec_receiver.o flexfec_sender.o forward_error_correction.o forward_error_correction_internal.o \
      packet_loss_stats.o playout_delay_oracle.o receive_statistics_impl.o remote_ntp_time_estimator.o \
      rtcp_nack_stats.o rtcp_receiver.o rtcp_sender.o rtp_format.o rtp_format_h264.o \
      rtp_format_video_generic.o rtp_format_vp8.o rtp_format_vp9.o rtp_header_extension_map.o rtp_header_extensions.o rtp_header_parser.o rtp_packet.o \
      rtp_packet_history.o rtp_packet_received.o rtp_packet_to_send.o rtp_payload_registry.o rtp_receiver_audio.o rtp_receiver_impl.o \
      rtp_receiver_strategy.o rtp_receiver_video.o rtp_rtcp_impl.o rtp_sender.o rtp_sender_audio.o \
      rtp_sender_video.o rtp_utility.o time_util.o tmmbr_help.o ulpfec_generator.o \
      ulpfec_header_reader_writer.o ulpfec_receiver_impl.o clock.o cpu_features.o cpu_info.o event.o event_timer_posix.o rtp_to_ntp_estimator.o sleep.o \
      audio_format.o rtp_headers.o rtpparameters.o video_content_type.o checks.o copyonwritebuffer.o criticalsection.o event.o logging.o platform_thread.o \
      platform_thread_types.o random.o rw_lock_posix.o rw_lock_wrapper.o sequenced_task_checker_impl.o string_builder.o \
      stringencode.o task_queue_posix.o task_queue_libevent.o thread_checker_impl.o timeutils.o zero_memory.o 

OBJ_LIBEVENT = buffer.o evbuffer.o evdns.o event.o event_tagging.o \
      	       evrpc.o evutil.o http.o log.o poll.o select.o signal.o strlcpy.o epoll.o

CFLAGS = -std=c++11 -pthread
DEFINES = -DWEBRTC_POSIX -DWEBRTC_LINUX -DHAVE_CONFIG_H
TARGET = libwebrtc_fec.a
$(TARGET): $(SRCS) $(SRCS_WRAPPERS) $(SRCS_API) $(SRCS_RTC_BASE) 
	$(CC) -c $(SRCS) $(SRCS_WRAPPERS) $(SRCS_API) $(SRCS_RTC_BASE)  -I$(INCLUDE_DIR)  $(CFLAGS) $(DEFINES)
	ar crsv $(TARGET) $(OBJ)
	ranlib $(TARGET)

libevent.a: $(SRCS_RTC_LIBEVENT)
	gcc -c $(SRCS_RTC_LIBEVENT) -Iwebrtc/src/ -Iwebrtc/src/base/third_party/libevent/linux/ -Iwebrtc/src/base/third_party/libevent/ -DHAVE_CONFIG_H
	ar crsv libevent.a $(OBJ_LIBEVENT) 
	ranlib libevent.a

.PHONY: clean test-flexfec-decoder test-flexfec-encoder 

clean:
	rm *.o $(TARGET)

test-flexfec-decoder:
	$(CC) -o test-flexfec-decoder-1 test-flexfec-decoder/main.cpp -L./ -lwebrtc_fec -levent -I$(INCLUDE_DIR) $(CFLAGS) $(DEFINES)

test-flexfec-encoder:
	$(CC) -o test-flexfec-encoder-1 test-flexfec-encoder/main.cpp -L./ -lwebrtc_fec -levent -I$(INCLUDE_DIR) $(CFLAGS) $(DEFINES)



