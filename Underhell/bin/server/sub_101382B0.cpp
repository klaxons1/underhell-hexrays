int __userpurge sub_101382B0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 192) >> 5;
  if ( (*(_DWORD *)(a1 + 192) & 0x20) != 0 )
    return sub_10138220(a1, a2);
  return result;
}
