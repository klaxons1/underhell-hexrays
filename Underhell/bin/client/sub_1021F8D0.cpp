int __stdcall sub_1021F8D0(int a1, int a2)
{
  int result; // eax

  result = a2;
  *(float *)a2 = 0.0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
