_DWORD *__thiscall sub_1025C030(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  const char *v4; // eax
  _DWORD *result; // eax
  unsigned __int8 v6; // al

  sub_10249DD0((int)this, a2);
  v3 = (_DWORD *)this[75];
  if ( v3 )
  {
    v4 = (const char *)sub_1022B4C0(v3, "command", (int)Locale);
    sub_1022ABA0(a2, "command", v4);
  }
  result = sub_1022ACA0(a2, "default", (this[73] & 0x40) != 0);
  if ( *((_BYTE *)this + 360) )
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 932))(this);
    return sub_1022ACA0(a2, "selected", v6);
  }
  return result;
}
