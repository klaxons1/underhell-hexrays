int __thiscall sub_10274840(_DWORD *this, int a2, _DWORD *a3)
{
  int result; // eax
  int v4; // esi

  result = a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v4 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v4 + 4) != a2 || *(_DWORD *)(v4 + 8) == a2 )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(12 * a2 + this[53]) + 216))(
               *(_DWORD *)(12 * a2 + this[53]),
               *a3);
  }
  return result;
}
