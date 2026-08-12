_DWORD *__thiscall sub_1001FD50(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  *((float *)this + 3) = *(float *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  this[5] = *(_DWORD *)(a2 + 20);
  *((float *)this + 6) = *(float *)(a2 + 24);
  *((_WORD *)this + 14) = *(_WORD *)(a2 + 28);
  *((_BYTE *)this + 30) = *(_BYTE *)(a2 + 30);
  this[8] = *(_DWORD *)(a2 + 32);
  *((float *)this + 9) = *(float *)(a2 + 36);
  *((float *)this + 10) = *(float *)(a2 + 40);
  *((float *)this + 11) = *(float *)(a2 + 44);
  *((_BYTE *)this + 48) = *(_BYTE *)(a2 + 48);
  return result;
}
