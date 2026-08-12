int sub_100CDF50(_DWORD *a1, char *Format, ...)
{
  int v2; // eax
  const char *v3; // esi
  const char *v4; // eax
  int result; // eax
  char Buffer[4096]; // [esp+8h] [ebp-1010h] BYREF
  _DWORD v7[4]; // [esp+1008h] [ebp-10h] BYREF
  va_list va; // [esp+1028h] [ebp+10h] BYREF

  va_start(va, Format);
  v2 = a1[2];
  v3 = "empty";
  if ( v2 )
  {
    v3 = *(const char **)(v2 + 4);
    if ( !v3 )
      v3 = "NULL";
  }
  sub_102283C0(Buffer, 0x1000u, Format, va);
  sub_1022D3E0(v7);
  if ( sub_100CC0A0(a1, (int)v7) )
  {
    v4 = (const char *)sub_1022CF00(v7);
    result = Msg("%s.%s%s", v4, v3, Buffer);
  }
  else
  {
    result = Msg("%s%s", v3, Buffer);
  }
  if ( v7[2] >= 0 )
  {
    result = v7[0];
    if ( v7[0] )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v7[0]);
  }
  return result;
}
