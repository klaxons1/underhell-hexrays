int __userpurge sub_1012CF30@<eax>(int result@<eax>, int a2@<ecx>, int a3, int a4)
{
  int i; // edx
  int v5; // eax
  bool v6; // zf
  int v7; // esi

  for ( i = *(_DWORD *)(a2 + 20) - 1; i >= 0; --i )
  {
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(v5 + 8 * i) == a3;
    result = v5 + 8 * i;
    if ( v6 )
    {
      result = *(_DWORD *)(result + 4);
      if ( result == a4 )
      {
        v7 = *(_DWORD *)(a2 + 20);
        if ( v7 > 0 )
        {
          result = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(result + 8 * i) = *(_DWORD *)(result + 8 * v7 - 8);
          *(_DWORD *)(result + 8 * i + 4) = *(_DWORD *)(result + 8 * v7 - 4);
          --*(_DWORD *)(a2 + 20);
        }
      }
    }
  }
  return result;
}
