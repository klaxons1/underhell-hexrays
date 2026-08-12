void __thiscall sub_1006A660(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // edi
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  const char *v10; // eax
  float v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+8h] [ebp-Ch]

  sub_100E38F0();
  *(_BYTE *)(this + 816) = 0;
  *(float *)(this + 804) = flt_10689730;
  *(float *)(this + 808) = flt_10689734;
  *(float *)(this + 812) = flt_10689738;
  sub_100EC3F0((int)sub_1006A320, 0.0, 0);
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.0,
          1.0)
      + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0(v11, 0);
  v2 = *(_DWORD *)(this + 300);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v6 = *(float *)(this + 580) - *(float *)(v5 + 580);
        v7 = v6 * v6;
        v8 = *(float *)(this + 584) - *(float *)(v5 + 584);
        v9 = *(float *)(this + 588) - *(float *)(v5 + 588);
        v12 = v9 * v9 + v8 * v8 + v7;
        if ( off_10689708(v12) > 200.0 )
        {
          v10 = (const char *)sub_100D6390(this);
          DevMsg("RadialLinkController (%s) is far from its parent!\n", v10);
        }
      }
    }
  }
}
