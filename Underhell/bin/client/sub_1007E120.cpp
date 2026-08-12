int __thiscall sub_1007E120(_DWORD *this, __int16 a2)
{
  int v2; // edx
  int result; // eax
  _WORD *v4; // esi

  v2 = this[94];
  result = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    result = -1;
  }
  else
  {
    v4 = (_WORD *)this[91];
    while ( *v4 != a2 )
    {
      ++result;
      ++v4;
      if ( result >= v2 )
        goto LABEL_5;
    }
  }
  if ( v2 > 0 )
    *(_WORD *)(this[91] + 2 * result) = *(_WORD *)(this[91] + 2 * this[94]-- - 2);
  return result;
}
