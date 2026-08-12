int __stdcall sub_1011B730(int *a1)
{
  int result; // eax

  result = *a1;
  *(_DWORD *)(*a1 + 12) = 0;
  return result;
}
