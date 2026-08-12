void __thiscall sub_103727F0(int this)
{
  int v2; // ecx
  float v3; // [esp+0h] [ebp-24h]
  float v4[3]; // [esp+Ch] [ebp-18h] BYREF
  float v5; // [esp+18h] [ebp-Ch]
  float v6; // [esp+1Ch] [ebp-8h]
  float v7; // [esp+20h] [ebp-4h]

  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v3, off_1067425C);
  if ( *(_BYTE *)(this + 447) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v2 = *(_DWORD *)(this + 252) >> 11;
    v5 = *(float *)(this + 476) * 0.1;
    v6 = *(float *)(this + 480) * 0.1;
    v7 = 0.1 * *(float *)(this + 484);
    if ( (v2 & 1) != 0 )
      sub_100DAE60(this);
    v4[0] = *(float *)(this + 580) - v5;
    v4[1] = *(float *)(this + 584) - v6;
    v4[2] = *(float *)(this + 588) - v7;
    sub_10261F70(v4, (float *)(this + 580), 5);
  }
}
