void __thiscall sub_100236C0(float *this, int a2, int a3)
{
  double v4; // st7
  double v5; // st5
  double v6; // st4
  double v7; // st7
  float v8; // [esp+10h] [ebp+Ch]

  if ( *((_DWORD *)this + 588) != 3 )
  {
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = this[145] - *(float *)(a3 + 580);
    v5 = this[147] - *(float *)(a3 + 588);
    v6 = this[146] - *(float *)(a3 + 584);
    v7 = v5 * v5 + v6 * v6 + v4 * v4;
    if ( *((_DWORD *)this + 588) && v7 < 57600.0 )
    {
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1412))(this, 1);
      v8 = v7;
      v7 = v8;
    }
    if ( v7 < 360000.0 )
    {
      *((_BYTE *)this + 2320) = 1;
      this[585] = 0.0;
    }
  }
}
