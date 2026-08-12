_DWORD *__thiscall sub_1012CBE0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *result; // eax
  int i; // esi

  result = (_DWORD *)(*(_DWORD *)(a2 + 252) >> 6);
  if ( (*(_DWORD *)(a2 + 252) & 0x40) != 0 )
  {
    for ( i = 0; i < this[5]; ++i )
    {
      result = (_DWORD *)(this[2] + 8 * i);
      if ( result[1] == a2 )
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)*result + 420))(
                             *result,
                             a2,
                             a3,
                             a4);
    }
  }
  return result;
}
