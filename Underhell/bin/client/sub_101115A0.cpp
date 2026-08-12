int __thiscall sub_101115A0(int this)
{
  sub_1002F0F0((char *)this);
  *(_DWORD *)this = &C_ServerRagdoll::`vftable';
  *(_DWORD *)(this + 4) = &C_ServerRagdoll::`vftable';
  *(_DWORD *)(this + 8) = &C_ServerRagdoll::`vftable';
  *(_DWORD *)(this + 12) = &C_ServerRagdoll::`vftable';
  *(_DWORD *)(this + 2536) = &CInterpolatedVarArrayBase<Vector,1>::`vftable';
  *(_DWORD *)(this + 2544) = 0;
  *(_DWORD *)(this + 2548) = 0;
  *(_DWORD *)(this + 2552) = 0x100000;
  sub_10027660((unsigned __int16 *)(this + 2544), 4);
  *(float *)(this + 2572) = 0.0;
  *(float *)(this + 2560) = 0.0;
  *(_DWORD *)(this + 2576) = "C_ServerRagdoll::m_iv_ragPos";
  *(_DWORD *)(this + 2540) = 0;
  *(_WORD *)(this + 2564) = 1;
  *(_DWORD *)(this + 2556) = 0;
  *(_DWORD *)(this + 2568) = 0;
  *(_DWORD *)(this + 2536) = &CInterpolatedVarArray<Vector,24>::`vftable';
  sub_1010EC10((unsigned __int8 *)(this + 2536), 24);
  *(_DWORD *)(this + 2580) = &CInterpolatedVarArrayBase<QAngle,1>::`vftable';
  *(_DWORD *)(this + 2588) = 0;
  *(_DWORD *)(this + 2592) = 0;
  *(_DWORD *)(this + 2596) = 0x100000;
  sub_10027660((unsigned __int16 *)(this + 2588), 4);
  *(float *)(this + 2616) = 0.0;
  *(float *)(this + 2604) = 0.0;
  *(_DWORD *)(this + 2620) = "C_ServerRagdoll::m_iv_ragAngles";
  *(_DWORD *)(this + 2584) = 0;
  *(_WORD *)(this + 2608) = 1;
  *(_DWORD *)(this + 2600) = 0;
  *(_DWORD *)(this + 2612) = 0;
  *(_DWORD *)(this + 2580) = &CInterpolatedVarArray<QAngle,24>::`vftable';
  sub_1010EC10((unsigned __int8 *)(this + 2580), 24);
  *(_DWORD *)(this + 2724) = -1;
  *(float *)(this + 2740) = -3.4028235e38;
  *(_DWORD *)(this + 2624) = 0;
  sub_1003CF30((int *)this, this + 1960, (int *)(this + 2536), 2, 0);
  sub_1003CF30((int *)this, this + 2248, (int *)(this + 2580), 2, 0);
  if ( *(_DWORD *)(this + 2728) != COERCE_INT(0.0) )
    *(float *)(this + 2728) = 0.0;
  *(float *)(this + 2732) = 0.0;
  if ( *(_DWORD *)(this + 2736) != -1 )
    *(_DWORD *)(this + 2736) = -1;
  *(float *)(this + 1320) = 1.0;
  return this;
}
