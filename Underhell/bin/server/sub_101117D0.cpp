float *__thiscall sub_101117D0(int this, float *a2, float *a3)
{
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = (*(float *)(this + 20) - *(float *)(this + 8)) * *a2 + *(float *)(this + 8);
  v4[1] = (*(float *)(this + 24) - *(float *)(this + 12)) * a2[1] + *(float *)(this + 12);
  v4[2] = (*(float *)(this + 28) - *(float *)(this + 16)) * a2[2] + *(float *)(this + 16);
  sub_100E8D90((_BYTE *)this, v4, a3);
  return a3;
}
