int __stdcall sub_100F35C0(int a1, int a2, int a3)
{
  int result; // eax

  *(float *)a1 = flt_10459240;
  *(_QWORD *)(a1 + 4) = qword_10459244;
  *(float *)a2 = flt_10459240;
  *(_QWORD *)(a2 + 4) = qword_10459244;
  result = a3;
  *(float *)a3 = flt_10459240;
  *(_QWORD *)(a3 + 4) = qword_10459244;
  return result;
}
