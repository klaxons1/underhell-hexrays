void __cdecl sub_101BDA80(int a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  double v22; // st6
  int v23; // eax
  bool v24; // cc
  int v25; // [esp+8h] [ebp-10h]
  int v26; // [esp+Ch] [ebp-Ch]
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+2Ch] [ebp+14h]
  int v30; // [esp+34h] [ebp+1Ch]

  a7[3] = 0.0;
  a7[2] = 0.0;
  a7[1] = 0.0;
  v9 = a5;
  *a7 = 0.0;
  v25 = 0;
  v26 = a5;
  if ( *(int *)(a1 + 16) <= 0 )
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
    v13 = a4;
    v27 = *(_DWORD *)(a2 + 8) * v11 * *(_DWORD *)(a2 + 12);
    v29 = 0;
    v28 = a4;
    if ( *(int *)(a1 + 12) <= 0 )
      goto LABEL_25;
    do
    {
      v14 = *(_DWORD *)(a2 + 12);
      if ( (*(_BYTE *)(a2 + 80) & 0x10) != 0 )
      {
        v15 = v14 - 1;
        if ( v13 > v15 )
          goto LABEL_13;
        v16 = (v13 < 0) - 1;
      }
      else
      {
        v16 = v14 - 1;
      }
      v15 = v13 & v16;
LABEL_13:
      v17 = a3;
      v18 = v15 * *(_DWORD *)(a2 + 8);
      v30 = 0;
      if ( *(int *)(a1 + 8) <= 0 )
        goto LABEL_23;
      do
      {
        v19 = *(_DWORD *)(a2 + 8);
        if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
        {
          v20 = v19 - 1;
          if ( v17 > v20 )
            goto LABEL_19;
          v21 = (v17 < 0) - 1;
        }
        else
        {
          v21 = v19 - 1;
        }
        v20 = v17 & v21;
LABEL_19:
        v22 = **(float **)a1;
        v23 = 4 * (v27 + v18 + v20);
        *a7 = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v23)) * v22 + *a7;
        a7[1] = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v23 + 1)) * v22 + a7[1];
        a7[2] = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v23 + 2)) * v22 + a7[2];
        if ( *(_BYTE *)(*(_DWORD *)a2 + v23 + 3) > 0xC0u )
          a7[3] = v22 * 255.0 + a7[3];
        ++v17;
        ++v30;
      }
      while ( v30 < *(_DWORD *)(a1 + 8) );
      v13 = v28;
LABEL_23:
      ++v13;
      v24 = ++v29 < *(_DWORD *)(a1 + 12);
      v28 = v13;
    }
    while ( v24 );
    v9 = v26;
LABEL_25:
    ++v9;
    v24 = ++v25 < *(_DWORD *)(a1 + 16);
    v26 = v9;
  }
  while ( v24 );
}
