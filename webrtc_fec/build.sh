#!/bin/bash
make libevent.a
#rm libwebrtc_fec.a
make
make test-flexfec-decoder
make test-flexfec-encoder
