int __cdecl sub_101BEAD0(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edx
  int v8; // edi
  int v9; // ebp
  int result; // eax
  int v11; // edx
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // esi
  float *v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-28h]
  int v22; // [esp+18h] [ebp-24h]
  int v23; // [esp+1Ch] [ebp-20h]
  int v24; // [esp+20h] [ebp-1Ch]
  int v25; // [esp+24h] [ebp-18h]
  int v26; // [esp+28h] [ebp-14h]
  float v27[4]; // [esp+2Ch] [ebp-10h] BYREF
  int v28; // [esp+44h] [ebp+8h]

  v7 = a1[5];
  v8 = a4;
  v9 = (a4 >> 1) - ((a4 * v7) >> 1);
  result = (a3 * v7) >> 1;
  v11 = 0;
  v12 = (a3 >> 1) - result;
  v26 = v9;
  v25 = v12;
  v24 = 0;
  if ( (int)a2[7] > 0 )
  {
    v21 = (a5 >> 1) - ((a5 * a1[5]) >> 1);
    do
    {
      v13 = a2[6];
      v14 = 0;
      v23 = 0;
      if ( v13 > 0 )
      {
        v20 = v9;
        do
        {
          v15 = 4 * a2[5] * (v14 + v11 * v13);
          v22 = 0;
          if ( (int)a2[5] > 0 )
          {
            v28 = v12;
            do
            {
              sub_101BD8B0(a1, (int)a2, v28, v20, v21, a6, v27);
              v16 = 0;
              v17 = (float *)(a2 + 14);
              do
              {
                v18 = (int)((v27[v16] - *v17) * *(v17 - 4) + *v17 + 0.5);
                if ( v18 >= 0 )
                {
                  if ( v18 > 255 )
                    LOBYTE(v18) = -1;
                }
                else
                {
                  LOBYTE(v18) = 0;
                }
                v19 = v16 + a2[1];
                ++v16;
                ++v17;
                *(_BYTE *)(v19 + v15) = v18;
              }
              while ( v16 < 4 );
              v28 += a3;
              v15 += 4;
              ++v22;
            }
            while ( v22 < a2[5] );
            v8 = a4;
            v12 = v25;
            v11 = v24;
            v14 = v23;
          }
          v13 = a2[6];
          v20 += v8;
          v23 = ++v14;
        }
        while ( v14 < v13 );
        v9 = v26;
      }
      result = a5;
      v21 += a5;
      v24 = ++v11;
    }
    while ( v11 < a2[7] );
  }
  return result;
}
