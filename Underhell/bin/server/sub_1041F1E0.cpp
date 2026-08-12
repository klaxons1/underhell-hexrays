_WORD *__thiscall sub_1041F1E0(int *this, _WORD *a2, _WORD *a3)
{
  _WORD *result; // eax

  result = a2;
  if ( (unsigned __int16)(*a3 + 1) >= this[1] )
    *a2 = -1;
  else
    *a2 = *a3 + 1;
  return result;
}
