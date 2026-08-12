int __cdecl sub_100ECC30(int a1)
{
  int v1; // ecx
  const char *v2; // eax
  char *v3; // esi
  char *v4; // edi
  int result; // eax
  char Destination[256]; // [esp+4h] [ebp-104h] BYREF
  _BYTE v7[4]; // [esp+104h] [ebp-4h] BYREF

  v2 = (const char *)sub_10418450(v1);
  v3 = (char *)v2;
  if ( !v2 || !*v2 )
    return 6;
  v4 = strstr(v2, " ");
  if ( v4 )
  {
    sub_104299C0(Destination, v3, 0x100u);
    Destination[v4 - v3] = 0;
    v3 = Destination;
  }
  if ( !_stricmp(v3, "Walk") )
    return 6;
  if ( !_stricmp(v3, "Run") )
    return 11;
  if ( !_stricmp(v3, "CrouchWalk") )
    return 8;
  result = sub_10002030((int)v3);
  if ( result == -1 )
  {
    *(_DWORD *)(a1 + 2704) = *(_DWORD *)sub_10162BE0(v7, v3);
    return 16;
  }
  return result;
}
