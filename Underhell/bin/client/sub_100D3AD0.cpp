float *__thiscall sub_100D3AD0(int this, int a2, float *a3)
{
  float *result; // eax

  *(_DWORD *)(this + 248) = a2;
  result = a3;
  *(float *)(this + 188) = *a3;
  *(float *)(this + 192) = a3[1];
  *(float *)(this + 196) = a3[2];
  return result;
}
