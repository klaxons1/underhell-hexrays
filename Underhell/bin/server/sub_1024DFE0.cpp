void __usercall sub_1024DFE0(int a1@<ecx>, float a2@<ebx>, int a3@<edi>)
{
  float v4; // [esp+0h] [ebp-8h]

  sub_1024DE60((float *)a1, a2, a3);
  v4 = *(float *)(a1 + 108);
  *(_DWORD *)(a1 + 800) = 3;
  *(_DWORD *)(a1 + 4) = sub_1024DA30;
  sub_10246AC0((float *)a1, (float *)(a1 + 828), v4);
}
