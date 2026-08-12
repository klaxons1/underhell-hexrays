void __cdecl sub_101BE1D0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // esi
  int v17; // esi
  int v18; // edx
  int v19; // esi
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  double v25; // st6
  int v26; // edx
  bool v27; // cc
  int v28; // [esp+8h] [ebp-18h]
  int v29; // [esp+Ch] [ebp-14h]
  int v30; // [esp+10h] [ebp-10h]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+18h] [ebp-8h]
  int v33; // [esp+24h] [ebp+4h]
  int v34; // [esp+34h] [ebp+14h]
  int v35; // [esp+3Ch] [ebp+1Ch]

  a7[3] = 0.0;
  v9 = a5;
  a7[2] = 0.0;
  a7[1] = 0.0;
  v28 = 0;
  *a7 = 0.0;
  v30 = a5;
  if ( (int)a1[4] <= 0 )
    return;
  do
  {
    v10 = *(_DWORD *)(a2 + 16);
    if ( (*(_BYTE *)(a2 + 80) & 0x20) != 0 )
    {
      v11 = v10 - 1;
      if ( v9 > v11 )
        goto LABEL_7;
      v12 = (v9 < 0) - 1;
    }
    else
    {
      v12 = v10 - 1;
    }
    v11 = v9 & v12;
LABEL_7:
    v13 = *(_DWORD *)(a2 + 8) * v11 * *(_DWORD *)(a2 + 12);
    v14 = a1[3];
    v31 = v13;
    v15 = a4;
    v33 = 0;
    v35 = a4;
    if ( v14 <= 0 )
      goto LABEL_26;
    while ( 1 )
    {
      v16 = *(_DWORD *)(a2 + 12);
      if ( (*(_BYTE *)(a2 + 80) & 0x10) != 0 )
      {
        v17 = v16 - 1;
        if ( v15 <= v17 )
          v17 = v35 < 0 ? 0 : v35;
      }
      else
      {
        v17 = v15 & (v16 - 1);
      }
      v18 = v17 * *(_DWORD *)(a2 + 8);
      v19 = a1[2];
      v20 = a3;
      v21 = v19 * (v33 + v28 * v14);
      v29 = 0;
      if ( v19 > 0 )
      {
        v32 = v31 + v18;
        v34 = 4 * v21;
        while ( 1 )
        {
          v22 = *(_DWORD *)(a2 + 8);
          if ( (*(_BYTE *)(a2 + 80) & 8) == 0 )
            break;
          v23 = v22 - 1;
          if ( v20 <= v23 )
          {
            v24 = (v20 < 0) - 1;
LABEL_20:
            v23 = v20 & v24;
          }
          v25 = *(float *)(v34 + *a1);
          v26 = 4 * (v23 + v32);
          if ( 0.0 != v25 )
          {
            *a7 = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v26)) * v25 + *a7;
            a7[1] = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v26 + 1)) * v25 + a7[1];
            a7[2] = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v26 + 2)) * v25 + a7[2];
            a7[3] = v25 * (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v26 + 3) + a7[3];
          }
          v34 += 4;
          ++v20;
          if ( ++v29 >= a1[2] )
            goto LABEL_24;
        }
        v24 = v22 - 1;
        goto LABEL_20;
      }
LABEL_24:
      v14 = a1[3];
      ++v35;
      if ( ++v33 >= v14 )
        break;
      v15 = v35;
    }
    v9 = v30;
LABEL_26:
    ++v9;
    v27 = ++v28 < a1[4];
    v30 = v9;
  }
  while ( v27 );
}
