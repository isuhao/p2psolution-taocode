//-----------------------------------------------------------------------------
// (C) oil
// 2013-10-06
//-----------------------------------------------------------------------------
#ifndef _SoP2PDefine_h_
#define _SoP2PDefine_h_
//-----------------------------------------------------------------------------
#include "SoBaseTypeDefine.h"
using namespace GGUI;
//-----------------------------------------------------------------------------
//当客户端登录到GameServer时，GameServer负责为客户端分配一个ClientID。
//每个客户端必须唯一对应一个ClientID；ClientID不能重复。
//当客户端与P2PServer交互时，会携带着自己的ClientID。
//P2PServer根据ClinetID找到这个客户端的SoPeerIndex。
typedef soint64 SoClientID;
const SoClientID Invalid_SoClientID = -1;

//当客户端登录到P2PServer后，P2PServer会为其分配一个Peer对象，
//该Peer对象在Peer数组中的下标即为SoPeerIndex。
typedef soint64 SoPeerIndex;
const SoPeerIndex Invalid_SoPeerIndex = -1;
//-----------------------------------------------------------------------------
#endif //_SoP2PDefine_h_
//-----------------------------------------------------------------------------
