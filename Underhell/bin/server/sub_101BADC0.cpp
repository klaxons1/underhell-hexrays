void __usercall sub_101BADC0(int a1@<ecx>, int a2@<edi>)
{
  double v3; // st7

  v3 = *(float *)(dword_106B31C8 + 16) + *(float *)(a1 + 84);
  *(float *)(a1 + 84) = v3;
  if ( v3 > 0.050000001 )
  {
    sub_101BA9A0(a2, (_DWORD *)(a1 + 4));
    *(float *)(a1 + 84) = 0.0;
    sub_101BABD0((_DWORD *)(a1 + 24));
  }
}
