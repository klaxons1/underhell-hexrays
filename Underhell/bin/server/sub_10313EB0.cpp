int __thiscall sub_10313EB0(int this)
{
  float *v3; // eax
  double v4; // st6
  double v5; // st7
  float v6; // [esp+8h] [ebp-78h]
  float v7[24]; // [esp+14h] [ebp-6Ch] BYREF
  float v8[3]; // [esp+74h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 1136) )
    return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 8) )
  {
    sub_1001F130(v7);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = sub_1001F010(v8, -64.0, 64.0);
    v4 = v3[1] + *(float *)(this + 584);
    v5 = v3[2] + *(float *)(this + 588);
    v7[0] = *v3 + *(float *)(this + 580);
    v7[1] = v4;
    v7[2] = v5;
    sub_1028E890((int)"HelicopterMegaBomb", (int)v7);
    sub_1023C380((_DWORD *)this, (int)"BaseExplosionEffect.Sound", 0.0, 0);
  }
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v6, 0);
}
