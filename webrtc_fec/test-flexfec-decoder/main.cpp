#include <algorithm>
#include <memory>

#include "modules/rtp_rtcp/include/flexfec_receiver.h"

#include "modules/rtp_rtcp/source/fec_test_helper.h"
#include "modules/rtp_rtcp/source/forward_error_correction.h"
#include "modules/rtp_rtcp/source/rtp_packet_received.h"
#include "rtc_base/basictypes.h"
namespace webrtc {
	namespace {

		
		using Packet = ForwardErrorCorrection::Packet;
		using PacketList = ForwardErrorCorrection::PacketList;

		constexpr size_t kPayloadLength = 500;
		constexpr uint32_t kFlexfecSsrc = 42984;
		constexpr uint32_t kMediaSsrc = 8353;

	
	}  // namespace


void testFlexfecDecoder()
{
	const size_t kNumMediaPackets = 1;
	const size_t kNumFecPackets = 1;
	//PacketList media_packets;
	FlexfecReceiver *receiver_ = new FlexfecReceiver(0,0,nullptr);
}
}
int main()
{
	webrtc::testFlexfecDecoder();

	return 0;
}