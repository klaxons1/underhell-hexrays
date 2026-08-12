int __thiscall sub_102865E0(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  v2 = (_DWORD *)sub_10229D00(32);
  if ( !v2 )
    return (*(int (__thiscall **)(int *, _DWORD))(*this + 180))(this, 0);
  v3 = sub_1022B1A0(v2, (int)"ScrollBarSliderMoved", "position", this[61]);
  return (*(int (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v3);
}
