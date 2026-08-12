_DWORD *__thiscall sub_1003ED10(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  *((_BYTE *)this + 12) = *(_BYTE *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  this[5] = *(_DWORD *)(a2 + 20);
  this[6] = *(_DWORD *)(a2 + 24);
  *((_BYTE *)this + 28) = *(_BYTE *)(a2 + 28);
  *((float *)this + 8) = *(float *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  *((_BYTE *)this + 40) = *(_BYTE *)(a2 + 40);
  *((_BYTE *)this + 41) = *(_BYTE *)(a2 + 41);
  *((float *)this + 11) = *(float *)(a2 + 44);
  *((float *)this + 12) = *(float *)(a2 + 48);
  *((float *)this + 13) = *(float *)(a2 + 52);
  this[14] = *(_DWORD *)(a2 + 56);
  *((float *)this + 15) = *(float *)(a2 + 60);
  *((_BYTE *)this + 64) = *(_BYTE *)(a2 + 64);
  return result;
}
