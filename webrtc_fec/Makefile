CC := g++
SOURCE_DIR = webrtc/src/modules/rtp_rtcp/source/
SRCS = $(SOURCE_DIR)dtmf_queue.cc $(SOURCE_DIR)fec_private_tables_bursty.cc $(SOURCE_DIR)fec_private_tables_random.cc $(SOURCE_DIR)flexfec_header_reader_writer.cc \
       $(SOURCE_DIR)flexfec_receiver.cc $(SOURCE_DIR)flexfec_sender.cc $(SOURCE_DIR)forward_error_correction.cc $(SOURCE_DIR)forward_error_correction_internal.cc \
	$(SOURCE_DIR)packet_loss_stats.cc $(SOURCE_DIR)playout_delay_oracle.cc $(SOURCE_DIR)receive_statistics_impl.cc $(SOURCE_DIR)remote_ntp_time_estimator.cc \
	$(SOURCE_DIR)rtcp_nack_stats.cc $(SOURCE_DIR)rtcp_receiver.cc $(SOURCE_DIR)rtcp_sender.cc $(SOURCE_DIR)rtp_format.cc $(SOURCE_DIR)rtp_format_h264.cc \
	$(SOURCE_DIR)rtp_format_video_generic.cc $(SOURCE_DIR)rtp_format_vp8.cc $(SOURCE_DIR)rtp_format_vp9.cc $(SOURCE_DIR)rtp_header_parser.cc \
	$(SOURCE_DIR)rtp_packet_history.cc $(SOURCE_DIR)rtp_payload_registry.cc $(SOURCE_DIR)rtp_receiver_audio.cc $(SOURCE_DIR)rtp_receiver_impl.cc \
	$(SOURCE_DIR)rtp_receiver_strategy.cc $(SOURCE_DIR)rtp_receiver_video.cc $(SOURCE_DIR)rtp_rtcp_impl.cc $(SOURCE_DIR)rtp_sender.cc $(SOURCE_DIR)rtp_sender_audio.cc \
	$(SOURCE_DIR)rtp_sender_video.cc $(SOURCE_DIR)rtp_utility.cc $(SOURCE_DIR)time_util.cc $(SOURCE_DIR)tmmbr_help.cc $(SOURCE_DIR)ulpfec_generator.cc \
	$(SOURCE_DIR)ulpfec_header_reader_writer.cc $(SOURCE_DIR)ulpfec_receiver_impl.cc

INCLUDE_DIR = webrtc/src

OBJ = dtmf_queue.o fec_private_tables_bursty.o fec_private_tables_random.o flexfec_header_reader_writer.o \
      flexfec_receiver.o flexfec_sender.o forward_error_correction.o forward_error_correction_internal.o \
      packet_loss_stats.o playout_delay_oracle.o receive_statistics_impl.o remote_ntp_time_estimator.o \
      rtcp_nack_stats.o rtcp_receiver.o rtcp_sender.o rtp_format.o rtp_format_h264.o \
      rtp_format_video_generic.o rtp_format_vp8.o rtp_format_vp9.o rtp_header_parser.o \
      rtp_packet_history.o rtp_payload_registry.o rtp_receiver_audio.o rtp_receiver_impl.o \
      rtp_receiver_strategy.o rtp_receiver_video.o rtp_rtcp_impl.o rtp_sender.o rtp_sender_audio.o \
      rtp_sender_video.o rtp_utility.o time_util.o tmmbr_help.o ulpfec_generator.o \
      ulpfec_header_reader_writer.o ulpfec_receiver_impl.o

CFLAGS = -std=c++11 
TARGET = libwebrtc_fec.a
$(TARGET): $(SRCS)
	$(CC) -c $(SRCS) -I$(INCLUDE_DIR)  $(CFLAGS) -DWEBRTC_POSIX
	ar crsv $(TARGET) $(OBJ)
	ranlib $(TARGET)

.PHONY: clean

clean:
	rm *.o $(TARGET)



