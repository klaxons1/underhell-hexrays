void __thiscall sub_100134B0(float *this, int a2)
{
  int v3; // edi
  double v4; // st7
  int v5; // ecx
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st7

  v3 = sub_100F7AF0();
  v4 = *(float *)(sub_10034A00(this) + 8);
  if ( v3 && !*(_BYTE *)(v3 + 316) && this[1078] != v4 && *(_DWORD *)(dword_104023E4 + 48) && this[57] == this[1079] )
  {
    if ( v4 <= this[1078] )
      v5 = -1;
    else
      v5 = 1;
    v6 = *((float *)off_103DC81C + 4);
    if ( v6 < 0.0 )
      v6 = 0.0;
    v7 = v6 * 150.0 * (double)v5 + this[1078];
    this[1078] = v7;
    if ( v5 <= 0 )
    {
      if ( v7 < v4 )
        this[1078] = v4;
      if ( v4 - this[1078] < -18.0 )
      {
        this[1078] = v4 + 18.0;
        *(float *)(a2 + 8) = this[1078] - v4 + *(float *)(a2 + 8);
        return;
      }
    }
    else
    {
      if ( v7 > v4 )
        this[1078] = v4;
      if ( v4 - this[1078] > 18.0 )
      {
        this[1078] = v4 - 18.0;
        *(float *)(a2 + 8) = this[1078] - v4 + *(float *)(a2 + 8);
        return;
      }
    }
    *(float *)(a2 + 8) = this[1078] - v4 + *(float *)(a2 + 8);
  }
  else
  {
    v8 = v4;
    v9 = this[57];
    this[1078] = v8;
    this[1079] = v9;
  }
}
