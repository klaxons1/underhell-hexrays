int __userpurge sub_10411D00@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  if ( (*(_BYTE *)(a3 + 64) & 0x40) != 0 )
    return sub_10035940(a1, a2, a3);
  else
    return 0;
}
