int __stdcall sub_102044C0(int a1, int a2)
{
  int result; // eax

  result = a2;
  *(_DWORD *)a2 = *(_DWORD *)(a2 + 4);
  *(float *)(a2 + 8) = *(float *)(a1 + 36);
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
