double __stdcall sub_10197D70(int a1, float *a2, int a3)
{
  int v3; // eax
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  float v9; // [esp+0h] [ebp-Ch]

  v3 = 0;
  if ( dword_106B82B0 <= 0 )
  {
LABEL_4:
    if ( a2 )
    {
      if ( a3 )
      {
        return *(float *)(a3 + 24) + a2[127];
      }
      else
      {
        v5 = *(float *)(a1 + 28) - a2[7];
        v6 = v5 * v5;
        v7 = *(float *)(a1 + 32) - a2[8];
        v8 = *(float *)(a1 + 36) - a2[9];
        v9 = v8 * v8 + v7 * v7 + v6;
        return off_10689708(v9) + a2[127];
      }
    }
    else
    {
      return 0.0;
    }
  }
  else
  {
    while ( *(_DWORD *)a1 != dword_106B7EB0[v3] )
    {
      if ( ++v3 >= dword_106B82B0 )
        goto LABEL_4;
    }
    return -1.0;
  }
}
