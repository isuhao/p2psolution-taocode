//--------------------------------------------------------------------
// (C) oil
// 2013-10-06
//--------------------------------------------------------------------
#ifndef _SoPeerMonitorServer_h_
#define _SoPeerMonitorServer_h_
//--------------------------------------------------------------------
#include "SoP2PServerDefine.h"
//--------------------------------------------------------------------
class SoPeerMonitorServer
{
public:
	SoPeerMonitorServer();
	~SoPeerMonitorServer();

private:
	ENetPeer* m_pPeer;
};
//--------------------------------------------------------------------
#endif //_SoPeerMonitorServer_h_
//--------------------------------------------------------------------