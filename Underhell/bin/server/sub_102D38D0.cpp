int __thiscall sub_102D38D0(int this)
{
  double v2; // st6
  double v3; // st7
  float v5[3]; // [esp+Ch] [ebp-18h] BYREF
  float v6[3]; // [esp+18h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_100EAB80((_DWORD *)this, 32);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  v5[0] = -350.0;
  v5[1] = -350.0;
  v5[2] = -350.0;
  v6[0] = 350.0;
  v6[1] = 350.0;
  v6[2] = 350.0;
  sub_1025F360((_DWORD *)this, (int)v5, (int)v6);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584) - *(float *)(this + 832);
  v3 = *(float *)(this + 588) - *(float *)(this + 836);
  *(float *)(this + 840) = *(float *)(this + 580) - *(float *)(this + 828);
  *(float *)(this + 844) = v2;
  *(float *)(this + 848) = v3;
  off_10689714();
  *(float *)(this + 852) = *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_102D25E0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  *(_DWORD *)(this + 252) |= 0x80u;
  return sub_100D8500((_DWORD *)this);
}
