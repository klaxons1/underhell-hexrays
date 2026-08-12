int __thiscall sub_10275230(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  this[72] = 0;
  this[75] = -1;
  v2 = (_DWORD *)sub_10229D00(32);
  if ( !v2 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 180))(this, 0);
  v3 = sub_10229D20(v2, (int)"TreeViewItemSelectionCleared");
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v3);
}
