int __thiscall sub_10408410(int this, float a2)
{
  int v3; // edx
  int result; // eax
  float v5; // [esp+0h] [ebp-Ch]

  *(float *)(this + 2140) = *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_104072B0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + a2;
  sub_100EC4A0((int *)this, v5, 0);
  result = sub_10408330(this, v3);
  *(_BYTE *)(this + 2144) = 1;
  return result;
}
