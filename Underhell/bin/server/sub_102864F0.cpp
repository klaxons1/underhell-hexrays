int __usercall sub_102864F0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int result; // eax
  int v5; // edi
  int *v6; // ecx

  v3 = *(const char **)(a1 + 904);
  if ( !v3 )
    v3 = String;
  result = sub_100E8220(a2, v3);
  v5 = result;
  if ( *(_DWORD *)(a1 + 908) != result )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *(_DWORD *)(a1 + 908) = v5;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        result = sub_100194B0(v6, 908);
      *(_DWORD *)(a1 + 908) = v5;
    }
  }
  return result;
}
