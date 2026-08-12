const char *__thiscall sub_1005D230(_DWORD *this, int a2)
{
  const char *v4; // eax

  if ( (unsigned int)(a2 - 1) > 0x10 )
    return "ERRORNAME";
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 16))(this, a2) )
    return "unconnected";
  v4 = (const char *)this[a2 + 1];
  if ( !v4 || !_stricmp(v4, "unconnected") )
    sub_1005CE10(this - 298, a2);
  return (const char *)this[a2 + 1];
}
