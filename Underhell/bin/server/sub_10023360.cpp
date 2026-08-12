_DWORD *__thiscall sub_10023360(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *(_BYTE *)this = *(_BYTE *)a2;
  *this = *(_DWORD *)a2;
  *this = *(_DWORD *)a2;
  *(float *)this = *(float *)a2;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  *this = *(_DWORD *)a2;
  this[3] = *(_DWORD *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  return result;
}
