int __thiscall sub_10274F90(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // ecx

  result = a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v3 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v3 + 4) != a2 || *(_DWORD *)(v3 + 8) == a2 )
    {
      result = this[53];
      v4 = *(_DWORD *)(*(_DWORD *)(12 * a2 + result) + 252);
      if ( *(_BYTE *)(v4 + 968) )
      {
        if ( !*(_BYTE *)(v4 + 948) )
          return sub_102739B0(v4);
      }
    }
  }
  return result;
}
