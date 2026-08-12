_DWORD *__thiscall sub_1001C990(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  this[3] = *(_DWORD *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  *((float *)this + 5) = *(float *)(a2 + 20);
  *((float *)this + 6) = *(float *)(a2 + 24);
  *((float *)this + 7) = *(float *)(a2 + 28);
  *((float *)this + 8) = *(float *)(a2 + 32);
  *((float *)this + 9) = *(float *)(a2 + 36);
  *((float *)this + 10) = *(float *)(a2 + 40);
  this[11] = *(_DWORD *)(a2 + 44);
  this[12] = *(_DWORD *)(a2 + 48);
  this[13] = *(_DWORD *)(a2 + 52);
  this[14] = *(_DWORD *)(a2 + 56);
  *((float *)this + 15) = *(float *)(a2 + 60);
  *((float *)this + 16) = *(float *)(a2 + 64);
  *((float *)this + 17) = *(float *)(a2 + 68);
  *((float *)this + 18) = *(float *)(a2 + 72);
  *((float *)this + 19) = *(float *)(a2 + 76);
  *((float *)this + 20) = *(float *)(a2 + 80);
  *((float *)this + 21) = *(float *)(a2 + 84);
  *((float *)this + 22) = *(float *)(a2 + 88);
  *((float *)this + 23) = *(float *)(a2 + 92);
  *((float *)this + 24) = *(float *)(a2 + 96);
  *((float *)this + 25) = *(float *)(a2 + 100);
  this[26] = *(_DWORD *)(a2 + 104);
  *((float *)this + 27) = *(float *)(a2 + 108);
  *((float *)this + 28) = *(float *)(a2 + 112);
  *((float *)this + 29) = *(float *)(a2 + 116);
  *((float *)this + 30) = *(float *)(a2 + 120);
  *((float *)this + 31) = *(float *)(a2 + 124);
  *((float *)this + 32) = *(float *)(a2 + 128);
  return result;
}
