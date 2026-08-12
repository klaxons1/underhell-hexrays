char __thiscall sub_10272460(_DWORD *this, int a2, int *ArgList)
{
  int v4; // ebx
  int *v5; // edi
  const char *v6; // eax
  int v7; // eax
  int v8; // esi
  int *v9; // ebx
  const char *v10; // eax
  const char *v12; // eax
  const char *v13; // eax
  int v14; // eax
  const char *v15; // edi
  int v16; // eax
  const char *v17; // eax
  int *v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h]
  const char **v20; // [esp+18h] [ebp+8h]

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24)) - 1;
  v19 = v4;
  if ( v4 < 0 || v4 >= this[3] )
  {
    if ( *ArgList > 0 )
      v17 = (const char *)ArgList[258];
    else
      v17 = String;
    sub_102722B0("CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n", v17, v4);
    return 1;
  }
  else
  {
    v5 = ArgList;
    v6 = String;
    if ( *ArgList > 0 )
      v6 = (const char *)ArgList[258];
    if ( !_stricmp(v6, "vban") && (v7 = *v5, *v5 >= 2) )
    {
      v8 = 1;
      if ( v7 > 1 )
      {
        v20 = (const char **)(v5 + 259);
        v9 = &dword_106CF898[v4];
        do
        {
          ArgList = 0;
          if ( v8 < 0 || v8 >= v7 )
            v10 = String;
          else
            v10 = *v20;
          sscanf(v10, "%x", &ArgList);
          if ( v8 > 1 )
          {
            sub_102722B0("CVoiceGameMgr::ClientCommand: invalid index (%d)\n", v8);
          }
          else
          {
            sub_102722B0("CVoiceGameMgr::ClientCommand: vban (0x%x) from %d\n", ArgList, v19);
            *v9 = (int)ArgList;
          }
          v7 = *v5;
          ++v20;
          ++v8;
          ++v9;
        }
        while ( v8 < *v5 );
      }
      return 1;
    }
    else
    {
      v12 = String;
      if ( *v5 > 0 )
        v12 = (const char *)v5[258];
      if ( !_stricmp(v12, "VModEnable") && *v5 >= 2 )
      {
        v13 = String;
        if ( *v5 > 1 )
          v13 = (const char *)v5[259];
        v14 = atoi(v13);
        sub_102722B0("CVoiceGameMgr::ClientCommand: VModEnable (%d)\n", v14 != 0);
        if ( *v5 > 1 )
          v15 = (const char *)v5[259];
        else
          v15 = String;
        v18 = &dword_106CF890;
        v19 = v4;
        v16 = atoi(v15);
        sub_10272280(&v18, v16 != 0);
        dword_106CF894[v4 >> 5] &= ~(1 << (v4 & 0x1F));
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
}
