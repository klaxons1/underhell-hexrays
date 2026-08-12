_DWORD *__thiscall sub_100F0EE0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  *((float *)this + 3) = *(float *)(a2 + 12);
  *((float *)this + 4) = *(float *)(a2 + 16);
  *((float *)this + 5) = *(float *)(a2 + 20);
  *((float *)this + 6) = *(float *)(a2 + 24);
  *((float *)this + 7) = *(float *)(a2 + 28);
  *((float *)this + 8) = *(float *)(a2 + 32);
  *((float *)this + 9) = *(float *)(a2 + 36);
  *((float *)this + 10) = *(float *)(a2 + 40);
  *((float *)this + 11) = *(float *)(a2 + 44);
  *((_BYTE *)this + 48) = *(_BYTE *)(a2 + 48);
  *((_BYTE *)this + 49) = *(_BYTE *)(a2 + 49);
  *((_BYTE *)this + 50) = *(_BYTE *)(a2 + 50);
  *((_BYTE *)this + 51) = *(_BYTE *)(a2 + 51);
  *((_BYTE *)this + 52) = *(_BYTE *)(a2 + 52);
  *((_BYTE *)this + 53) = *(_BYTE *)(a2 + 53);
  *((_BYTE *)this + 54) = *(_BYTE *)(a2 + 54);
  *((_BYTE *)this + 55) = *(_BYTE *)(a2 + 55);
  *((float *)this + 14) = *(float *)(a2 + 56);
  return result;
}
