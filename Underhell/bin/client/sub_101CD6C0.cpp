int __cdecl sub_101CD6C0(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax
  double v5; // st6
  int v6; // edi
  double *v7; // edx
  int v8; // esi
  double v9; // st7
  double *v10; // eax
  int v11; // ecx
  double v12; // st6
  int v13; // eax
  __int16 v14; // fps
  bool v15; // c0
  char v16; // c2
  bool v17; // c3
  __int16 v18; // fps
  bool v19; // c0
  char v20; // c2
  bool v21; // c3
  int v22; // ecx
  __int16 v23; // fps
  bool v24; // c0
  char v25; // c2
  bool v26; // c3
  int result; // eax
  double *v28; // edx
  double v29; // st7
  double *v30; // ecx
  double v31; // st7
  double v32; // [esp+0h] [ebp-8h]

  v3 = a1;
  dbl_10455200 = 0.0;
  dbl_104551E8 = 0.0;
  dbl_104551E0 = 0.0;
  dbl_104551D0 = 0.0;
  dbl_104551C8 = 0.0;
  dbl_104551C0[0] = 0.0;
  if ( a1 > 0 )
  {
    v4 = a2 + 16;
    do
    {
      v5 = *(double *)(v4 - 16) * *(double *)(v4 - 16);
      v4 += 24;
      --v3;
      dbl_104551C0[0] = v5 + dbl_104551C0[0];
      dbl_104551C8 = *(double *)(v4 - 32) * *(double *)(v4 - 40) + dbl_104551C8;
      dbl_104551D0 = *(double *)(v4 - 24) * *(double *)(v4 - 40) + dbl_104551D0;
      dbl_104551E0 = *(double *)(v4 - 32) * *(double *)(v4 - 32) + dbl_104551E0;
      dbl_104551E8 = *(double *)(v4 - 24) * *(double *)(v4 - 32) + dbl_104551E8;
      dbl_10455200 = *(double *)(v4 - 24) * *(double *)(v4 - 24) + dbl_10455200;
    }
    while ( v3 );
  }
  v6 = 3;
  do
  {
    v7 = dbl_104551C0;
    v8 = 0;
    dbl_10458508 = dbl_104551C0[0] + dbl_104551E0 + dbl_10455200;
    v9 = 3.5 / dbl_10458508;
    if ( (int)dbl_104551C0 >= (int)&X )
      goto LABEL_8;
    do
    {
      v10 = v7;
      v11 = 3 - v8;
      do
      {
        v12 = v9 * *v10++;
        --v11;
        *(v10 - 1) = v12;
      }
      while ( v11 );
LABEL_8:
      v7 += 4;
      ++v8;
    }
    while ( (int)v7 < (int)&X );
    v13 = 4;
    do
    {
      dbl_10458798[0] = dbl_104551C0[0] * dbl_104551C0[0] + dbl_104551D0 * dbl_104551D0 + dbl_104551C8 * dbl_104551C8;
      dbl_104587A0 = (dbl_104551C0[0] + dbl_104551E0) * dbl_104551C8 + dbl_104551D0 * dbl_104551E8;
      dbl_104587A8 = (dbl_104551C0[0] + dbl_10455200) * dbl_104551D0 + dbl_104551C8 * dbl_104551E8;
      dbl_104587B8 = dbl_104551E0 * dbl_104551E0 + dbl_104551E8 * dbl_104551E8 + dbl_104551C8 * dbl_104551C8;
      dbl_104587C0 = (dbl_104551E0 + dbl_10455200) * dbl_104551E8 + dbl_104551C8 * dbl_104551D0;
      dbl_104587D8 = dbl_10455200 * dbl_10455200 + dbl_104551E8 * dbl_104551E8 + dbl_104551D0 * dbl_104551D0;
      dbl_104551C0[0] = dbl_10458798[0] * dbl_10458798[0] + dbl_104587A0 * dbl_104587A0 + dbl_104587A8 * dbl_104587A8;
      dbl_104551C8 = (dbl_104587B8 + dbl_10458798[0]) * dbl_104587A0 + dbl_104587C0 * dbl_104587A8;
      dbl_104551D0 = (dbl_104587D8 + dbl_10458798[0]) * dbl_104587A8 + dbl_104587C0 * dbl_104587A0;
      v32 = dbl_104587C0 * dbl_104587C0;
      dbl_104551E0 = dbl_104587B8 * dbl_104587B8 + v32 + dbl_104587A0 * dbl_104587A0;
      --v13;
      dbl_104551E8 = (dbl_104587D8 + dbl_104587B8) * dbl_104587C0 + dbl_104587A8 * dbl_104587A0;
      dbl_10455200 = dbl_104587D8 * dbl_104587D8 + v32 + dbl_104587A8 * dbl_104587A8;
    }
    while ( v13 );
    --v6;
  }
  while ( v6 );
  v15 = dbl_104551C0[0] < dbl_104551E0;
  v16 = 0;
  v17 = dbl_104551C0[0] == dbl_104551E0;
  if ( (v14 & 0x4100) != 0 )
  {
    v24 = dbl_104551E0 < dbl_10455200;
    v25 = 0;
    v26 = dbl_104551E0 == dbl_10455200;
    v22 = 1;
    if ( (v23 & 0x4100) == 0 )
      goto LABEL_17;
LABEL_16:
    v22 = 2;
    goto LABEL_17;
  }
  v19 = dbl_104551C0[0] < dbl_10455200;
  v20 = 0;
  v21 = dbl_104551C0[0] == dbl_10455200;
  if ( (v18 & 0x4100) != 0 )
    goto LABEL_16;
  v22 = 0;
LABEL_17:
  result = 0;
  dbl_10456310 = 1.0 / sqrt(dbl_104551C0[4 * v22]);
  if ( v22 <= 0 )
    goto LABEL_21;
  v28 = &dbl_10458798[v22];
  do
  {
    v29 = dbl_10456310 * *v28;
    ++result;
    v28 += 3;
    *(double *)(a3 + 8 * result - 8) = v29;
  }
  while ( result < v22 );
  if ( result < 3 )
  {
LABEL_21:
    v30 = &dbl_10458798[2 * v22 + result + v22];
    do
    {
      v31 = dbl_10456310 * *v30;
      ++result;
      ++v30;
      *(double *)(a3 + 8 * result - 8) = v31;
    }
    while ( result < 3 );
  }
  return result;
}
