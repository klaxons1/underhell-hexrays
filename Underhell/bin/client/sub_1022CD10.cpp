HMODULE __usercall sub_1022CD10@<eax>(int a1@<ebx>, char *Str)
{
  unsigned int v2; // kr00_4
  int v3; // ecx
  HMODULE v4; // esi
  int v5; // eax
  int v6; // ecx
  char Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  char DstBuf[1024]; // [esp+408h] [ebp-400h] BYREF

  if ( !sub_102282C0(Str) )
  {
    _getcwd(DstBuf, 1024);
    v2 = strlen(DstBuf);
    if ( Buffer[v2 + 1023] == 47 || Buffer[v2 + 1023] == 92 )
      Buffer[v2 + 1023] = 0;
    if ( strstr(Str, "bin/") == Str )
      sub_10228370(Buffer, 0x400u, "%s/%s", DstBuf, Str);
    else
      sub_10228370(Buffer, 0x400u, "%s/bin/%s", DstBuf, Str);
    v4 = sub_1022CC10(a1, Buffer);
    if ( v4 )
      goto LABEL_10;
  }
  v4 = sub_1022CC10(a1, Str);
  if ( v4 )
  {
LABEL_10:
    v5 = CommandLine_Tier0(v3);
    if ( !(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 40))(v5, "-allowdebug")
      && !(unsigned __int8)Plat_IsInDebugSession(v6)
      && GetProcAddress(v4, "BuiltDebug") )
    {
      Error("Module %s is a debug build\n", Str);
    }
  }
  return v4;
}
