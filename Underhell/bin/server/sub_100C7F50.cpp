_DWORD *__thiscall sub_100C7F50(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  result = a2;
  v4 = this[177];
  *a2 = this[176];
  v5 = this[178];
  a2[1] = v4;
  a2[2] = v5;
  return result;
}
