char __thiscall sub_1041A2F0(_DWORD *this)
{
  char v2; // bl
  bool v3; // cc
  int v4; // ebx
  int v5; // esi
  bool v6; // zf
  int v7; // esi
  int v8; // edi
  const char *v9; // eax
  int v10; // ebx
  int v11; // esi
  const char *v12; // eax
  char v13; // al
  char v14; // cl
  char v15; // dl
  char v16; // al
  char v17; // cl
  char v19; // [esp+Bh] [ebp-31h]
  int v20; // [esp+Ch] [ebp-30h]
  int v21; // [esp+10h] [ebp-2Ch]
  char *String2a; // [esp+14h] [ebp-28h]
  char *String2; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  char *v25; // [esp+1Ch] [ebp-20h]
  _DWORD v26[4]; // [esp+20h] [ebp-1Ch] BYREF
  float v27; // [esp+30h] [ebp-Ch]
  char v28; // [esp+34h] [ebp-8h]
  int v29; // [esp+38h] [ebp-4h]

  v2 = 1;
  v19 = 1;
  sub_10431290(v26);
  sub_10431100((void *)String);
  v28 &= 0xF0u;
  v27 = 0.0;
  v3 = this[65] <= 0;
  v29 = 1;
  if ( !v3 )
  {
    v4 = 0;
    v21 = 1;
    v20 = 0;
    do
    {
      v5 = this[62];
      v6 = v4 + v5 == 0;
      v7 = v4 + v5;
      v24 = v7;
      if ( !v6 )
      {
        v8 = v4 + this[57];
        String2a = (char *)sub_104310A0(v8);
        v9 = (const char *)sub_104310A0(v7);
        if ( _stricmp(v9, String2a) )
        {
          v19 = 0;
          String2 = (char *)v21;
          if ( v21 < this[60] )
          {
            v10 = v4 + 28;
            while ( 1 )
            {
              v11 = v10 + this[57];
              v25 = (char *)sub_104310A0(v11);
              v12 = (const char *)sub_104310A0(v24);
              if ( !_stricmp(v12, v25) )
                break;
              v10 += 28;
              if ( (int)++String2 >= this[60] )
                goto LABEL_11;
            }
            sub_104310E0(v8);
            v27 = *(float *)(v8 + 16);
            v28 ^= (v28 ^ *(_BYTE *)(v8 + 20)) & 1;
            v28 ^= (v28 ^ *(_BYTE *)(v8 + 20)) & 2;
            v28 ^= (v28 ^ *(_BYTE *)(v8 + 20)) & 4;
            v28 ^= (v28 ^ *(_BYTE *)(v8 + 20)) & 8;
            v29 = *(_DWORD *)(v8 + 24);
            sub_104310E0(v11);
            *(float *)(v8 + 16) = *(float *)(v11 + 16);
            *(_BYTE *)(v8 + 20) ^= (*(_BYTE *)(v8 + 20) ^ *(_BYTE *)(v11 + 20)) & 1;
            v13 = *(_BYTE *)(v8 + 20) ^ (*(_BYTE *)(v8 + 20) ^ *(_BYTE *)(v11 + 20)) & 2;
            *(_BYTE *)(v8 + 20) = v13;
            v14 = v13 ^ (v13 ^ *(_BYTE *)(v11 + 20)) & 4;
            *(_BYTE *)(v8 + 20) = v14;
            *(_BYTE *)(v8 + 20) = v14 ^ (v14 ^ *(_BYTE *)(v11 + 20)) & 8;
            *(_DWORD *)(v8 + 24) = *(_DWORD *)(v11 + 24);
            sub_104310E0(v26);
            v15 = *(_BYTE *)(v11 + 20);
            *(float *)(v11 + 16) = v27;
            *(_BYTE *)(v11 + 20) ^= (v28 ^ v15) & 1;
            v16 = *(_BYTE *)(v11 + 20) ^ (v28 ^ *(_BYTE *)(v11 + 20)) & 2;
            *(_BYTE *)(v11 + 20) = v16;
            v17 = v16 ^ (v28 ^ v16) & 4;
            *(_BYTE *)(v11 + 20) = v17;
            *(_BYTE *)(v11 + 20) = v17 ^ (v28 ^ v17) & 8;
            *(_DWORD *)(v11 + 24) = v29;
LABEL_11:
            v4 = v20;
          }
        }
      }
      ++v21;
      v4 += 28;
      v20 = v4;
    }
    while ( v21 - 1 < this[65] );
    v2 = v19;
  }
  if ( v26[2] >= 0 && v26[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
  return v2;
}
