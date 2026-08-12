char __thiscall sub_10274F40(_DWORD *this, int a2, char a3)
{
  char result; // al
  int v4; // esi

  result = a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v4 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v4 + 4) != a2 || *(_DWORD *)(v4 + 8) == a2 )
    {
      result = a3;
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(12 * a2 + this[53]) + 252) + 968) = a3;
    }
  }
  return result;
}
