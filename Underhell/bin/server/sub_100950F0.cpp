char __thiscall sub_100950F0(_DWORD *this, int a2)
{
  const char *v4; // eax

  if ( sub_10094030(this, a2) || !sub_10093A00((int)this, 1, 1) )
    return 0;
  v4 = (const char *)a2;
  if ( !a2 )
    v4 = String;
  (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2244))(this, v4, 0, 0, 0, 0);
  return 1;
}
