int __thiscall sub_1019BE10(int *this, float *a2, float *a3)
{
  float v4[6]; // [esp+0h] [ebp-18h] BYREF

  v4[0] = *a2;
  v4[1] = a2[1];
  v4[2] = a2[2];
  v4[3] = *a3;
  v4[4] = a3[1];
  v4[5] = a3[2];
  return sub_1019A680(this + 314, v4);
}
