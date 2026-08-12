int __thiscall sub_1025B580(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( sub_10258BC0(this, *(float *)(this + 1100)) <= 0 )
    return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 1100);
  return sub_100EC4A0((int *)this, v3, 0);
}
