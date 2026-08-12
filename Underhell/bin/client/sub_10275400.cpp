int __thiscall sub_10275400(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi

  result = a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v3 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v3 + 4) != a2 || *(_DWORD *)(v3 + 8) == a2 )
      return sub_102751E0(*(_DWORD *)(12 * a2 + this[53]));
  }
  return result;
}
