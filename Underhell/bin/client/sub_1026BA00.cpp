int __thiscall sub_1026BA00(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi

  result = a2;
  if ( a2 >= 0 && a2 < this[59] && a2 <= this[65] )
  {
    v4 = 12 * a2 + this[58];
    if ( *(_DWORD *)(v4 + 4) != a2 || *(_DWORD *)(v4 + 8) == a2 )
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(12 * a2 + this[58]) + 124))(
               *(_DWORD *)(12 * a2 + this[58]),
               a3);
  }
  return result;
}
