int __thiscall sub_1027A020(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // ecx

  result = a2;
  if ( a2 >= 0 && a2 < this[56] )
  {
    v4 = *(_DWORD **)(this[53] + 36 * a2 + 8);
    v4[73] = a3;
    return (*(int (__thiscall **)(_DWORD *, int))(*v4 + 220))(v4, a3);
  }
  return result;
}
