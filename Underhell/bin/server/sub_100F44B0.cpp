void __thiscall sub_100F44B0(int this)
{
  double v2; // st7
  int v3; // ecx
  float v4; // [esp+8h] [ebp-24h]
  int v5; // [esp+14h] [ebp-18h] BYREF
  float v6; // [esp+18h] [ebp-14h]
  float v7; // [esp+1Ch] [ebp-10h]
  float v8; // [esp+20h] [ebp-Ch]
  double v9; // [esp+24h] [ebp-8h] BYREF

  if ( sub_100DCD90(this) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
    v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v4, 0);
    if ( *(float *)(this + 2120) - 1.0 < *(float *)(dword_106B31C8 + 12) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v2 = *(float *)(this + 2120) - *(float *)(dword_106B31C8 + 12);
      v3 = *(_DWORD *)(this + 252) >> 11;
      v8 = *(float *)(this + 476) * v2;
      *(float *)&v9 = *(float *)(this + 480) * v2;
      *((float *)&v9 + 1) = v2 * *(float *)(this + 484);
      if ( (v3 & 1) != 0 )
        sub_100DAE60(this);
      *(float *)&v5 = *(float *)(this + 580) + v8;
      v6 = *(float *)(this + 584) + *(float *)&v9;
      v7 = *(float *)(this + 588) + *((float *)&v9 + 1);
      sub_1023D4B0(8, (int)&v5, 400, 0.1, this, 0, 0);
    }
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 2120) )
      sub_100EC3F0((_DWORD *)this, (int)sub_100F3AE0, 0.0, 0);
    if ( *(_BYTE *)(this + 447) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      *(float *)&v5 = *(float *)(this + 476) * 0.5;
      v6 = *(float *)(this + 480) * 0.5;
      v7 = 0.5 * *(float *)(this + 484);
      sub_100DD660(this, (float *)&v5);
      v9 = 0.2;
      sub_10045730((float *)(this + 864), &v9);
    }
  }
  else
  {
    sub_100D6A00((void *)this);
  }
}
