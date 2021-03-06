//
// Created by mirco on 06.07.20.
//

#ifndef UAVGS_PACKETFORWARDINGPARAMS_H
#define UAVGS_PACKETFORWARDINGPARAMS_H


struct PacketForwardingParams
{
	Parameter<bool> sendData = {false, "send_data", false};
	Parameter<bool> receiveData = {false, "receive_data", false};

	template<typename Config>
	inline void
	configure(Config& c)
	{
		c & sendData;
		c & receiveData;
	}
};

#endif //UAVGS_PACKETFORWARDINGPARAMS_H
