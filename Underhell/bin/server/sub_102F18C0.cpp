int __userpurge sub_102F18C0@<eax>(int *a1@<ecx>, int a2@<edi>, int *a3)
{
  int *v3; // esi
  int *v5; // [esp-4h] [ebp-58h]
  int v6[13]; // [esp+4h] [ebp-50h] BYREF
  float v7; // [esp+38h] [ebp-1Ch]

  v3 = a1;
  v5 = a3;
  if ( (a3[16] & 0x2000000) != 0 )
  {
    sub_1001E4E0(v6, (int)a3);
    v5 = v6;
    a1 = v3;
    v7 = v7 * 10.0;
  }
  return sub_1020FE70(a1, a2, (int)v5);
}
