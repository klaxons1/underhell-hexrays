int __thiscall sub_100D7550(_DWORD *this)
{
  const char *v2; // ecx
  const char *v3; // eax
  int v4; // eax
  bool (__cdecl *v6[7])(int, int); // [esp+8h] [ebp-1Ch] BYREF

  Msg("----------------------------------------------\n");
  if ( this )
  {
    v2 = (const char *)this[65];
    if ( !v2 )
    {
      v2 = (const char *)this[23];
      if ( !v2 )
        v2 = String;
    }
  }
  else
  {
    v2 = "<<null>>";
  }
  v3 = (const char *)this[23];
  if ( !v3 )
    v3 = String;
  Msg("RESPONSE CRITERIA FOR: %s (%s)\n", v3, v2);
  sub_10067CD0(v6);
  (*(void (__thiscall **)(_DWORD *, bool (__cdecl **)(int, int)))(*this + 452))(this, v6);
  v4 = sub_10261B20();
  if ( v4 )
    (*(void (__thiscall **)(int, bool (__cdecl **)(int, int)))(*(_DWORD *)v4 + 1540))(v4, v6);
  sub_10067770(v6);
  return sub_10067DD0((int)v6);
}
