#include <vector>


#include "modules/rtp_rtcp/include/flexfec_sender.h"
#include "modules/rtp_rtcp/include/rtp_rtcp_defines.h"
#include "modules/rtp_rtcp/source/fec_test_helper.h"
#include "modules/rtp_rtcp/source/rtp_header_extensions.h"
#include "modules/rtp_rtcp/source/rtp_packet_to_send.h"
#include "modules/rtp_rtcp/source/rtp_sender.h"
#include "modules/rtp_rtcp/source/rtp_utility.h"
namespace webrtc {
	const std::vector<RtpExtension> kNoRtpHeaderExtensions;
	const std::vector<RtpExtensionSize> kNoRtpHeaderExtensionSizes;
	constexpr int64_t kInitialSimulatedClockTime = 1;
	namespace {
		void testFlexfecEncoder()
		{
			SimulatedClock clock(kInitialSimulatedClockTime);
			webrtc::FlexfecSender sender(123, 5768, 1234,
				kNoRtpHeaderExtensions, kNoRtpHeaderExtensionSizes,
				nullptr /* rtp_state */, &clock);
		}
	}
}
int main()
{
	//

	webrtc::testFlexfecEncoder();

	return 0;
}