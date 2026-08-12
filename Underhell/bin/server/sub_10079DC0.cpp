float *__thiscall sub_10079DC0(float *this, int a2)
{
  float *result; // eax

  result = this;
  *this = *(float *)a2;
  this[1] = *(float *)(a2 + 4);
  this[2] = *(float *)(a2 + 8);
  this[3] = *(float *)(a2 + 12);
  this[4] = *(float *)(a2 + 16);
  this[5] = *(float *)(a2 + 20);
  this[6] = *(float *)(a2 + 24);
  this[7] = *(float *)(a2 + 28);
  this[8] = *(float *)(a2 + 32);
  this[9] = *(float *)(a2 + 36);
  *((_BYTE *)this + 40) = *(_BYTE *)(a2 + 40);
  *((_BYTE *)this + 41) = *(_BYTE *)(a2 + 41);
  *((_BYTE *)this + 42) = *(_BYTE *)(a2 + 42);
  *((_BYTE *)this + 43) = *(_BYTE *)(a2 + 43);
  this[11] = *(float *)(a2 + 44);
  this[12] = *(float *)(a2 + 48);
  *((_WORD *)this + 26) = *(_WORD *)(a2 + 52);
  *((_BYTE *)this + 54) = *(_BYTE *)(a2 + 54);
  *((_BYTE *)this + 55) = *(_BYTE *)(a2 + 55);
  return result;
}
