_DWORD *__thiscall sub_100748E0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  this[3] = *(_DWORD *)(a2 + 12);
  *((_BYTE *)this + 16) = *(_BYTE *)(a2 + 16);
  *((float *)this + 5) = *(float *)(a2 + 20);
  *((float *)this + 6) = *(float *)(a2 + 24);
  *((float *)this + 7) = *(float *)(a2 + 28);
  *((float *)this + 8) = *(float *)(a2 + 32);
  *((float *)this + 9) = *(float *)(a2 + 36);
  *((float *)this + 10) = *(float *)(a2 + 40);
  *((float *)this + 11) = *(float *)(a2 + 44);
  *((float *)this + 12) = *(float *)(a2 + 48);
  *((float *)this + 13) = *(float *)(a2 + 52);
  *((float *)this + 14) = *(float *)(a2 + 56);
  *((float *)this + 15) = *(float *)(a2 + 60);
  *((float *)this + 16) = *(float *)(a2 + 64);
  *((float *)this + 17) = *(float *)(a2 + 68);
  *((float *)this + 18) = *(float *)(a2 + 72);
  *((float *)this + 19) = *(float *)(a2 + 76);
  *((float *)this + 20) = *(float *)(a2 + 80);
  *((_BYTE *)this + 84) = *(_BYTE *)(a2 + 84);
  *((float *)this + 22) = *(float *)(a2 + 88);
  *((_BYTE *)this + 92) = *(_BYTE *)(a2 + 92);
  *((float *)this + 24) = *(float *)(a2 + 96);
  *((float *)this + 25) = *(float *)(a2 + 100);
  *((float *)this + 26) = *(float *)(a2 + 104);
  *((float *)this + 27) = *(float *)(a2 + 108);
  *((_BYTE *)this + 112) = *(_BYTE *)(a2 + 112);
  *((_BYTE *)this + 113) = *(_BYTE *)(a2 + 113);
  return result;
}
