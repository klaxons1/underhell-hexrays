bool __thiscall sub_100BC770(_DWORD *this)
{
  bool result; // al
  const char *v3; // ecx

  result = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(this[2] + 20))(this + 2) )
  {
    v3 = (const char *)this[15];
    if ( !v3 || !strcmp((const char *)(this[26] + 196), v3) )
      return 1;
  }
  return result;
}
