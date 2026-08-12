HMODULE __usercall sub_1042FF50@<eax>(int a1@<ebx>, char *Str)
{
  unsigned int v2; // kr00_4
  HMODULE v3; // esi
  int v4; // eax
  int v5; // ecx
  char Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  char DstBuf[1024]; // [esp+408h] [ebp-400h] BYREF

  if ( !sub_10429990(Str) )
  {
    _getcwd(DstBuf, 1024);
    v2 = strlen(DstBuf);
    if ( Buffer[v2 + 1023] == 47 || Buffer[v2 + 1023] == 92 )
      Buffer[v2 + 1023] = 0;
    if ( strstr(Str, "bin/") == Str )
      sub_10429A00(Buffer, 0x400u, "%s/%s", DstBuf, Str);
    else
      sub_10429A00(Buffer, 0x400u, "%s/bin/%s", DstBuf, Str);
    v3 = sub_1042FE50(a1, Buffer);
    if ( v3 )
      goto LABEL_10;
  }
  v3 = sub_1042FE50(a1, Str);
  if ( v3 )
  {
LABEL_10:
    v4 = CommandLine_Tier0();
    if ( !(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 40))(v4, "-allowdebug")
      && !(unsigned __int8)Plat_IsInDebugSession(v5)
      && GetProcAddress(v3, "BuiltDebug") )
    {
      Error("Module %s is a debug build\n", Str);
    }
  }
  return v3;
}
