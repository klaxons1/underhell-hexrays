double __thiscall sub_102F7FE0(_DWORD **this)
{
  double result; // st7

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[542])(this) )
    return 10.0;
  result = ((double (__thiscall *)(_DWORD *, _DWORD *))*(_DWORD *)(*this[651] + 56))(this[651], this[593]);
  if ( -1.0 == result )
    sub_10381D50(this);
  return result;
}
