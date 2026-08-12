void __stdcall sub_100F2C70(int a1, float a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st5
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st7
  float v11; // [esp+Ch] [ebp-Ch] BYREF
  float v12; // [esp+10h] [ebp-8h]

  if ( (*(_BYTE *)(a1 + 55) & 1) != 0 )
  {
    sub_1009C8A0(COERCE_INT(*((float *)off_103DC81C + 3)), &v11);
    v2 = v11;
    v3 = a2;
    if ( v11 <= (double)*(float *)(a1 + 24) )
    {
      v6 = v11;
      v5 = 50.0;
      if ( v11 < (double)*(float *)(a1 + 24) )
      {
        *(float *)(a1 + 24) = *(float *)(a1 + 24) - v3 * 50.0;
        if ( v6 > *(float *)(a1 + 24) )
          *(float *)(a1 + 24) = v6;
      }
    }
    else
    {
      *(float *)(a1 + 24) = v3 * 50.0 + *(float *)(a1 + 24);
      v4 = v2;
      v5 = 50.0;
      if ( v4 < *(float *)(a1 + 24) )
        *(float *)(a1 + 24) = v4;
    }
    if ( v12 <= (double)*(float *)(a1 + 28) )
    {
      if ( v12 < (double)*(float *)(a1 + 28) )
      {
        v9 = *(float *)(a1 + 28) - v5 * v3;
        v10 = v12;
        *(float *)(a1 + 28) = v9;
        if ( v10 > *(float *)(a1 + 28) )
          *(float *)(a1 + 28) = v10;
      }
    }
    else
    {
      v7 = v5 * v3;
      v8 = v12;
      *(float *)(a1 + 28) = v7 + *(float *)(a1 + 28);
      if ( v8 < *(float *)(a1 + 28) )
        *(float *)(a1 + 28) = v8;
    }
  }
}
