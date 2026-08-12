_DWORD *__thiscall sub_101E3920(int *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx

  v2 = (_DWORD *)this[1];
  if ( (v2[63] & 0x800) != 0 )
    sub_100DAE60(this[1]);
  result = a2;
  v4 = v2[177];
  *a2 = v2[176];
  v5 = v2[178];
  a2[1] = v4;
  a2[2] = v5;
  return result;
}
