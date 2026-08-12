double __cdecl sub_101CF390(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, void *a8, void *a9)
{
  int *v9; // ebx
  int v10; // edi
  bool v11; // cc
  int v12; // eax
  int v13; // edi
  double *v14; // edx
  int i; // ecx
  int v16; // ebx
  double v17; // st7
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // edx
  int v23; // [esp+10h] [ebp-1C8h]
  int v24; // [esp+14h] [ebp-1C4h]
  int v25; // [esp+18h] [ebp-1C0h]
  int v26; // [esp+1Ch] [ebp-1BCh]
  _DWORD v27[2]; // [esp+20h] [ebp-1B8h]
  _QWORD v28[6]; // [esp+28h] [ebp-1B0h] BYREF
  _OWORD v29[24]; // [esp+58h] [ebp-180h] BYREF
  int v30; // [esp+1E4h] [ebp+Ch]

  v9 = a1;
  v27[0] = *a1 == 4;
  dbl_104584C8[0] = sub_101CF570(v27[0] + 3, a3, a4, a5, a6, a7, v28, v29);
  v10 = 1;
  v11 = a2 - 2 <= 0;
  v26 = 1;
  v30 = a2 - 2;
  *a1 -= 2;
  v23 = 0;
  if ( !v11 )
  {
    v12 = 0;
    v24 = 0;
    do
    {
      v25 = 0;
      if ( dword_103EDB4C[v12 + *v9] > 0 )
      {
        do
        {
          v13 = 0;
          v14 = dbl_10458570;
          do
          {
            for ( i = 0; i < 3; *(v14 - 1) = v17 * dbl_103EDB68[v18] + dbl_103EDB70[v18] * *(double *)(a7 + 8 * i + 16) )
            {
              ++v14;
              v16 = v25;
              v17 = *(double *)(a7 + 8 * i);
              v18 = 2 * (v13 + 2 * (v25 + 6 * (2 * v23 + *a1)));
              ++i;
            }
            ++v13;
          }
          while ( (int)v14 < (int)dbl_104585A0 );
          v10 = v26;
          v27[v26] = v23;
          v19 = sub_101CF570(v23 + 3, a3, a4, a5, a6, dbl_10458570, &v28[3 * v26], &v29[12 * v26]);
          dbl_104584C8[v26] = v19;
          if ( v19 < *((double *)&unk_104584D0 - v26) )
          {
            v10 = 1 - v26;
            v26 = 1 - v26;
          }
          ++v25;
          v12 = v24;
        }
        while ( v16 + 1 < dword_103EDB4C[v24 + *a1] );
      }
      v9 = a1;
      v12 += 3;
      v11 = ++v23 < v30;
      v24 = v12;
    }
    while ( v11 );
  }
  v20 = 1 - v10;
  if ( a3 > 0 )
    qmemcpy(a9, &v29[12 * v20], 4 * a3);
  v21 = v27[v20] + 3;
  qmemcpy(a8, &v28[3 * v20], 0x18u);
  *v9 = v21;
  return dbl_104584C8[v20];
}
