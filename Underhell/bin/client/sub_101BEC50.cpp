void __cdecl sub_101BEC50(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  int v11; // edx
  double v12; // st7
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // edi
  float *v18; // ebx
  double v19; // st7
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  bool v23; // cc
  int v24; // [esp+18h] [ebp-38h]
  int v25; // [esp+1Ch] [ebp-34h]
  float v26; // [esp+20h] [ebp-30h]
  int v27; // [esp+24h] [ebp-2Ch]
  float v28; // [esp+24h] [ebp-2Ch]
  int v29; // [esp+28h] [ebp-28h]
  int v30; // [esp+2Ch] [ebp-24h]
  int v31; // [esp+30h] [ebp-20h]
  int v32; // [esp+34h] [ebp-1Ch]
  int v33; // [esp+38h] [ebp-18h]
  float v34; // [esp+3Ch] [ebp-14h]
  float v35[4]; // [esp+40h] [ebp-10h] BYREF
  int v36; // [esp+58h] [ebp+8h]

  v7 = *(_DWORD *)(a1 + 20);
  v8 = a4;
  v9 = a5;
  v34 = 1.0 / *(float *)(a2 + 36);
  v11 = (a4 >> 1) - ((a4 * v7) >> 1);
  v32 = v11;
  v33 = (a3 >> 1) - ((a3 * v7) >> 1);
  if ( *(float *)(a2 + 72) < 0.0 )
    v12 = 102.0;
  else
    v12 = *(float *)(a2 + 72) * 255.0;
  v13 = 0;
  v26 = v12;
  v31 = 0;
  if ( *(int *)(a2 + 28) > 0 )
  {
    v24 = (a5 >> 1) - ((a5 * v7) >> 1);
    while ( 1 )
    {
      v14 = *(_DWORD *)(a2 + 24);
      v15 = 0;
      v30 = 0;
      if ( v14 > 0 )
      {
        v36 = v11;
        do
        {
          v16 = 4 * *(_DWORD *)(a2 + 20) * (v15 + v13 * v14);
          v29 = 0;
          if ( *(int *)(a2 + 20) > 0 )
          {
            v25 = v33;
            do
            {
              sub_101BDA80(a1, a2, v25, v36, v24, a6, v35);
              v27 = 255;
              if ( v26 > (double)v35[3] )
                v27 = 0;
              v17 = 0;
              v18 = (float *)(a2 + 56);
              v28 = (float)v27;
              do
              {
                v19 = 0.0;
                if ( v35[v17] > 0.0 )
                  v19 = v35[v17];
                v20 = (int)(pow(((v19 - *v18) * *(v18 - 4) + *v18) * 0.0039215689, v34) * 255.0 + 0.5);
                if ( v20 >= 0 )
                {
                  if ( v20 > 255 )
                    LOBYTE(v20) = -1;
                }
                else
                {
                  LOBYTE(v20) = 0;
                }
                v21 = v17 + *(_DWORD *)(a2 + 4);
                ++v17;
                ++v18;
                *(_BYTE *)(v21 + v16) = v20;
              }
              while ( v17 < 3 );
              v22 = (int)(v28 + 0.5);
              if ( v22 >= 0 )
              {
                if ( v22 > 255 )
                  LOBYTE(v22) = -1;
              }
              else
              {
                LOBYTE(v22) = 0;
              }
              *(_BYTE *)(*(_DWORD *)(a2 + 4) + v16 + 3) = v22;
              sub_101BDC30(a1, a1, a2, v25, v36, v24, v28, a7);
              v16 += 4;
              v23 = ++v29 < *(_DWORD *)(a2 + 20);
              v25 += a3;
            }
            while ( v23 );
            v15 = v30;
            v13 = v31;
            v8 = a4;
          }
          v14 = *(_DWORD *)(a2 + 24);
          v36 += v8;
          v30 = ++v15;
        }
        while ( v15 < v14 );
        v9 = a5;
      }
      sub_101BDD70(a1, a2, a3, v8, v9, a7);
      v24 += v9;
      v31 = ++v13;
      if ( v13 >= *(_DWORD *)(a2 + 28) )
        break;
      v11 = v32;
    }
  }
}
