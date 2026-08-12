void __thiscall sub_1036ADB0(float *this, float *a2)
{
  float v2[3]; // [esp+0h] [ebp-Ch] BYREF

  v2[0] = this[179] + *a2;
  v2[1] = this[180] + a2[1];
  v2[2] = this[181] + a2[2];
  sub_1025F370(this, v2, 0);
}
