int __thiscall sub_1026B870(_DWORD *this, int a2, _WORD *a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  int result; // eax

  if ( a2 >= 0 && a2 < this[59] && a2 <= this[65] )
  {
    v4 = 12 * a2 + this[58];
    if ( *(_DWORD *)(v4 + 4) != a2 || *(_DWORD *)(v4 + 8) == a2 )
    {
      v5 = *(_DWORD *)(12 * a2 + this[58]);
      if ( v5 )
        return (*(int (__thiscall **)(int, _WORD *, int))(*(_DWORD *)v5 + 776))(v5, a3, a4);
    }
  }
  result = (int)a3;
  *a3 = 0;
  return result;
}
