int __thiscall sub_1012F1D0(int this, float a2)
{
  sub_10242820(0, LODWORD(a2));
  sub_100EC3F0((_DWORD *)this, (int)sub_102429D0, 0.0, 0);
  *(float *)(this + 816) = *(float *)(dword_106B31C8 + 12) + a2;
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
