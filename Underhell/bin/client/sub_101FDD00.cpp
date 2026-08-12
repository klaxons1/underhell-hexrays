char __userpurge sub_101FDD00@<al>(int **a1@<ecx>, int a2@<esi>, char *Src, char a4, int a5)
{
  char *v5; // edi
  char v7; // bl
  int v9; // [esp+20h] [ebp-238h] BYREF
  _BYTE v10[4]; // [esp+24h] [ebp-234h] BYREF
  int v11; // [esp+28h] [ebp-230h]
  char Buffer[256]; // [esp+54h] [ebp-204h] BYREF
  char Destination[4]; // [esp+154h] [ebp-104h] BYREF
  char ArgList[256]; // [esp+158h] [ebp-100h] BYREF

  v5 = Src;
  if ( *Src == 33 )
  {
    a4 = 1;
    v5 = Src + 1;
  }
  sub_102287C0(v5, Destination, 0x104u);
  sub_10228270(v5);
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C, a2) >= 90 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) != 90
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 168))(dword_1047C97C) )
    {
      goto LABEL_10;
    }
    sub_10228370(Buffer, 0x104u, "%s_dx90_slow.%s", (char)ArgList);
  }
  else
  {
    sub_10228370(Buffer, 0x104u, "%s_dx80.%s", (char)ArgList);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
         dword_1047C968 + 4,
         Buffer,
         0) )
  {
    v5 = Buffer;
  }
LABEL_10:
  sub_1022EDF0(0, 0, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, const char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)(dword_1047C968 + 4)
                                                                                             + 56))(
         dword_1047C968 + 4,
         v5,
         "GAME",
         v10,
         0,
         0) )
  {
    v7 = sub_101FDB90(a1, (int)&v9, v5, a4, a5);
    if ( v11 >= 0 )
    {
      if ( v9 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v9);
    }
    return v7;
  }
  else
  {
    Warning("Particles: Missing '%s'\n", v5);
    if ( v11 >= 0 && v9 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v9);
    return 0;
  }
}
