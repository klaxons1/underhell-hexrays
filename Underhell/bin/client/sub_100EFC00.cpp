int __userpurge sub_100EFC00@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  if ( !a3 )
    return 0;
  sub_100EFAE0(a1, a2, a3, a3);
  return *(_DWORD *)(a3 + 24);
}
