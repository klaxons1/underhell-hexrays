float *__thiscall sub_1009E3F0(int this, float *a2)
{
  float *v3; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = (float *)sub_10034A00((char *)this);
  v5[0] = *v3 + *(float *)(this + 1236);
  v5[1] = v3[1] + *(float *)(this + 1240);
  v5[2] = v3[2] + *(float *)(this + 1244);
  return sub_100382D0((_DWORD *)this, v5, a2);
}
