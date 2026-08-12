char __thiscall sub_10404320(_DWORD *this)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)sub_100D1940(this);
  if ( !v2 || sub_100CF5D0(v2, this[298]) <= 0 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, 7, 0.0);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 944))(this, 183);
  return 1;
}
