void __thiscall sub_100B7030(unsigned __int8 (__cdecl **this)(int, int))
{
  unsigned __int8 (__cdecl **v1)(int, int); // ebx
  bool v2; // zf
  int v3; // edi
  int v4; // eax
  int v5; // esi
  double v6; // st7
  double v7; // st5
  _DWORD *v8; // esi
  int i; // eax
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  int v17; // edi
  bool (__cdecl *v18)(const char **, const char **); // [esp+4h] [ebp-40h] BYREF
  int v19; // [esp+8h] [ebp-3Ch]
  int v20; // [esp+Ch] [ebp-38h]
  int v21; // [esp+10h] [ebp-34h]
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  int v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h]
  int v27; // [esp+28h] [ebp-1Ch] BYREF
  int v28; // [esp+30h] [ebp-14h] BYREF
  int v29; // [esp+34h] [ebp-10h] BYREF
  int v30; // [esp+38h] [ebp-Ch]
  unsigned __int8 (__cdecl **v31)(int, int); // [esp+3Ch] [ebp-8h]
  int *v32; // [esp+40h] [ebp-4h]

  v1 = this;
  v2 = *((_BYTE *)this + 48) == 0;
  v31 = this;
  if ( !v2 )
  {
    v22 = -1;
    v24 = -1;
    v25 = -1;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v23 = 0;
    v26 = 0;
    v18 = sub_10002020;
    sub_100B6DA0((int)&v18, (char)"scripts/hud_textures", 0);
    sub_100B6DA0((int)&v18, (char)"scripts/mod_textures", 0);
    if ( v23 > 0 )
    {
      v32 = (int *)(v19 + 20);
      v30 = v23;
      do
      {
        v3 = *v32;
        if ( *v32 )
        {
          v27 = *v32;
          v4 = sub_100B4B40(v1 + 13, (int)&v27);
          if ( v4 != -1 )
          {
            v5 = *((_DWORD *)v1[14] + 6 * v4 + 5);
            if ( v5 )
            {
              sub_102282F0((char *)(v5 + 64), (char *)(v3 + 64), 0x40u);
              if ( !*(_BYTE *)(v5 + 128) )
              {
                *(_DWORD *)(v5 + 156) = *(_DWORD *)(v3 + 156);
                *(_DWORD *)(v5 + 160) = *(_DWORD *)(v3 + 160);
                *(_DWORD *)(v5 + 164) = *(_DWORD *)(v3 + 164);
                *(_DWORD *)(v5 + 168) = *(_DWORD *)(v3 + 168);
                (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
                  dword_1047CA6C,
                  *(_DWORD *)(v5 + 136),
                  v5 + 64,
                  0,
                  0);
                (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
                  dword_1047CA6C,
                  *(_DWORD *)(v5 + 136),
                  &v29,
                  &v28);
                v6 = (double)v29;
                *(float *)(v5 + 140) = ((double)*(int *)(v5 + 156) + 0.5) / v6;
                v7 = (double)v28;
                *(float *)(v5 + 144) = ((double)*(int *)(v5 + 164) + 0.5) / v7;
                *(float *)(v5 + 148) = ((double)*(int *)(v5 + 160) - 0.5) / v6;
                *(float *)(v5 + 152) = ((double)*(int *)(v5 + 168) - 0.5) / v7;
              }
              v1 = v31;
            }
          }
        }
        v32 += 6;
        --v30;
      }
      while ( v30 );
    }
    sub_100B6620(&v18);
    v8 = v1 + 13;
    v28 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, "ClientScheme");
    for ( i = sub_100B4CF0(v1 + 13); ; i = sub_100B4D90(v1 + 13, v10) )
    {
      v10 = i;
      if ( i < 0 || i >= v8[2] || i > v8[7] )
        break;
      if ( (dword_1042FC20 & 1) == 0 )
      {
        dword_1042FC20 |= 1u;
        dword_1042FC10 = -1;
        dword_1042FC14 = -1;
        dword_1042FC18 = -1;
        dword_1042FC1C = 1;
      }
      if ( *(_DWORD *)(v8[1] + 24 * i) == i )
        break;
      v11 = *((_DWORD *)v1[14] + 6 * i + 5);
      if ( v11 )
      {
        if ( *(_BYTE *)(v11 + 128) )
        {
          v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v28);
          v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 12))(v12, v11 + 64, 1);
          v14 = *(char *)(v11 + 130);
          *(_DWORD *)(v11 + 132) = v13;
          *(_DWORD *)(v11 + 164) = 0;
          *(_DWORD *)(v11 + 156) = 0;
          *(_DWORD *)(v11 + 160) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 284))(
                                     dword_1047CA6C,
                                     v13,
                                     v14);
          v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
                  dword_1047CA6C,
                  *(_DWORD *)(v11 + 132));
          v1 = v31;
          *(_DWORD *)(v11 + 168) = v15;
        }
      }
      v8 = v1 + 13;
    }
    v16 = sub_100B4CF0(&v18);
    if ( v16 != -1 )
    {
      v17 = v19;
      do
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v17 + 24 * v16 + 16));
        v16 = sub_100B4D90(&v18, v16);
      }
      while ( v16 != -1 );
    }
    sub_100B4C30(&v18);
    sub_100B4C30(&v18);
    if ( v21 >= 0 && v19 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19);
  }
}
