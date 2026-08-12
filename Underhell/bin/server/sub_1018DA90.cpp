int __usercall sub_1018DA90@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int result; // eax
  int v4; // esi
  int v5; // esi

  result = dword_106B83DC;
  if ( !*(_DWORD *)(dword_106B83DC + 48) )
  {
    v4 = *(_DWORD *)(a1 + 96);
    if ( v4 != -1 )
    {
      result = *(_DWORD *)(a1 + 84);
      do
      {
        v5 = 12 * v4;
        sub_1018D720(a2, *(_DWORD *)(v5 + result));
        result = *(_DWORD *)(a1 + 84);
        v4 = *(_DWORD *)(v5 + result + 8);
      }
      while ( v4 != -1 );
    }
  }
  return result;
}
