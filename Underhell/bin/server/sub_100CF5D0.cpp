int __thiscall sub_100CF5D0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  bool v5; // zf

  if ( a2 == -1 )
    return 0;
  v4 = (_DWORD *)sub_102D9B20();
  v5 = sub_100BA1B0(v4, a2) == -2;
  result = 999;
  if ( !v5 )
    return this[a2 + 445];
  return result;
}
