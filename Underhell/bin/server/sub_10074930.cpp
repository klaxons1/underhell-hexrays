double __thiscall sub_10074930(_DWORD *this)
{
  double result; // st7

  if ( !this[1] )
    return -1.0;
  result = ((double (__thiscall *)(_DWORD))**(_DWORD **)this[1])(this[1]);
  if ( -1.0 == result )
    return -1.0;
  return result;
}
