_DWORD *__thiscall sub_100C9EE0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  if ( this )
  {
    *this = 0;
    this[1] = 0;
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
  }
  result = &this[a2 >> 5];
  *result |= 1 << (a2 & 0x1F);
  return result;
}
