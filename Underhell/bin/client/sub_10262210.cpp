int __thiscall sub_10262210(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi

  result = a2;
  if ( a2 >= 0 && a2 < this[73] && a2 <= this[79] )
  {
    v4 = 12 * a2 + this[72];
    if ( *(_DWORD *)(v4 + 4) != a2 || *(_DWORD *)(v4 + 8) == a2 )
    {
      result = this[72];
      *(_DWORD *)(*(_DWORD *)(12 * a2 + result) + 4) = a3;
    }
  }
  return result;
}
