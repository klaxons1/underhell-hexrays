int __cdecl sub_101BE8F0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ebx
  int v9; // ebp
  int result; // eax
  int v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // edi
  float *v17; // ebx
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // [esp+10h] [ebp-30h]
  int v23; // [esp+14h] [ebp-2Ch]
  int v24; // [esp+18h] [ebp-28h]
  int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+20h] [ebp-20h]
  float v27; // [esp+24h] [ebp-1Ch]
  int v28; // [esp+28h] [ebp-18h]
  int v29; // [esp+2Ch] [ebp-14h]
  float v30[4]; // [esp+30h] [ebp-10h] BYREF
  int v31; // [esp+48h] [ebp+8h]

  v6 = a1[5];
  v7 = a4;
  v27 = 1.0 / *(float *)(a2 + 36);
  v9 = (a4 >> 1) - ((a4 * v6) >> 1);
  result = (a3 * v6) >> 1;
  v11 = 0;
  v12 = (a3 >> 1) - result;
  v29 = v9;
  v28 = v12;
  v26 = 0;
  if ( *(int *)(a2 + 28) > 0 )
  {
    v23 = (a5 >> 1) - ((a5 * a1[5]) >> 1);
    do
    {
      v13 = *(_DWORD *)(a2 + 24);
      v14 = 0;
      v25 = 0;
      if ( v13 > 0 )
      {
        v22 = v9;
        do
        {
          v15 = 4 * *(_DWORD *)(a2 + 20) * (v14 + v11 * v13);
          v24 = 0;
          if ( *(int *)(a2 + 20) > 0 )
          {
            v31 = v12;
            do
            {
              sub_101BD6E0(a1, a2, v31, v22, v23, a6, v30);
              v16 = 0;
              v17 = (float *)(a2 + 56);
              do
              {
                v18 = 0.0;
                if ( v30[v16] > 0.0 )
                  v18 = v30[v16];
                v19 = (int)(pow(((v18 - *v17) * *(v17 - 4) + *v17) * 0.0039215689, v27) * 255.0 + 0.5);
                if ( v19 >= 0 )
                {
                  if ( v19 > 255 )
                    LOBYTE(v19) = -1;
                }
                else
                {
                  LOBYTE(v19) = 0;
                }
                v20 = v16 + *(_DWORD *)(a2 + 4);
                ++v16;
                ++v17;
                *(_BYTE *)(v20 + v15) = v19;
              }
              while ( v16 < 3 );
              v21 = (int)((v30[3] - *(float *)(a2 + 68)) * *(float *)(a2 + 52) + *(float *)(a2 + 68) + 0.5);
              if ( v21 >= 0 )
              {
                if ( v21 > 255 )
                  LOBYTE(v21) = -1;
              }
              else
              {
                LOBYTE(v21) = 0;
              }
              v31 += a3;
              *(_BYTE *)(*(_DWORD *)(a2 + 4) + v15 + 3) = v21;
              v15 += 4;
              ++v24;
            }
            while ( v24 < *(_DWORD *)(a2 + 20) );
            v11 = v26;
            v12 = v28;
            v7 = a4;
            v14 = v25;
          }
          v13 = *(_DWORD *)(a2 + 24);
          v22 += v7;
          v25 = ++v14;
        }
        while ( v14 < v13 );
        v9 = v29;
      }
      result = a5;
      v23 += a5;
      v26 = ++v11;
    }
    while ( v11 < *(_DWORD *)(a2 + 28) );
  }
  return result;
}
