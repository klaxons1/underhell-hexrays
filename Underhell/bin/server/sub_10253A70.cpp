void __userpurge sub_10253A70(int a1@<ecx>, __int64 a2@<esi:edi>, int a3)
{
  __int64 v3; // [esp-8h] [ebp-10h]

  HIDWORD(a2) = a1;
  *(float *)(a1 + 108) = *(float *)(a1 + 856);
  HIDWORD(v3) = a1;
  LODWORD(v3) = a1;
  sub_1010DD80((_DWORD *)(a1 + 924), v3, 0.0);
  sub_102526E0(SHIDWORD(a2), a2);
}
