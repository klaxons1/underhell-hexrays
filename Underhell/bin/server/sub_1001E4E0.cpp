_DWORD *__thiscall sub_1001E4E0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *(_BYTE *)this = *(_BYTE *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  this[3] = *(_DWORD *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  this[5] = *(_DWORD *)(a2 + 20);
  this[6] = *(_DWORD *)(a2 + 24);
  this[7] = *(_DWORD *)(a2 + 28);
  this[8] = *(_DWORD *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  this[10] = *(_DWORD *)(a2 + 40);
  this[11] = *(_DWORD *)(a2 + 44);
  this[12] = *(_DWORD *)(a2 + 48);
  *((float *)this + 13) = *(float *)(a2 + 52);
  *((float *)this + 14) = *(float *)(a2 + 56);
  *((float *)this + 15) = *(float *)(a2 + 60);
  this[16] = *(_DWORD *)(a2 + 64);
  this[17] = *(_DWORD *)(a2 + 68);
  this[18] = *(_DWORD *)(a2 + 72);
  this[19] = *(_DWORD *)(a2 + 76);
  return result;
}
