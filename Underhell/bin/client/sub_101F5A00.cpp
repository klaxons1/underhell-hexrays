int __thiscall sub_101F5A00(float *this)
{
  float v3[12]; // [esp+4h] [ebp-60h] BYREF
  float v4[12]; // [esp+34h] [ebp-30h] BYREF

  sub_101EE350(v3);
  sub_101EDA20(this + 255, 3, (int)v3);
  sub_101EDC00(this + 81, v3, v4);
  sub_101ED7B0(v4, this + 75);
  return sub_101EDA00((int)v4, 3, this + 72);
}
