int __cdecl sub_10115FD0(int a1, int a2, _BYTE *a3)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4);
  *a3 = HIBYTE(result);
  a3[1] = BYTE2(result);
  a3[2] = BYTE1(result);
  a3[3] = result;
  return result;
}
