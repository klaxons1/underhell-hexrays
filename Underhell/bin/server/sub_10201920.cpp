void __usercall sub_10201920(int *a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  double v5; // st7
  float v6; // [esp+0h] [ebp-Ch]

  v3 = a1[77];
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (a1[77] & 0xFFF) + 1], v4[1] == v3 >> 12) && *v4 )
    v5 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  else
    v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  v6 = v5;
  sub_100EC4A0(a1, v6, 0);
  sub_102011F0((int)a1, a2, (int)a1);
}
