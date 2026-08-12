bool __thiscall sub_1011B2E0(float *this, float *a2)
{
  return *((_BYTE *)this + 16) && a2[1] * this[1] + *a2 * *this + a2[2] * this[2] - this[3] >= 0.0;
}
