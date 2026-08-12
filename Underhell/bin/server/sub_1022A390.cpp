int __cdecl sub_1022A390(char *Source, int a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  int v6; // edi
  char Destination[260]; // [esp+8h] [ebp-134h] BYREF
  int v8[12]; // [esp+10Ch] [ebp-30h] BYREF

  DevMsg(2, "Blocking load of scene from '%s'\n", Source);
  sub_104299C0(Destination, Source, 0x104u);
  sub_10429C20(Destination, ".vcd", 0x104u);
  sub_10429910(Destination, 92);
  v2 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3210 + 20))(dword_106B3210, Destination);
  v3 = v2;
  if ( v2
    && (v4 = sub_10184390(v2),
        (*(unsigned __int8 (__thiscall **)(int, char *, int, int))(*(_DWORD *)dword_106B3210 + 24))(
          dword_106B3210,
          Destination,
          v4,
          v3)) )
  {
    if ( sub_10184390(536) )
      v6 = sub_1041E670(0);
    else
      v6 = 0;
    sub_1042DEC0(v4, v3, 8);
    if ( (unsigned __int8)sub_1041E340((int)v8, Destination, (int)off_10646C54) )
    {
      sub_1041CA60(sub_1022F660);
      sub_1041C7F0(a2);
    }
    else
    {
      Warning("CSceneEntity::LoadScene: Unable to load binary scene '%s'\n", Destination);
      if ( v6 )
      {
        sub_1041E7C0(v6);
        sub_10184660(v6);
      }
      v6 = 0;
    }
    sub_10184660(v4);
    if ( v8[2] >= 0 )
    {
      if ( v8[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8[0]);
    }
    return v6;
  }
  else
  {
    sub_102253C0(Destination);
    return 0;
  }
}
