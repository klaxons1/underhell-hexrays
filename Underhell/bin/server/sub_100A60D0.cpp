float *__thiscall sub_100A60D0(int this, float *a2)
{
  float *result; // eax

  result = a2;
  *(_BYTE *)(this + 48) = 1;
  *(float *)(this + 52) = *(float *)(this + 20) + *a2;
  *(float *)(this + 56) = *(float *)(this + 24) + a2[1];
  *(float *)(this + 60) = *(float *)(this + 28) + a2[2];
  return result;
}
