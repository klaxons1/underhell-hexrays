int __cdecl sub_1001D080(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // ebx
  long double v10; // st7
  long double v11; // st7
  long double v12; // st7
  long double v13; // st6
  double v14; // st7
  long double v15; // st6
  int v17; // ecx
  float *v18; // edi
  float v19[32]; // [esp+Ch] [ebp-158h]
  _BYTE v20[48]; // [esp+8Ch] [ebp-D8h] BYREF
  _BYTE v21[48]; // [esp+BCh] [ebp-A8h] BYREF
  _BYTE v22[48]; // [esp+ECh] [ebp-78h] BYREF
  _BYTE v23[16]; // [esp+11Ch] [ebp-48h] BYREF
  _BYTE v24[12]; // [esp+12Ch] [ebp-38h] BYREF
  float v25; // [esp+138h] [ebp-2Ch]
  int v26; // [esp+13Ch] [ebp-28h]
  int v27; // [esp+140h] [ebp-24h]
  float v28; // [esp+144h] [ebp-20h] BYREF
  float v29; // [esp+148h] [ebp-1Ch]
  float v30; // [esp+14Ch] [ebp-18h]
  float v31; // [esp+150h] [ebp-14h] BYREF
  float v32; // [esp+154h] [ebp-10h]
  float v33; // [esp+158h] [ebp-Ch]
  float v34; // [esp+15Ch] [ebp-8h]
  unsigned int v35; // [esp+160h] [ebp-4h]
  float v36; // [esp+16Ch] [ebp+8h]
  float v37; // [esp+16Ch] [ebp+8h]

  v3 = a2;
  v4 = a1 + 216 * a2;
  v5 = *(_DWORD *)(v4 + 168);
  v27 = v4;
  if ( v5 )
  {
    v6 = (_DWORD *)(v4 + v5);
    if ( v6 )
    {
      v7 = (_DWORD *)(216 * *v6 + a1 + 4);
      if ( *v7 != -1 )
      {
        v36 = 0.0;
        sub_101F0AB0(*(_DWORD *)(a3 + 4) + 48 * *v7, v21);
        sub_101EDC00(v21, *(_DWORD *)(a3 + 4) + 48 * *v6, v20);
        sub_101F0930(v20, v23, &v28);
        v8 = 0;
        if ( (int)v6[1] <= 0 )
        {
          v14 = 0.0;
          v15 = v36;
        }
        else
        {
          v9 = 0;
          do
          {
            v10 = fabs(sub_101EEC80((char *)&v6[v9 + 1] + v6[2], v23));
            if ( v10 <= 1.0 )
            {
              if ( v10 < -1.0 )
                v10 = -1.0;
            }
            else
            {
              v10 = 1.0;
            }
            v11 = acos(v10);
            v12 = 1.0 - (v11 + v11) * *(float *)((char *)&v6[v9] + v6[2]);
            v19[v8] = v12;
            v13 = 0.0;
            if ( v12 >= 0.0 )
              v13 = v12;
            v14 = 0.0;
            v19[v8++] = v13;
            v15 = v13 + v36;
            v9 += 12;
            v36 = v15;
          }
          while ( v8 < v6[1] );
          v3 = a2;
        }
        if ( v15 <= 0.001 )
        {
          sub_101F1020((char *)v6 + v6[2] + 32, v24);
          sub_101F1750(v24, (char *)v6 + v6[2] + 20, v22);
          return sub_101EDC00(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)(v27 + 4), v22, *(_DWORD *)(a3 + 4) + 48 * v3);
        }
        v17 = 0;
        v26 = 0;
        v31 = v14;
        v32 = v14;
        v33 = v14;
        v34 = v14;
        v28 = v14;
        v29 = v14;
        v30 = v14;
        if ( (int)v6[1] > 0 )
        {
          v35 = 0;
          do
          {
            if ( v14 != v19[v17] )
            {
              v18 = (float *)((char *)&v6[v35 / 4] + v6[2]);
              v37 = 1.0 / v15;
              v25 = v19[v17] * v37;
              sub_101EE9A0(v18 + 8, &v31, &v31);
              v17 = v26;
              v3 = a2;
              v31 = v25 * v18[8] + v31;
              v32 = v18[9] * v25 + v32;
              v33 = v18[10] * v25 + v33;
              v34 = v18[11] * v25 + v34;
              v28 = v18[5] * v25 + v28;
              v29 = v18[6] * v25 + v29;
              v30 = v25 * v18[7] + v30;
              v14 = 0.0;
            }
            v35 += 48;
            v26 = ++v17;
          }
          while ( v17 < v6[1] );
        }
        sub_101F0F40(&v31, &v28, v22);
        v4 = v27;
      }
    }
  }
  return sub_101EDC00(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)(v4 + 4), v22, *(_DWORD *)(a3 + 4) + 48 * v3);
}
