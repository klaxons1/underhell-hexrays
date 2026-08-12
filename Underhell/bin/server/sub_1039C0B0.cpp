int __userpurge sub_1039C0B0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  double v3; // st7

  v3 = *(float *)(a3 + 52) / (double)*(int *)(a1 + 216);
  if ( v3 > 1.0 )
    v3 = 1.0;
  if ( v3 >= 0.2 )
    *(float *)(a1 + 3852) = *(float *)(dword_106B31C8 + 12);
  return sub_10331430((int *)a1, a2, *(float *)&a3);
}
