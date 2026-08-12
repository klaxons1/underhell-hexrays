void __fastcall sub_1017BFC0(float *a1)
{
  double v1; // st7
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h] BYREF

  v3 = *(float *)&a1;
  if ( a1[201] < (double)a1[200] )
  {
    v1 = a1[201];
    a1[201] = a1[200];
    a1[200] = v1;
  }
  if ( 0.0 != a1[200] || a1[201] != 0.0 )
  {
    if ( a1[201] >= (double)a1[203] )
    {
      if ( a1[200] <= (double)a1[203] )
        v2 = a1[203];
      else
        v2 = a1[200];
    }
    else
    {
      v2 = a1[201];
    }
    v3 = v2;
    sub_1010C270(a1 + 203, 1, (__int16 *)&v3);
  }
}
