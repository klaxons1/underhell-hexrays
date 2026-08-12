float *__thiscall sub_101E24D0(int this, float *a2)
{
  float *result; // eax

  result = a2;
  *(_BYTE *)(this + 4212) = 1;
  *(float *)(this + 4200) = *a2;
  *(float *)(this + 4204) = a2[1];
  *(float *)(this + 4208) = a2[2];
  return result;
}
