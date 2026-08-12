int _setargv()
{
  int v0; // edi
  unsigned int v1; // eax
  char **v2; // esi
  unsigned int v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( !dword_1048ACF8 )
    __initmbctable();
  byte_1048238C = 0;
  GetModuleFileNameA(0, byte_10482288, 0x104u);
  dword_10481B48 = (int)byte_10482288;
  if ( !dword_1048AD00 || (v6 = (char *)dword_1048AD00, !*(_BYTE *)dword_1048AD00) )
    v6 = byte_10482288;
  parse_cmdline(v6, &v4, 0, 0, &v5);
  if ( v5 >= 0x3FFFFFFF )
    return -1;
  if ( v4 == -1 )
    return -1;
  v0 = v5;
  v1 = 4 * v5 + v4;
  if ( v1 < v4 )
    return -1;
  v2 = (char **)sub_100DDA40(v1);
  if ( !v2 )
    return -1;
  parse_cmdline(v6, &v4, v2, (char *)&v2[v0], &v5);
  *(_DWORD *)&dword_10481B2C = v5 - 1;
  dword_10481B30 = (int)v2;
  return 0;
}
