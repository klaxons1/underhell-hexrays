int __thiscall sub_102A6A20(int this)
{
  sub_102A21E0((_DWORD *)this);
  *(float *)(this + 136) = 0.0;
  *(_DWORD *)this = &CAI_PassengerBehaviorCompanion::`vftable';
  *(float *)(this + 140) = 0.0;
  *(float *)(this + 144) = 0.0;
  *(_DWORD *)(this + 156) = 0;
  *(float *)(this + 148) = 0.0;
  *(float *)(this + 164) = 0.0;
  *(float *)(this + 168) = 0.0;
  *(float *)(this + 172) = 0.0;
  *(float *)(this + 176) = 0.0;
  *(float *)(this + 180) = -1.0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 188) = 0;
  *(_DWORD *)(this + 192) = 0;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  *(float *)(this + 208) = 0.0;
  *(_DWORD *)(this + 216) = -1;
  sub_102A21B0();
  if ( dword_1065F024 != dword_10694898 )
  {
    sub_102A58F0();
    byte_1065F020 = 1;
    dword_1065F024 = dword_10694898;
  }
  memset((void *)(this + 20), 0, 0x30u);
  *(float *)(this + 180) = -1.0;
  return this;
}
