_DWORD *__thiscall sub_1011DD50(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  this[3] = *(_DWORD *)(a2 + 12);
  *((float *)this + 4) = *(float *)(a2 + 36);
  *((float *)this + 5) = *(float *)(a2 + 40);
  *((float *)this + 6) = *(float *)(a2 + 44);
  *((float *)this + 7) = *(float *)(a2 + 48);
  *((float *)this + 8) = *(float *)(a2 + 52);
  *((float *)this + 9) = *(float *)(a2 + 56);
  *((float *)this + 10) = *(float *)(a2 + 60);
  *((float *)this + 11) = *(float *)(a2 + 64);
  *((float *)this + 12) = *(float *)(a2 + 68);
  *((float *)this + 13) = *(float *)(a2 + 72);
  *((float *)this + 14) = *(float *)(a2 + 76);
  *((float *)this + 15) = *(float *)(a2 + 80);
  *((float *)this + 16) = *(float *)(a2 + 88);
  return result;
}
