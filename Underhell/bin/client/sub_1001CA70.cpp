float *__thiscall sub_1001CA70(int this, int a2, float *a3, float *a4)
{
  float *result; // eax

  *(_DWORD *)(this + 212) = a2;
  *(float *)(this + 216) = *a3;
  *(float *)(this + 220) = a3[1];
  result = a4;
  *(float *)(this + 224) = a3[2];
  *(float *)(this + 228) = *a4;
  *(float *)(this + 232) = a4[1];
  *(float *)(this + 236) = a4[2];
  return result;
}
