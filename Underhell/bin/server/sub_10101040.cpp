_BYTE *__thiscall sub_10101040(_BYTE *this, int a2)
{
  _BYTE *result; // eax

  result = this;
  *this = *(_BYTE *)a2;
  this[1] = *(_BYTE *)(a2 + 1);
  *((float *)this + 1) = *(float *)(a2 + 4);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((float *)this + 4) = *(float *)(a2 + 16);
  *((float *)this + 5) = *(float *)(a2 + 20);
  *((float *)this + 6) = *(float *)(a2 + 24);
  *((float *)this + 7) = *(float *)(a2 + 28);
  *((float *)this + 8) = *(float *)(a2 + 32);
  *((float *)this + 9) = *(float *)(a2 + 36);
  *((float *)this + 10) = *(float *)(a2 + 40);
  *((float *)this + 11) = *(float *)(a2 + 44);
  *((float *)this + 12) = *(float *)(a2 + 48);
  *((_DWORD *)this + 13) = *(_DWORD *)(a2 + 52);
  *((_DWORD *)this + 14) = *(_DWORD *)(a2 + 56);
  *((_DWORD *)this + 15) = *(_DWORD *)(a2 + 60);
  *((_DWORD *)this + 16) = *(_DWORD *)(a2 + 64);
  *((float *)this + 17) = *(float *)(a2 + 68);
  *((float *)this + 18) = *(float *)(a2 + 72);
  *((float *)this + 19) = *(float *)(a2 + 76);
  *((_DWORD *)this + 20) = *(_DWORD *)(a2 + 80);
  *((_DWORD *)this + 21) = *(_DWORD *)(a2 + 84);
  *((_DWORD *)this + 22) = *(_DWORD *)(a2 + 88);
  *((_DWORD *)this + 23) = *(_DWORD *)(a2 + 92);
  *((float *)this + 24) = *(float *)(a2 + 96);
  *((float *)this + 25) = *(float *)(a2 + 100);
  *((float *)this + 26) = *(float *)(a2 + 104);
  *((_DWORD *)this + 27) = *(_DWORD *)(a2 + 108);
  *((_DWORD *)this + 28) = *(_DWORD *)(a2 + 112);
  *((_DWORD *)this + 29) = *(_DWORD *)(a2 + 116);
  *((_DWORD *)this + 30) = *(_DWORD *)(a2 + 120);
  return result;
}
