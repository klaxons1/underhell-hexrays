int __usercall sub_102D20E0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int *v3; // ecx

  v3 = *(int **)(a1 + 1396);
  if ( v3 && *(float *)(a1 + 1400) < (double)*(float *)(dword_106B31C8 + 12) )
    sub_10137DF0(v3);
  return sub_102D1850((_DWORD *)a1, a2);
}
