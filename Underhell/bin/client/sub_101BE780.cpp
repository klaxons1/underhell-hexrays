int __usercall sub_101BE780@<eax>(int result@<eax>, _DWORD *a2, int a3, int a4, int a5, int a6, float a7, int a8)
{
  int v8; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // ebx
  int v17; // edx
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // ebp
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  double v27; // st5
  bool v28; // cc
  int v29; // [esp+4h] [ebp-10h]
  int v30; // [esp+8h] [ebp-Ch]
  int v31; // [esp+Ch] [ebp-8h]
  int v32; // [esp+18h] [ebp+4h]
  int v33; // [esp+28h] [ebp+14h]

  v8 = a6;
  v29 = 0;
  v30 = a6;
  if ( (int)a2[4] <= 0 )
    return result;
  do
  {
    v10 = *(_DWORD *)(a3 + 16);
    if ( (*(_BYTE *)(a3 + 80) & 0x20) != 0 )
    {
      v11 = v10 - 1;
      if ( v8 > v11 )
        goto LABEL_7;
      v12 = (v8 < 0) - 1;
    }
    else
    {
      v12 = v10 - 1;
    }
    v11 = v8 & v12;
LABEL_7:
    v13 = a5;
    v14 = *(_DWORD *)(a3 + 12) * v11 * *(_DWORD *)(a3 + 8);
    v15 = a2[3];
    v16 = 0;
    v31 = v14;
    v32 = 0;
    v33 = a5;
    if ( v15 <= 0 )
      goto LABEL_28;
    while ( 2 )
    {
      if ( (*(_BYTE *)(a3 + 80) & 0x10) == 0 )
      {
        v18 = *(_DWORD *)(a3 + 12) - 1;
        goto LABEL_14;
      }
      v17 = *(_DWORD *)(a3 + 12) - 1;
      if ( v13 <= v17 )
      {
        v18 = (v13 < 0) - 1;
LABEL_14:
        v17 = v13 & v18;
      }
      v19 = v17 * *(_DWORD *)(a3 + 8);
      v20 = a2[2] * (v16 + v29 * v15);
      v21 = a4;
      v22 = 0;
      if ( (int)a2[2] <= 0 )
        goto LABEL_26;
      v23 = 4 * v20;
      do
      {
        v24 = *(_DWORD *)(a3 + 8);
        if ( (*(_BYTE *)(a3 + 80) & 8) != 0 )
        {
          v25 = v24 - 1;
          if ( v21 > v25 )
            goto LABEL_22;
          v26 = (v21 < 0) - 1;
        }
        else
        {
          v26 = v24 - 1;
        }
        v25 = v21 & v26;
LABEL_22:
        v27 = *(float *)(v23 + a2[1]);
        if ( 0.0 != v27 )
          *(float *)(a8 + 4 * (v25 + v31 + v19)) = v27 * a7 + *(float *)(a8 + 4 * (v25 + v31 + v19));
        ++v22;
        ++v21;
        v23 += 4;
      }
      while ( v22 < a2[2] );
      v16 = v32;
LABEL_26:
      v15 = a2[3];
      ++v33;
      v32 = ++v16;
      if ( v16 < v15 )
      {
        v13 = v33;
        continue;
      }
      break;
    }
    v8 = v30;
LABEL_28:
    result = v29 + 1;
    ++v8;
    v28 = ++v29 < a2[4];
    v30 = v8;
  }
  while ( v28 );
  return result;
}
