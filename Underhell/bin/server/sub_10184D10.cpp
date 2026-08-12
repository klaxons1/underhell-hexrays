char __stdcall sub_10184D10(_DWORD *a1, int a2)
{
  const char *v3; // eax

  if ( !a2 )
    return 1;
  if ( (a2 & 1) != 0 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 320))(a1)
    || (a2 & 2) != 0 && a1[6] && (a1[64] & 0x2000) != 0 )
  {
    return 0;
  }
  if ( (a2 & 4) != 0 )
  {
    v3 = (const char *)a1[23];
    if ( !v3 )
      v3 = String;
    if ( v3 == "func_pushable" || !_stricmp(v3, "func_pushable") )
      return 0;
  }
  return 1;
}
