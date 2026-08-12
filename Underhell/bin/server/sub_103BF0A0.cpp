int __thiscall sub_103BF0A0(int this, int a2)
{
  float v4; // [esp+0h] [ebp-Ch]

  *(_BYTE *)(this + 3631) = 0;
  *(_BYTE *)(this + 3628) = 0;
  sub_100285C0((_DWORD *)this, 0, 1);
  sub_100EC3F0((_DWORD *)this, (int)sub_103BEE80, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v4, 0);
}
