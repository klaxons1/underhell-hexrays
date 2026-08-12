double *__cdecl sub_101CDAC0(int a1, int a2, double *a3)
{
  int v3; // ebx
  int v4; // esi
  double *v5; // edi
  int v6; // ecx
  double *v7; // edx
  double v8; // st6
  double v9; // st3
  __int16 v10; // fps
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  double *result; // eax
  double *v15; // ecx
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a1;
  v4 = 0;
  dbl_104546F0 = 0.0;
  if ( a1 > 0 )
  {
    v5 = (double *)(a2 + 16);
    do
    {
      v6 = v4;
      if ( v4 < v3 )
      {
        v7 = v5;
        do
        {
          v8 = *(v5 - 1) - *(v7 - 1);
          v9 = *(v5 - 2) - *(v7 - 2);
          dbl_10456970 = (*v5 - *v7) * (*v5 - *v7) + v8 * v8 + v9 * v9;
          v11 = dbl_10456970 < dbl_104546F0;
          v12 = 0;
          v13 = dbl_10456970 == dbl_104546F0;
          if ( (v10 & 0x4100) == 0 )
          {
            v3 = a1;
            dbl_104546F0 = dbl_10456970;
            v16 = v4;
            v17 = v6;
          }
          ++v6;
          v7 += 3;
        }
        while ( v6 < v3 );
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < v3 );
  }
  result = (double *)(a2 + 24 * v16);
  v15 = (double *)(a2 + 24 * v17);
  dbl_104546F0 = 1.0 / sqrt(dbl_104546F0);
  *a3 = (*result - *v15) * dbl_104546F0;
  a3[1] = (result[1] - v15[1]) * dbl_104546F0;
  a3[2] = (result[2] - v15[2]) * dbl_104546F0;
  return result;
}
