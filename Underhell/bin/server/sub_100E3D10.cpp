int __stdcall sub_100E3D10(int *a1)
{
  int result; // eax

  result = *a1;
  *(_DWORD *)(*a1 + 12) = 0;
  return result;
}
