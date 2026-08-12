int __thiscall sub_10262480(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int result; // eax

  v2 = this[100];
  this[100] = 0;
  if ( v2 > 0 )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
      v4 = sub_10229D20(v3, (int)"ItemDeselected");
    else
      v4 = 0;
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v4);
  }
  result = -1;
  this[93] = -1;
  this[102] = -1;
  return result;
}
