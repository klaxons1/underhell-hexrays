void __usercall sub_10250240(int a1@<ecx>, float a2@<ebx>, int a3@<edi>)
{
  float v4; // [esp+0h] [ebp-8h]
  float v5; // [esp+0h] [ebp-8h]

  sub_1024DE60((float *)a1, a2, a3);
  v4 = *(float *)(a1 + 108);
  *(_DWORD *)(a1 + 800) = 2;
  *(_DWORD *)(a1 + 4) = sub_1024DA20;
  sub_10246AC0((float *)a1, (float *)(a1 + 816), v4);
  if ( *(float *)(a1 + 572) < 0.0 )
  {
    sub_1024EAD0((float *)a1, (float *)(a1 + 944), -1.0);
  }
  else
  {
    v5 = *(float *)(a1 + 572) - *(float *)(a1 + 564);
    sub_1024EAD0((float *)a1, (float *)(a1 + 944), v5);
  }
}
