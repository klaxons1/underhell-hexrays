char __thiscall sub_1021A700(_BYTE *this, const char *a2)
{
  char result; // al
  CHAR v4[1024]; // [esp+4h] [ebp-400h] BYREF

  wsprintfA(v4, "Software\\Valve\\%s", a2);
  if ( (*(int (__cdecl **)(int, CHAR *, _DWORD, _DWORD, _DWORD, int, _DWORD, _BYTE *, const char **))(g_pVCR + 76))(
         -2147483647,
         v4,
         0,
         0,
         0,
         983103,
         0,
         this + 8,
         &a2) )
  {
    this[4] = 0;
    return 0;
  }
  else
  {
    result = 1;
    this[4] = 1;
  }
  return result;
}
