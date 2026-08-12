int __thiscall sub_1026AE80(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  this[90] = 0;
  v4 = (_DWORD *)sub_10229D00(32);
  if ( v4 )
    v5 = sub_1022B270(v4, (int)"OnCursorMoved", "x", a2, "y", a3);
  else
    v5 = 0;
  sub_10236860(this, v5);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 48))(this, 0);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
