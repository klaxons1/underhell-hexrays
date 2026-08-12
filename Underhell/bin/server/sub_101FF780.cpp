int __thiscall sub_101FF780(int this)
{
  int result; // eax
  float v3; // [esp+0h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 820) )
  {
    sub_101FF290(this);
    sub_101FF140((_DWORD *)this, *(float *)(this + 832));
    *(_BYTE *)(this + 820) = 1;
    v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
    return sub_100EC4A0((int *)this, v3, 0);
  }
  return result;
}
