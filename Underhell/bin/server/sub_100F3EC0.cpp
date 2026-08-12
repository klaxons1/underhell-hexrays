void __thiscall sub_100F3EC0(int this)
{
  double v2; // st7
  int v3; // ecx
  int v4; // edx
  float v5; // [esp+8h] [ebp-28h]
  float v6; // [esp+Ch] [ebp-24h]
  int v7; // [esp+14h] [ebp-1Ch] BYREF
  float v8; // [esp+18h] [ebp-18h]
  float v9; // [esp+1Ch] [ebp-14h]
  float v10; // [esp+20h] [ebp-10h]
  float v11; // [esp+24h] [ebp-Ch]
  float v12; // [esp+28h] [ebp-8h]
  float v13; // [esp+2Ch] [ebp-4h]

  if ( sub_100DCD90(this) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v6 = *(float *)(this + 480) * *(float *)(this + 480)
       + *(float *)(this + 476) * *(float *)(this + 476)
       + *(float *)(this + 484) * *(float *)(this + 484);
    v2 = off_10689708(v6);
    v3 = *(_DWORD *)(this + 252);
    v13 = v2;
    if ( (v3 & 0x1000) != 0 )
      sub_100DAFD0(this);
    v4 = *(_DWORD *)(this + 252) >> 11;
    v10 = *(float *)(this + 476) * 0.5;
    v11 = *(float *)(this + 480) * 0.5;
    v12 = 0.5 * *(float *)(this + 484);
    if ( (v4 & 1) != 0 )
      sub_100DAE60(this);
    *(float *)&v7 = *(float *)(this + 580) + v10;
    v8 = *(float *)(this + 584) + v11;
    v9 = *(float *)(this + 588) + v12;
    sub_1023D4B0(8, (int)&v7, (int)v13, 0.2, this, 0, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.2;
    sub_100EC4A0((int *)this, v5, 0);
    if ( *(_BYTE *)(this + 447) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      *(float *)&v7 = *(float *)(this + 476) * 0.5;
      v8 = *(float *)(this + 480) * 0.5;
      v9 = 0.5 * *(float *)(this + 484);
      sub_100DD660(this, (float *)&v7);
    }
  }
  else
  {
    sub_100D6A00((void *)this);
  }
}
