char __userpurge sub_101607D0@<al>(int a1@<ecx>, int a2@<edi>, char a3)
{
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  size_t v9; // esi
  int v10; // eax
  size_t v11; // [esp-8h] [ebp-370h]
  char ArgList[256]; // [esp+4h] [ebp-364h] BYREF
  char String[512]; // [esp+104h] [ebp-264h] BYREF
  int v14[12]; // [esp+304h] [ebp-64h] BYREF
  int Src; // [esp+334h] [ebp-34h] BYREF
  void *v16[4]; // [esp+338h] [ebp-30h] BYREF
  size_t Size; // [esp+348h] [ebp-20h]
  char v18; // [esp+34Dh] [ebp-1Bh]
  int v19; // [esp+358h] [ebp-10h]
  _BYTE v20[4]; // [esp+364h] [ebp-4h] BYREF

  if ( !byte_106B4AC1
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 52))(off_10627F88)
    || !(**(unsigned __int8 (__thiscall ***)(int))off_10627F88)(off_10627F88) )
  {
    return 0;
  }
  sub_1042DE40(0, 0, 0);
  if ( (v18 & 1) != 0 )
    sub_1042E0C0((int)v16, "%d", 6);
  else
    sub_10087920(v16, 6);
  sub_1042DD00(&byte_106B3F00, 0x10u);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 60))(a1) )
  {
    sub_101625C0(v16);
  }
  else if ( (v18 & 1) != 0 )
  {
    sub_1042E0C0((int)v16, "%d", 239);
  }
  else
  {
    Src = -17973521;
    if ( (unsigned __int8)sub_1042D470(4) )
    {
      if ( (v20[0] & 1) != 0 )
      {
        sub_100868D0(v20, (int *)((char *)v16[0] + Size - v19), (char *)&Src, 1);
        Size += 4;
        sub_1042D4C0(v16);
      }
      else
      {
        *(_DWORD *)((char *)v16[0] + Size - v19) = -17973521;
        Size += 4;
        sub_1042D4C0(v16);
      }
    }
  }
  (*(void (__thiscall **)(int, void **, int))(*(_DWORD *)off_10627F88 + 148))(off_10627F88, v16, a2);
  memset(String, 0, sizeof(String));
  v5 = *(_DWORD *)(dword_106B31D8 + 4);
  v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 64))(a1, "MOD");
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v5 + 40))(dword_106B31D8 + 4, v6) )
  {
    v7 = *(_DWORD *)dword_106B31D8;
    v8 = (*(int (__thiscall **)(int, const char *, char *, int, _DWORD))(*(_DWORD *)a1 + 64))(a1, "MOD", String, 512, 0);
    (*(void (__thiscall **)(int, int))(v7 + 48))(dword_106B31D8, v8);
  }
  else
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 204))(dword_106B31D0, ArgList);
    sub_104297E0(ArgList);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 64))(a1);
    sub_10429A00(String, 0x200u, "%s/%s", (char)ArgList);
    _strlwr(String);
    sub_10429910(String, 92);
  }
  if ( byte_106B4AC2 || a3 )
  {
    (*(void (__thiscall **)(int, char *, const char *, void **))(*(_DWORD *)(dword_106B31D8 + 4) + 60))(
      dword_106B31D8 + 4,
      String,
      "MOD",
      v16);
    sub_1015EFA0(a1, "Shut down wrote to '%s'\n", String);
  }
  else
  {
    v11 = Size;
    v9 = Size;
    v10 = sub_10184390(Size);
    sub_1042DEC0(v10, v11, 0);
    sub_1042DD00(v16[0], v9);
    (*(void (__thiscall **)(int, char *, int, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D8 + 308))(
      dword_106B31D8,
      String,
      v14[0],
      v14[4],
      1,
      0,
      0);
    sub_1002A150(v14);
  }
  if ( (int)v16[2] >= 0 )
  {
    if ( v16[0] )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
  }
  return 1;
}
