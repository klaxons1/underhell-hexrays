int __thiscall sub_1000A5F0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  bool v5; // zf

  if ( a2 == -1 )
    return 0;
  v4 = (_DWORD *)sub_101AB1E0();
  v5 = sub_100082F0(v4, a2) == -2;
  result = 999;
  if ( !v5 )
    return this[a2 + 756];
  return result;
}
