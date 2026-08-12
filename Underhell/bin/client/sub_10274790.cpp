_DWORD *__thiscall sub_10274790(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // ecx

  result = (_DWORD *)a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v4 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v4 + 4) != a2 || *(_DWORD *)(v4 + 8) == a2 )
    {
      result = (_DWORD *)this[53];
      v5 = *(_DWORD **)(result[3 * a2] + 252);
      if ( v5 )
        return sub_10250C90(v5, a3);
    }
  }
  return result;
}
