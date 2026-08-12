int __thiscall sub_10238EC0(_DWORD *this, char a2, float a3)
{
  int result; // eax

  *(_BYTE *)(this[9] + 64) = a2;
  result = this[9];
  *(float *)(result + 68) = a3;
  return result;
}
