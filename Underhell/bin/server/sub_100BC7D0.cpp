void __thiscall sub_100BC7D0(int this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx
  const char *v5; // eax
  char (__thiscall *v6)(int); // edx
  const char *v7; // eax
  char v8; // al
  int v9; // edi
  int (__thiscall *v10)(int); // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // [esp-Ch] [ebp-41Ch]
  int v15; // [esp-8h] [ebp-418h]
  char Buffer[1024]; // [esp+8h] [ebp-408h] BYREF
  int v17; // [esp+408h] [ebp-8h]
  float v18; // [esp+40Ch] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 20))(this + 8) )
  {
    v2 = sub_10001520(*(_BYTE **)(this + 104)) == 0;
    v3 = *(_DWORD *)(this + 8);
    v4 = this + 8;
    if ( v2 )
    {
      v5 = (const char *)(*(int (__thiscall **)(int))(v3 + 4))(v4);
      Msg("Achievements disabled, ignoring achievement progress for %s\n", v5);
    }
    else
    {
      v6 = *(char (__thiscall **)(int))(v3 + 8);
      ++*(_DWORD *)(this + 88);
      if ( v6(v4) < 0 )
        *(_BYTE *)(*(_DWORD *)(this + 104) + 456) = 1;
      if ( *(_DWORD *)(dword_106900AC + 48) )
      {
        v7 = (const char *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this + 8) + 4))(
                             this + 8,
                             *(_DWORD *)(this + 88),
                             *(_DWORD *)(this + 24));
        Msg("Achievement count increased for %s: %d/%d\n", v7, v14, v15);
      }
      if ( *(_BYTE *)(this + 41) && *((_DWORD *)off_10627B10 + 4) )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 4))(this + 8);
        sub_10429A00(Buffer, 0x400u, "%s_STAT", v8);
        v9 = *((_DWORD *)off_10627B10 + 4);
        v10 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 404);
        v17 = 0;
        v11 = v10(dword_106B31D0);
        if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD, char *, _DWORD))(*(_DWORD *)v9 + 36))(
                v9,
                v11 & 0xFFFFFF,
                0,
                Buffer,
                *(_DWORD *)(this + 88)) )
          DevMsg("ISteamUserStats::GetStat failed to set progress value in Steam for achievement %s\n", Buffer);
        v12 = *(_DWORD *)(this + 104);
        if ( 0.0 == *(float *)(v12 + 460) || (v18 = *(float *)(v12 + 460), Plat_FloatTime() - v18 > 900.0) )
          sub_10001390(*(float **)(this + 104));
      }
      v13 = *(_DWORD *)(this + 24);
      if ( v13 > 0 )
      {
        if ( *(_DWORD *)(this + 88) < v13 )
          sub_100BC730((_DWORD *)this);
        else
          sub_100BC4E0((_DWORD *)this);
      }
    }
  }
}
