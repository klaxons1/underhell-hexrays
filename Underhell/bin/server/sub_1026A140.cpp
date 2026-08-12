unsigned int __thiscall sub_1026A140(int this, float a2)
{
  unsigned int v2; // eax
  unsigned int result; // eax

  v2 = *(_DWORD *)(this + 52) & 0xFFFFFDFF;
  *(float *)(this + 60) = a2;
  result = v2 | 0x400;
  *(_DWORD *)(this + 52) = result;
  return result;
}
