int __thiscall sub_1013EAF0(int this, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 1;
    result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    *(_BYTE *)(this + 801) = 0;
    *(float *)(this + 816) = 0.0;
  }
  return result;
}
