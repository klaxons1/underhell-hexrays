bool __thiscall sub_10189EF0(void *this, _DWORD *a2, int *ArgList)
{
  const char *v4; // esi
  int v5; // esi
  const char *v6; // eax
  int v7; // edi
  const char *v8; // ebx
  int v9; // eax
  int v11; // esi
  const char *v12; // eax
  int v13; // eax
  int v14; // edi
  const char *v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  int v18; // ebx
  int v19; // eax
  _DWORD *v21; // [esp+10h] [ebp-4h]
  int ArgLista; // [esp+20h] [ebp+Ch]

  if ( !a2 || (v21 = a2, !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2)) )
    v21 = 0;
  v4 = String;
  if ( *ArgList > 0 )
    v4 = (const char *)ArgList[258];
  if ( v4 == "voicemenu" || !_stricmp(v4, "voicemenu") )
  {
    if ( *ArgList >= 3 )
    {
      v5 = __RTDynamicCast(
             (int)v21,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
             (int)&CBaseMultiplayerPlayer `RTTI Type Descriptor',
             0);
      if ( v5 )
      {
        v6 = String;
        if ( *ArgList > 1 )
          v6 = (const char *)ArgList[259];
        v7 = atoi(v6);
        if ( *ArgList > 2 )
          v8 = (const char *)ArgList[260];
        else
          v8 = String;
        v9 = atoi(v8);
        (*(void (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 512))(this, v5, v7, v9);
      }
    }
    return 1;
  }
  else if ( v4 == "achievement_earned" || !_stricmp(v4, "achievement_earned") )
  {
    if ( a2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 1552))(a2) )
    {
      v11 = (unsigned __int16)sub_102653B0();
      ArgLista = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, a2[6]);
      v12 = String;
      if ( *ArgList > 1 )
        v12 = (const char *)ArgList[259];
      v13 = atoi(v12);
      v14 = v11 ^ v13;
      if ( *ArgList > 2 )
        v15 = (const char *)ArgList[260];
      else
        v15 = String;
      if ( (ArgLista ^ v13) == atoi(v15) )
      {
        v16 = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
                          dword_106B31F8,
                          "achievement_earned",
                          0);
        v17 = v16;
        if ( v16 )
        {
          v18 = *v16;
          v19 = sub_1001F3C0(a2);
          (*(void (__thiscall **)(_DWORD *, const char *, int))(v18 + 40))(v17, "player", v19);
          (*(void (__thiscall **)(_DWORD *, const char *, int))(*v17 + 40))(v17, "achievement", v14);
          (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v17, 0);
        }
        (*(void (__thiscall **)(_DWORD *, int))(*a2 + 1668))(a2, v14);
      }
    }
    return 1;
  }
  else
  {
    return sub_1015DCF0((int)a2, (char)ArgList);
  }
}
