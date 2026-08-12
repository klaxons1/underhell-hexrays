void __thiscall sub_10143510(float *this, int a2, char *a3)
{
  char v4; // cl
  int v5; // edi
  char v6; // al
  _DWORD *v7; // ebx
  int v8; // eax
  const char *v9; // ecx
  const char *v10; // eax
  const char *v11; // eax
  int v12; // eax
  bool v13; // bl
  int v14; // eax
  bool v15; // al
  int v16; // eax
  bool v17; // al
  char v18; // al
  const char *v19; // ecx
  bool v20; // zf
  const char *v21; // eax
  double v22; // [esp+18h] [ebp-28h]
  const char *v23; // [esp+20h] [ebp-20h]
  const char *v24; // [esp+24h] [ebp-1Ch]
  int v26; // [esp+38h] [ebp-8h]
  bool v27; // [esp+3Dh] [ebp-3h]
  bool v28; // [esp+3Eh] [ebp-2h]
  bool v29; // [esp+3Fh] [ebp-1h]
  bool v30; // [esp+4Fh] [ebp+Fh]

  v4 = *a3 & 0xC0 | 0x21;
  *a3 = v4;
  v5 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)a2 != -1 && v5 )
  {
    v6 = v4 ^ (v4 ^ (16 * (*(_DWORD *)(dword_1043C66C + 48) != 0))) & 0x10;
    *a3 = v6;
    if ( (v6 & 0x10) == 0 )
    {
      *a3 = v6 & 0xDF;
      return;
    }
    v30 = *(_DWORD *)(dword_1043C504 + 48) != 0;
    v28 = *(_DWORD *)(dword_1043C54C + 48) != 0;
    *a3 ^= (*a3 ^ (32 * ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 68))(v5) == 0))) & 0x20;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 80 )
    {
      v29 = 0;
      v7 = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(
                       v5,
                       "$forcecheap",
                       0,
                       0);
      v8 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(v5, "$forceexpensive", 0, 0);
      v26 = v8;
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 68))(v7) )
        {
          v29 = v7[2] != 0;
          if ( v7[2] )
          {
            v30 = 0;
LABEL_16:
            v27 = *(_DWORD *)(dword_1043C4BC + 48) != 0;
            if ( *(_DWORD *)(dword_1043C4BC + 48) )
            {
              v9 = "true";
              if ( !v30 )
                v9 = "false";
              v10 = "true";
              if ( !v29 )
                v10 = "false";
              v11 = (const char *)(**(int (__thiscall ***)(int, _DWORD, _DWORD, const char *, const char *))v5)(
                                    v5,
                                    COERCE_UNSIGNED_INT64(*(float *)(a2 + 12)),
                                    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a2 + 12))),
                                    v10,
                                    v9);
              Msg("Water material: %s dist to water: %f\nforcecheap: %s forceexpensive: %s\n", v11, v22, v23, v24);
            }
            v13 = 0;
            if ( v30 )
            {
              if ( *(_DWORD *)(dword_1043C5DC + 48) )
              {
                v12 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(
                        v5,
                        "$reflecttexture",
                        0,
                        0);
                if ( v12 )
                {
                  if ( (*(_BYTE *)(v12 + 28) & 0xF) == 3 )
                    v13 = 1;
                }
              }
            }
            if ( (this[78] > (double)*(float *)(a2 + 12) || v13) && !v29 )
            {
              if ( *(_DWORD *)(dword_1043C594 + 48) )
              {
                v14 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(
                        v5,
                        "$refracttexture",
                        0,
                        0);
                v15 = v14 && (*(_BYTE *)(v14 + 28) & 0xF) == 3;
                *a3 ^= (*a3 ^ (4 * v15)) & 4;
                if ( (*a3 & 4) != 0 )
                  *a3 &= ~0x20u;
              }
              else
              {
                *a3 &= ~4u;
              }
              *a3 ^= (*a3 ^ (2 * v13)) & 2;
              if ( (*a3 & 2) != 0 )
              {
                if ( v28 )
                {
                  *a3 |= 8u;
                }
                else
                {
                  v16 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(
                          v5,
                          "$reflectentities",
                          0,
                          0);
                  v17 = v16 && *(_DWORD *)(v16 + 8);
                  *a3 ^= (*a3 ^ (8 * v17)) & 8;
                }
              }
              *a3 ^= (((*a3 & 6) == 0) ^ *a3) & 1;
              v18 = *a3;
              if ( v27 )
              {
                v19 = "true";
                if ( (v18 & 2) == 0 )
                  v19 = "false";
                v20 = (v18 & 4) == 0;
                v21 = "true";
                if ( v20 )
                  v21 = "false";
                Warning("refract: %s reflect: %s\n", v21, v19);
              }
            }
            return;
          }
        }
        v8 = v26;
      }
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 68))(v8) )
        {
          if ( v30 || (v30 = 0, *(_DWORD *)(v26 + 8)) )
            v30 = 1;
        }
      }
      goto LABEL_16;
    }
  }
}
