int __userpurge sub_1012CF80@<eax>(int result@<eax>, int a2@<ecx>, int a3)
{
  int i; // edx
  int v4; // eax
  bool v5; // zf
  int v6; // esi

  for ( i = *(_DWORD *)(a2 + 20) - 1; i >= 0; --i )
  {
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_DWORD *)(v4 + 8 * i) == a3;
    result = v4 + 8 * i;
    if ( v5 || *(_DWORD *)(result + 4) == a3 )
    {
      v6 = *(_DWORD *)(a2 + 20);
      if ( v6 > 0 )
      {
        result = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(result + 8 * i) = *(_DWORD *)(result + 8 * v6 - 8);
        *(_DWORD *)(result + 8 * i + 4) = *(_DWORD *)(result + 8 * v6 - 4);
        --*(_DWORD *)(a2 + 20);
      }
    }
  }
  return result;
}
