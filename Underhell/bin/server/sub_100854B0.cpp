int __thiscall sub_100854B0(_DWORD *this, float *a2, int a3, int *a4)
{
  int v5; // edi
  int v6; // edx
  float *v7; // esi
  double v8; // st3
  double v9; // st6
  double v10; // st3
  double v11; // st4

  if ( *(_DWORD *)(dword_106935FC + 48) )
    return -2;
  v5 = 0;
  while ( 1 )
  {
    v6 = (v5 + this[195] + 1) % 32;
    v7 = (float *)&this[6 * v6];
    if ( *((_DWORD *)v7 + 8) == a3 && *(float *)(dword_106B31C8 + 12) < (double)v7[6] )
    {
      v8 = v7[3] - *a2;
      v9 = v8 * v8;
      v10 = v7[4] - a2[1];
      v11 = v7[5] - a2[2];
      if ( v11 * v11 + v10 * v10 + v9 < 576.0 )
        break;
    }
    if ( ++v5 >= 32 )
    {
      if ( a4 )
        *a4 = -1;
      return -2;
    }
  }
  if ( a4 )
    *a4 = v6;
  return this[6 * v6 + 7];
}
