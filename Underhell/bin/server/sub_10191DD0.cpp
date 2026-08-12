BOOL __thiscall sub_10191DD0(float *this, float *a2)
{
  return *this <= (double)*a2
      && this[3] >= (double)*a2
      && this[1] <= (double)a2[1]
      && this[4] >= (double)a2[1]
      && this[2] <= (double)a2[2]
      && this[5] >= (double)a2[2];
}
