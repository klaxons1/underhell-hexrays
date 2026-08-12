void __usercall sub_1013CA20(int a1@<ecx>, int a2@<edi>)
{
  const char *v2; // eax

  if ( *(_DWORD *)(a1 + 816) )
  {
    v2 = *(const char **)(a1 + 816);
    if ( !v2 )
      v2 = String;
    *(_WORD *)(a1 + 820) = sub_100E8220(a2, v2);
  }
}
