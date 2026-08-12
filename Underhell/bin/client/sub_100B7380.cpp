void __thiscall sub_100B7380(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int i; // esi
  int v6; // ecx
  char **v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  const char *v11; // eax
  char *v12; // eax
  int (__thiscall *v13)(int); // eax
  int v14; // eax
  const char *v15; // eax
  int v16; // eax
  int v17; // eax
  const char *v18; // eax
  char *v19; // ebx
  int v20; // eax
  void *v21; // eax
  int v22; // esi
  int v23; // esi
  int v24; // edi
  const char *v25; // [esp-4h] [ebp-48h]
  const char *v26; // [esp-4h] [ebp-48h]
  bool (__cdecl *v27)(const char **, const char **); // [esp+Ch] [ebp-38h] BYREF
  int v28; // [esp+10h] [ebp-34h]
  int v29; // [esp+14h] [ebp-30h]
  int v30; // [esp+18h] [ebp-2Ch]
  int v31; // [esp+1Ch] [ebp-28h]
  int v32; // [esp+20h] [ebp-24h]
  int v33; // [esp+24h] [ebp-20h]
  int v34; // [esp+28h] [ebp-1Ch]
  int v35; // [esp+2Ch] [ebp-18h]
  char *v36; // [esp+30h] [ebp-14h] BYREF
  char *v37; // [esp+34h] [ebp-10h] BYREF
  _BYTE *v38; // [esp+38h] [ebp-Ch]
  int v39; // [esp+3Ch] [ebp-8h]
  char **v40; // [esp+40h] [ebp-4h]

  sub_1012CAB0("ResetHUD", sub_100B37A0);
  v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, "ClientScheme");
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v2);
  dword_1042FAD8 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v3 + 12))(v3, "CenterPrintText", 1);
  sub_100C72F0();
  sub_100D0A10(&unk_10430F68);
  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(this + 40); ++i )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  }
  *(_BYTE *)(this + 48) = 0;
  if ( sub_10229D00(32) )
  {
    v7 = (char **)sub_10229D20("layout");
    v40 = v7;
    if ( v7 )
    {
      if ( dword_10413188 )
        v8 = dword_10413188 + 4;
      else
        v8 = 0;
      if ( (unsigned __int8)sub_10229D70(v8, "scripts/HudLayout.res", 0) )
      {
        v36 = *(char **)(this + 40);
        if ( (int)v36 > 0 )
        {
          do
          {
            v38 = *(_BYTE **)(*(_DWORD *)(this + 28) + 4 * v4);
            v9 = __RTDynamicCast(
                   (int)v38,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CHudElement `RTTI Type Descriptor',
                   (int)&vgui::Panel `RTTI Type Descriptor',
                   0);
            if ( v9 )
            {
              v12 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 72))(v9);
              if ( !sub_1022A6A0(v12, 0) )
              {
                v13 = *(int (__thiscall **)(int))(*(_DWORD *)v9 + 72);
                v39 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v4);
                v14 = v13(v9);
                v15 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v39 + 32))(v39, v14);
                Msg("Hud element '%s' doesn't have an entry '%s' in scripts/HudLayout.res\n", v15, v25);
              }
              if ( !v38[21] && !(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 144))(v9) )
              {
                v16 = *(_DWORD *)v9;
                v38 = *(_BYTE **)(*(_DWORD *)(this + 28) + 4 * v4);
                v17 = (*(int (__thiscall **)(int))(v16 + 72))(v9);
                v18 = (const char *)(*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 32))(v38, v17);
                DevMsg("Hud element '%s'/'%s' doesn't have a parent\n", v18, v26);
              }
            }
            else
            {
              v10 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v4);
              v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 32))(v10);
              Msg("Non-vgui hud element %s\n", v11);
            }
            ++v4;
          }
          while ( v4 < (int)v36 );
          v7 = v40;
        }
      }
      sub_1022AF00(v7);
    }
  }
  if ( !*(_BYTE *)(this + 48) )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    *(_BYTE *)(this + 48) = 1;
    v31 = -1;
    v32 = 0;
    v33 = -1;
    v34 = -1;
    v35 = 0;
    v27 = sub_10002020;
    sub_100B6DA0((int)&v27, (char)"scripts/hud_textures", 0);
    sub_100B6DA0((int)&v27, (char)"scripts/mod_textures", 0);
    if ( v32 > 0 )
    {
      v40 = (char **)(v28 + 20);
      v39 = v32;
      do
      {
        v19 = *v40;
        if ( !*v40
          || (v37 = *v40, v20 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))(this + 52), (int)&v37), v20 == -1)
          || !*(_DWORD *)(*(_DWORD *)(this + 56) + 24 * v20 + 20) )
        {
          v21 = (void *)sub_1022FF30(&unk_1042FADC);
          v22 = (int)v21;
          if ( v21 )
          {
            memset(v21, 0, 0x40u);
            memset((void *)(v22 + 64), 0, 0x40u);
            *(_DWORD *)(v22 + 140) = 0;
            *(_DWORD *)(v22 + 144) = 0;
            *(_DWORD *)(v22 + 148) = 0;
            *(_DWORD *)(v22 + 152) = 0;
            *(_DWORD *)(v22 + 156) = 0;
            *(_DWORD *)(v22 + 160) = 0;
            *(_DWORD *)(v22 + 164) = 0;
            *(_DWORD *)(v22 + 168) = 0;
            *(_DWORD *)(v22 + 136) = -1;
            *(_WORD *)(v22 + 128) = 0;
            *(_BYTE *)(v22 + 130) = 0;
            *(_DWORD *)(v22 + 132) = 0;
          }
          v36 = (char *)v22;
          sub_100B3B10((char *)v22, v19);
          sub_100B38B0(v22);
          sub_100B6CF0(this + 52, v19, &v36);
        }
        v40 += 6;
        --v39;
      }
      while ( v39 );
    }
    sub_100B6620(&v27);
    v23 = sub_100B4CF0(&v27);
    if ( v23 != -1 )
    {
      v24 = v28;
      do
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v24 + 24 * v23 + 16));
        v23 = sub_100B4D90(&v27, v23);
      }
      while ( v23 != -1 );
    }
    sub_100B4C30(&v27);
    sub_100B4C30(&v27);
    if ( v30 >= 0 )
    {
      if ( v28 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28);
    }
  }
}
