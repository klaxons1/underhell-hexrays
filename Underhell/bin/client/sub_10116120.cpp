int __cdecl sub_10116120(int a1, int a2, int *a3)
{
  int result; // eax

  if ( *(_DWORD *)(a1 + 4) == 0x1FFFFF )
  {
    result = (int)a3;
    *a3 = -1;
  }
  else
  {
    result = *(_DWORD *)(a1 + 4) & 0x7FF;
    *a3 = result | (*(int *)(a1 + 4) >> 11 << 12);
  }
  return result;
}
