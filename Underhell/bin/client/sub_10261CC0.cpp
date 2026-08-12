_BYTE *__thiscall sub_10261CC0(int *this, _BYTE *a2, _BYTE *a3)
{
  _BYTE *result; // eax

  result = a2;
  if ( (unsigned __int8)(*a3 + 1) >= this[1] )
    *a2 = -1;
  else
    *a2 = *a3 + 1;
  return result;
}
