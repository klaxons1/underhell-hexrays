int __cdecl sub_1016B400(int a1, int *a2)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 312) == -1
      || off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != *(_DWORD *)(a1 + 312) >> 12 )
    {
      sub_1016B320(0, a2);
      return a2[3];
    }
    else
    {
      sub_1016B320(off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1], a2);
      return a2[3];
    }
  }
  return result;
}
