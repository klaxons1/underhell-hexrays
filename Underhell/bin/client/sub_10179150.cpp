int __thiscall sub_10179150(int this, int a2, int a3)
{
  int result; // eax

  result = a2;
  *(float *)(this + 24) = 0.0;
  *(_DWORD *)(this + 12) = a2;
  *(_DWORD *)(this + 16) = a3;
  *(_BYTE *)(this + 20) = 1;
  return result;
}
