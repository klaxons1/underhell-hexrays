int __userpurge sub_1021C000@<eax>(int a1@<ecx>, int a2@<edi>, _BYTE *a3)
{
  const char *v4; // eax
  int result; // eax
  int v6; // edi
  int *v7; // ecx

  v4 = (const char *)*sub_10162BE0(&a3, a3);
  *(_DWORD *)(a1 + 832) = v4;
  if ( !v4 )
    v4 = String;
  result = sub_100E8220(a2, v4);
  v6 = result;
  if ( *(_DWORD *)(a1 + 836) != result )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *(_DWORD *)(a1 + 836) = v6;
    }
    else
    {
      v7 = *(int **)(a1 + 24);
      if ( v7 )
        result = sub_100194B0(v7, 836);
      *(_DWORD *)(a1 + 836) = v6;
    }
  }
  return result;
}
