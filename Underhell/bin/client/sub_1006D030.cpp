int __cdecl sub_1006D030(int a1, int a2, int a3)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(*(_DWORD *)(a3 + 1192) + 4 * *(_DWORD *)(a1 + 20)) = result;
  return result;
}
