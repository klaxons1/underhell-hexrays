int __thiscall sub_10334A10(int this, int a2)
{
  int v2; // eax
  float v4; // [esp+0h] [ebp-8h]

  v2 = dword_106B31C8;
  *(float *)(this + 808) = *(float *)(dword_106B31C8 + 12);
  v4 = *(float *)(v2 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v4, 0);
}
