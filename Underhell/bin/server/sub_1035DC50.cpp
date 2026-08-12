char __thiscall sub_1035DC50(int this, int a2, float *a3, int a4)
{
  double v6; // st6
  double v7; // st7

  if ( a2 == dword_106E50A8 )
    return 0;
  if ( a2 != dword_106E50B0 )
    return sub_10038420((int *)this, a2, (int)a3, a4);
  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
    sub_101C73D0((unsigned int *)this, 0);
  if ( a3 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = *(float *)(this + 584);
    v7 = *(float *)(this + 588) + 5.0;
    *a3 = *(float *)(this + 580);
    a3[1] = v6;
    a3[2] = v7;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 408))(this);
  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  return 1;
}
