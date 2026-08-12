_DWORD *__thiscall sub_103434D0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  result = a2;
  v4 = this[146];
  *a2 = this[145];
  v5 = this[147];
  a2[1] = v4;
  a2[2] = v5;
  return result;
}
