void __thiscall sub_100EC430(_BYTE *this, int a2, _BYTE *a3, float *a4, float *a5)
{
  int i; // ecx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7

  if ( (this[148] & 8) != 0 )
  {
    for ( i = *(_DWORD *)(a2 + 8); i != a2 + 4; i = *(_DWORD *)(i + 4) )
    {
      if ( *(float *)(i + 12) <= (double)*a4 )
        v6 = *(float *)(i + 12);
      else
        v6 = *a4;
      *a4 = v6;
      if ( *(float *)(i + 16) <= (double)a4[1] )
        v7 = *(float *)(i + 16);
      else
        v7 = a4[1];
      a4[1] = v7;
      if ( *(float *)(i + 20) <= (double)a4[2] )
        v8 = *(float *)(i + 20);
      else
        v8 = a4[2];
      a4[2] = v8;
      if ( *(float *)(i + 12) >= (double)*a5 )
        v9 = *(float *)(i + 12);
      else
        v9 = *a5;
      *a5 = v9;
      if ( *(float *)(i + 16) >= (double)a5[1] )
        v10 = *(float *)(i + 16);
      else
        v10 = a5[1];
      a5[1] = v10;
      if ( *(float *)(i + 20) >= (double)a5[2] )
        v11 = *(float *)(i + 20);
      else
        v11 = a5[2];
      a5[2] = v11;
      *a3 = 1;
    }
  }
}
