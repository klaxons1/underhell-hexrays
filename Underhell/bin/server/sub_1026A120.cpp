unsigned int __thiscall sub_1026A120(int this, float a2)
{
  unsigned int result; // eax

  result = *(_DWORD *)(this + 52) & 0xFFFFF9FF | 0x200;
  *(float *)(this + 60) = -a2;
  *(_DWORD *)(this + 52) = result;
  return result;
}
