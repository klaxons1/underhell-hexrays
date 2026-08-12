int __thiscall sub_102D5D00(int this, float a2, float a3)
{
  int v3; // eax

  v3 = dword_106B31C8;
  *(float *)(this + 2120) = a2 + *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 2124) = a3 + *(float *)(v3 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_102D5AE0, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
