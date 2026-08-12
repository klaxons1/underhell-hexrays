int __stdcall sub_100F3590(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx

  result = a1;
  v2 = qword_10459244;
  *(float *)a1 = flt_10459240;
  v3 = HIDWORD(qword_10459244);
  *(_DWORD *)(a1 + 4) = v2;
  *(_DWORD *)(a1 + 8) = v3;
  return result;
}
