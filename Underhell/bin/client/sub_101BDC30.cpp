int __usercall sub_101BDC30@<eax>(int result@<eax>, int a2, int a3, int a4, int a5, int a6, float a7, int a8)
{
  int v8; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  bool v25; // cc
  int v26; // [esp+4h] [ebp-Ch]
  int v27; // [esp+8h] [ebp-8h]
  int v28; // [esp+Ch] [ebp-4h]
  int v29; // [esp+14h] [ebp+4h]
  int v30; // [esp+24h] [ebp+14h]

  v8 = a6;
  v26 = 0;
  v27 = a6;
  if ( *(int *)(a2 + 16) <= 0 )
    return result;
  do
  {
    v10 = *(_DWORD *)(a3 + 16);
    if ( (*(_BYTE *)(a3 + 80) & 0x20) == 0 )
    {
      v12 = v10 - 1;
      goto LABEL_6;
    }
    v11 = v10 - 1;
    if ( v8 <= v11 )
    {
      v12 = (v8 < 0) - 1;
LABEL_6:
      v11 = v8 & v12;
    }
    v13 = a5;
    v28 = *(_DWORD *)(a3 + 12) * v11 * *(_DWORD *)(a3 + 8);
    v30 = 0;
    v29 = a5;
    if ( *(int *)(a2 + 12) <= 0 )
      goto LABEL_25;
    v14 = *(_DWORD *)(a2 + 8);
    do
    {
      v15 = *(_DWORD *)(a3 + 12);
      if ( (*(_BYTE *)(a3 + 80) & 0x10) == 0 )
      {
        v17 = v15 - 1;
        goto LABEL_13;
      }
      v16 = v15 - 1;
      if ( v13 <= v16 )
      {
        v17 = (v13 < 0) - 1;
LABEL_13:
        v16 = v13 & v17;
      }
      v18 = v16 * *(_DWORD *)(a3 + 8);
      v19 = a4;
      v20 = 0;
      if ( v14 <= 0 )
        goto LABEL_23;
      v21 = v28 + v18;
      do
      {
        v22 = *(_DWORD *)(a3 + 8);
        if ( (*(_BYTE *)(a3 + 80) & 8) != 0 )
        {
          v23 = v22 - 1;
          if ( v19 > v23 )
            goto LABEL_21;
          v24 = (v19 < 0) - 1;
        }
        else
        {
          v24 = v22 - 1;
        }
        v23 = v19 & v24;
LABEL_21:
        ++v20;
        ++v19;
        *(float *)(a8 + 4 * (v21 + v23)) = **(float **)(a2 + 4) * a7 + *(float *)(a8 + 4 * (v21 + v23));
        v14 = *(_DWORD *)(a2 + 8);
      }
      while ( v20 < v14 );
      v13 = v29;
LABEL_23:
      ++v13;
      v25 = ++v30 < *(_DWORD *)(a2 + 12);
      v29 = v13;
    }
    while ( v25 );
    v8 = v27;
LABEL_25:
    result = v26 + 1;
    ++v8;
    v25 = ++v26 < *(_DWORD *)(a2 + 16);
    v27 = v8;
  }
  while ( v25 );
  return result;
}
