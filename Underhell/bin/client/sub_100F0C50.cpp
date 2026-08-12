int __userpurge sub_100F0C50@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, const char *a4)
{
  int v4; // ecx

  v4 = *(_DWORD *)(a1 + 144);
  if ( v4 )
    return sub_100F0950(v4, a2, a3, a4);
  else
    return 0;
}
