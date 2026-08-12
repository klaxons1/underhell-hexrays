int __thiscall sub_101243F0(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  float v7; // [esp+0h] [ebp-Ch]

  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  result = sub_100EC4A0((int *)this, v7, 0);
  *(float *)(this + 1000) = *(float *)(dword_106B31C8 + 12);
  return result;
}
