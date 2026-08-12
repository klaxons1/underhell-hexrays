int __usercall sub_101CA110@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  unsigned int v3; // eax
  int v4; // ecx
  double v5; // st7
  float v7; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(a1 + 828) )
  {
    sub_101CA000(a1, a2, a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 812);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 1];
    if ( *(float *)(v4 + 448) < 3.4028235e38 )
      *(float *)(v4 + 448) = 3.4028235e38;
  }
  v5 = *(float *)(a1 + 820) + *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 824) = v5;
  v7 = v5;
  return sub_100EC4A0((int *)a1, v7, 0);
}
