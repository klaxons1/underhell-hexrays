int __stdcall sub_10123380(int a1, float a2)
{
  int result; // eax

  result = a1;
  *(float *)(a1 + 104) = a2;
  return result;
}
