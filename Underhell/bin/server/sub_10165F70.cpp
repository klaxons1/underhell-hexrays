int __userpurge sub_10165F70@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int *v3; // esi
  int v4; // edi
  int v6; // [esp-4h] [ebp-10h]

  v3 = a1 + 55;
  if ( (double)a1[55] <= *(float *)(a3 + 52) )
  {
    v6 = a2;
    v4 = (int)(*(float *)(a3 + 52) + 1000.0);
    if ( *v3 != v4 )
    {
      (*(void (__thiscall **)(int *, int *))(*a1 + 464))(a1, a1 + 55);
      *v3 = v4;
    }
    a2 = v6;
  }
  return sub_100C7DC0(a1, a2, (int *)a3);
}
