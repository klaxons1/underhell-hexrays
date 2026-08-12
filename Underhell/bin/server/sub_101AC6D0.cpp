int __stdcall sub_101AC6D0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax

  result = a6;
  *(float *)(a6 + 44) = 1.0;
  *(_BYTE *)(a6 + 55) = 0;
  return result;
}
