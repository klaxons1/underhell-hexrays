int __thiscall sub_100B0F40(int this, int a2, float a3)
{
  int result; // eax

  result = a2;
  *(float *)(this + 80) = a3;
  *(_DWORD *)(this + 84) = a2;
  return result;
}
