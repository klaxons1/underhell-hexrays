int __thiscall sub_101E4C80(_DWORD *this, int a2, void *Src, float a4)
{
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int *v9; // ecx
  int v10; // ebp
  int v11; // edx
  int v12; // ebx
  int v13; // edi
  int v14; // esi
  char v15; // cl
  char v16; // al
  char v17; // cl
  char v18; // dl
  char v19; // al
  char v20; // cl
  int *v21; // [esp+10h] [ebp-3Ch]
  _DWORD v22[4]; // [esp+14h] [ebp-38h] BYREF
  float v23; // [esp+24h] [ebp-28h]
  char v24; // [esp+28h] [ebp-24h]
  int v25; // [esp+2Ch] [ebp-20h]
  _DWORD v26[5]; // [esp+30h] [ebp-1Ch] BYREF
  char v27; // [esp+44h] [ebp-8h]
  _DWORD *v28; // [esp+48h] [ebp-4h]
  int *v29; // [esp+50h] [ebp+4h]
  int Srca; // [esp+54h] [ebp+8h]
  int v31; // [esp+58h] [ebp+Ch]

  sub_1022D3E0(v26);
  sub_1022D0A0(Src);
  *(float *)&v26[4] = a4;
  v6 = this[5 * a2 + 60];
  v27 &= 0xF0u;
  v28 = this;
  v29 = &this[5 * a2 + 57];
  sub_101E48D0(v29, v6, (int)v26);
  sub_1022D3E0(v22);
  sub_1022D0A0((void *)Locale);
  v24 &= 0xF0u;
  v23 = 0.0;
  v7 = 5 * a2 + 60;
  result = this[v7];
  v9 = &this[v7];
  v10 = 1;
  v25 = 1;
  v21 = v9;
  if ( result > 0 )
  {
    v11 = 0;
    v31 = 0;
    Srca = 1;
    do
    {
      if ( v10 < result )
      {
        v12 = v11 + 28;
        do
        {
          v13 = v12 + *v29;
          v14 = v11 + *v29;
          if ( *(float *)(v13 + 16) < (double)*(float *)(v14 + 16) )
          {
            sub_1022D080(v11 + *v29);
            v23 = *(float *)(v14 + 16);
            v24 ^= (v24 ^ *(_BYTE *)(v14 + 20)) & 1;
            v24 ^= (v24 ^ *(_BYTE *)(v14 + 20)) & 2;
            v24 ^= (v24 ^ *(_BYTE *)(v14 + 20)) & 4;
            v24 ^= (v24 ^ *(_BYTE *)(v14 + 20)) & 8;
            v25 = *(_DWORD *)(v14 + 24);
            sub_1022D080(v13);
            v15 = *(_BYTE *)(v14 + 20);
            *(float *)(v14 + 16) = *(float *)(v13 + 16);
            *(_BYTE *)(v14 + 20) ^= (*(_BYTE *)(v13 + 20) ^ v15) & 1;
            v16 = *(_BYTE *)(v14 + 20) ^ (*(_BYTE *)(v14 + 20) ^ *(_BYTE *)(v13 + 20)) & 2;
            *(_BYTE *)(v14 + 20) = v16;
            v17 = v16 ^ (v16 ^ *(_BYTE *)(v13 + 20)) & 4;
            *(_BYTE *)(v14 + 20) = v17;
            *(_BYTE *)(v14 + 20) = v17 ^ (v17 ^ *(_BYTE *)(v13 + 20)) & 8;
            *(_DWORD *)(v14 + 24) = *(_DWORD *)(v13 + 24);
            sub_1022D080(v22);
            v18 = *(_BYTE *)(v13 + 20);
            *(float *)(v13 + 16) = v23;
            *(_BYTE *)(v13 + 20) ^= (v24 ^ v18) & 1;
            v19 = *(_BYTE *)(v13 + 20) ^ (v24 ^ *(_BYTE *)(v13 + 20)) & 2;
            *(_BYTE *)(v13 + 20) = v19;
            v20 = v19 ^ (v24 ^ v19) & 4;
            *(_BYTE *)(v13 + 20) = v20;
            *(_BYTE *)(v13 + 20) = v20 ^ (v24 ^ v20) & 8;
            v11 = v31;
            *(_DWORD *)(v13 + 24) = v25;
            v9 = v21;
          }
          ++v10;
          v12 += 28;
        }
        while ( v10 < *v9 );
        v10 = Srca;
      }
      result = *v9;
      ++v10;
      v11 += 28;
      Srca = v10;
      v31 = v11;
    }
    while ( v10 - 1 < *v9 );
  }
  if ( v22[2] >= 0 )
  {
    result = v22[0];
    if ( v22[0] )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
      v22[0] = 0;
    }
    v22[1] = 0;
  }
  if ( v26[2] >= 0 )
  {
    result = v26[0];
    if ( v26[0] )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
  }
  return result;
}
