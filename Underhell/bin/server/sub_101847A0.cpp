int __thiscall sub_101847A0(int this)
{
  int result; // eax
  bool v3; // cl
  float v4; // [esp+0h] [ebp-Ch]

  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  result = sub_100EC4A0((int *)this, v4, 0);
  v3 = (*(_BYTE *)(this + 248) & 1) == 0;
  *(_WORD *)(this + 808) = 0;
  *(_BYTE *)(this + 810) = v3;
  return result;
}
