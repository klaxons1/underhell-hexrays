int __thiscall sub_10242980(int this)
{
  int result; // eax
  float v3; // [esp+4h] [ebp-8h]

  v3 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 848)) * *(float *)(this + 808);
  sub_10242760(this, v3);
  result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  *(float *)(this + 848) = *(float *)(dword_106B31C8 + 12);
  return result;
}
