int __thiscall sub_1010F0D0(int this)
{
  double v2; // st7
  int result; // eax
  float v4; // [esp+8h] [ebp-8h]

  sub_10027160((_DWORD *)this);
  v4 = *((float *)off_103DC81C + 4) * 5.0;
  v2 = *(float *)(this + 2728);
  result = sub_101F0510(*(float *)(this + 2728), *(float *)(this + 2732), v4);
  *(float *)(this + 2732) = v2;
  return result;
}
