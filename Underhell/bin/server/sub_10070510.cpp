int __thiscall sub_10070510(int this, float a2)
{
  int result; // eax

  *(_DWORD *)(this + 860) = -1;
  result = dword_106B31C8;
  *(float *)(this + 864) = *(float *)(dword_106B31C8 + 12) + a2;
  return result;
}
