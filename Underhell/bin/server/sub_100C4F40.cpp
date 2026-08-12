_DWORD *__thiscall sub_100C4F40(_DWORD *this, int a2, char a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)a2;
  if ( a2 >= 0 && a2 < this[283] )
  {
    result = (_DWORD *)(this[280] + 76 * a2);
    if ( (*(_BYTE *)result & 1) != 0 )
    {
      if ( a3 )
        *result |= 8u;
      else
        *result &= ~8u;
    }
  }
  return result;
}
