int __cdecl sub_10038830(int a1)
{
  int result; // eax

  result = dword_1043079C;
  if ( !*(_DWORD *)(dword_1043079C + 48) )
  {
    result = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_WORD *)(a1 + 28) = 0;
  }
  return result;
}
