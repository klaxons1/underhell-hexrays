_DWORD *__thiscall sub_10077AB0(_DWORD *this, unsigned __int8 *a2)
{
  unsigned __int8 v3; // al
  _DWORD *result; // eax

  v3 = sub_10076510((int)this);
  *(_DWORD *)a2 = v3;
  if ( v3 == 0xFF )
    return 0;
  result = *(_DWORD **)(this[1] + 12 * v3 + 8);
  if ( *result == -1
    || off_1061BE18[4 * (*result & 0xFFF) + 2] != *result >> 12
    || !off_1061BE18[4 * (*result & 0xFFF) + 1] )
  {
    return (_DWORD *)sub_10077340(this, a2);
  }
  return result;
}
