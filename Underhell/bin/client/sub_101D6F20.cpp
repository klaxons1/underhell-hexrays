char __stdcall sub_101D6F20(int a1, int a2)
{
  int i; // edx
  BOOL v3; // eax
  char v4; // cl
  char result; // al

  for ( i = 0; i < 16; *(_BYTE *)(i + a1 - 1) = result | (16 * result) )
  {
    v3 = i >= 8;
    v4 = 4 * (i++ & 7);
    result = (*(_DWORD *)(a2 + 4 * v3) >> v4) & 0xF;
  }
  return result;
}
