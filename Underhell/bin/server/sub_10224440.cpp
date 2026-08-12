int __usercall sub_10224440@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // esi
  int result; // eax

  if ( !*(_BYTE *)(a1 + 1501) && *(_DWORD *)(a1 + 804) )
  {
    if ( *(_DWORD *)(a1 + 808) )
      sub_10223EB0(a2, *(_DWORD *)(a1 + 808));
    v3 = *(const char **)(a1 + 804);
    if ( !v3 )
      v3 = String;
    return sub_10223EB0(a2, (int)v3);
  }
  return result;
}
