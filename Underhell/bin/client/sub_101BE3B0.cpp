float *__cdecl sub_101BE3B0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  float *result; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // esi
  int v17; // edx
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // ebx
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

  result = a7;
  a7[3] = 0.0;
  a7[2] = 0.0;
  a7[1] = 0.0;
  v9 = a5;
  *a7 = 0.0;
  v29 = 0;
  v30 = a5;
  if ( (int)a1[4] <= 0 )
    return result;
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
    v13 = a4;
    v14 = *(_DWORD *)(a2 + 8) * v11 * *(_DWORD *)(a2 + 12);
    v15 = a1[3];
    v31 = v14;
    v33 = 0;
    v28 = a4;
    if ( v15 <= 0 )
      goto LABEL_26;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a2 + 80) & 0x10) != 0 )
      {
        v16 = *(_DWORD *)(a2 + 12) - 1;
        if ( v13 <= v16 )
          v16 = v13 < 0 ? 0 : v13;
      }
      else
      {
        v16 = v13 & (*(_DWORD *)(a2 + 12) - 1);
      }
      v17 = v16 * *(_DWORD *)(a2 + 8);
      v18 = a1[2];
      v19 = a3;
      v20 = v18 * (v33 + v29 * v15);
      v21 = 0;
      if ( v18 > 0 )
      {
        v32 = v31 + v17;
        v34 = 4 * v20;
        while ( 1 )
        {
          v22 = *(_DWORD *)(a2 + 8);
          if ( (*(_BYTE *)(a2 + 80) & 8) == 0 )
            break;
          v23 = v22 - 1;
          if ( v19 <= v23 )
          {
            v24 = (v19 < 0) - 1;
LABEL_20:
            v23 = v19 & v24;
          }
          v25 = *(float *)(v34 + *a1);
          v26 = 4 * (v23 + v32);
          if ( 0.0 != v25 )
          {
            *a7 = (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v26) * v25 + *a7;
            a7[1] = (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v26 + 1) * v25 + a7[1];
            a7[2] = (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v26 + 2) * v25 + a7[2];
            a7[3] = v25 * (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v26 + 3) + a7[3];
          }
          v34 += 4;
          ++v21;
          ++v19;
          if ( v21 >= a1[2] )
            goto LABEL_24;
        }
        v24 = v22 - 1;
        goto LABEL_20;
      }
LABEL_24:
      v15 = a1[3];
      ++v28;
      if ( ++v33 >= v15 )
        break;
      v13 = v28;
    }
    v9 = v30;
LABEL_26:
    result = (float *)(v29 + 1);
    ++v9;
    v27 = ++v29 < a1[4];
    v30 = v9;
  }
  while ( v27 );
  return result;
}
