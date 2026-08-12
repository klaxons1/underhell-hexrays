double __thiscall sub_1037EFF0(int this)
{
  int v2; // eax
  float v4; // [esp+0h] [ebp-8h]

  v2 = *(_DWORD *)(this + 2380);
  if ( v2 == 64 || v2 == dword_106E98B0 )
    return 16.0;
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v4 = *(float *)(this + 480) * *(float *)(this + 480)
     + *(float *)(this + 476) * *(float *)(this + 476)
     + *(float *)(this + 484) * *(float *)(this + 484);
  return fabs(off_10689708(v4)) * 0.0020000001 * 26.0 + 4.0;
}
