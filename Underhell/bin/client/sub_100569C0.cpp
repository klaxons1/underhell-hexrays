void __thiscall sub_100569C0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  long double v5; // st7
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  float *v9; // edi
  float *v10; // edx
  float *v11; // ecx
  double v12; // st4
  double v13; // st3
  double v14; // st2
  long double v15; // st1
  long double v16; // st0
  long double v17; // rt0
  long double v18; // rt1
  long double v19; // rt2
  int v20; // [esp+0h] [ebp-Ch]
  int v21; // [esp+4h] [ebp-8h]
  int v22; // [esp+8h] [ebp-4h]

  v4 = this[1];
  v5 = *(float *)(v4 + 1204) * *(float *)(v4 + 1204);
  v6 = *(_DWORD *)(v4 + 1200) - 1;
  v21 = v6;
  if ( dword_103DB320 > 0 )
  {
    v7 = this[1];
    v20 = dword_103DB320;
    do
    {
      v8 = 0;
      if ( *(int *)(v7 + 1196) > 0 )
      {
        v9 = *(float **)(v7 + 1248);
        do
        {
          v10 = (float *)(a2 + 36 * v8 * *(_DWORD *)(v7 + 1200));
          if ( v6 > 0 )
          {
            v11 = v10 + 11;
            v22 = v21;
            do
            {
              v12 = *(v11 - 11) - *(v11 - 2);
              v13 = *(v11 - 10) - *(v11 - 1);
              v14 = *(v11 - 9) - *v11;
              v15 = v12 * v12 + v13 * v13 + v14 * v14;
              if ( v15 > v5 )
              {
                v16 = 1.0 - *(float *)(v7 + 1204) / sqrt(v15);
                v17 = v14 * v16;
                v18 = v12 * v16 * 0.5;
                v19 = v13 * v16 * 0.5;
                *(v11 - 11) = *(v11 - 11) - v18;
                *(v11 - 10) = *(v11 - 10) - v19;
                *(v11 - 9) = *(v11 - 9) - v17 * 0.5;
                *(v11 - 2) = v18 + *(v11 - 2);
                *(v11 - 1) = v19 + *(v11 - 1);
                *v11 = v17 * 0.5 + *v11;
              }
              v11 += 9;
              --v22;
            }
            while ( v22 );
            v6 = v21;
          }
          ++v8;
          *v10 = *v9;
          v9 += 3;
          v10[1] = *(v9 - 2);
          v10[2] = *(v9 - 1);
        }
        while ( v8 < *(_DWORD *)(v7 + 1196) );
      }
      --v20;
    }
    while ( v20 );
  }
}
