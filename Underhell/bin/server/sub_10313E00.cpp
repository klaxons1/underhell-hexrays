int __userpurge sub_10313E00@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  if ( (*(_BYTE *)(a3 + 64) & 0x40) != 0 )
    return 0;
  else
    return sub_100C7DC0(a1, a2, (int *)a3);
}
