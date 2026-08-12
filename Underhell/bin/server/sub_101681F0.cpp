_DWORD *__thiscall sub_101681F0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax
  int v6; // edx
  int v7; // ecx

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  result = a2;
  v6 = this[146];
  *a2 = this[145];
  v7 = this[147];
  a2[1] = v6;
  a2[2] = v7;
  return result;
}
