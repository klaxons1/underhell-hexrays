int __cdecl sub_10036D40(int a1, int a2)
{
  int result; // eax

  result = a2;
  *(_BYTE *)(a2 + 316) = *(_BYTE *)(a1 + 4);
  *(_BYTE *)(a2 + 317) = 0;
  return result;
}
