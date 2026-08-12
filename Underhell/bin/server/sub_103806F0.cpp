int __userpurge sub_103806F0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3640) )
  {
    sub_1037FC10(a1);
    *(float *)(a1 + 3636) = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_100457E0((_DWORD *)a1, 93);
  }
  return sub_10035940((int *)a1, a2, a3);
}
