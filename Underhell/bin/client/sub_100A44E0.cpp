float *__thiscall sub_100A44E0(float *this, int a2)
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
  this[10] = *(float *)(a2 + 40);
  this[11] = *(float *)(a2 + 44);
  this[12] = *(float *)(a2 + 48);
  this[13] = *(float *)(a2 + 52);
  this[14] = *(float *)(a2 + 56);
  this[15] = *(float *)(a2 + 60);
  *((_BYTE *)this + 64) = *(_BYTE *)(a2 + 64);
  *((_BYTE *)this + 65) = *(_BYTE *)(a2 + 65);
  return result;
}
