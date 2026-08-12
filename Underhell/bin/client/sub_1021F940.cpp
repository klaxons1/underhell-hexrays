int __stdcall sub_1021F940(int a1, int a2)
{
  int result; // eax

  result = a2;
  *(float *)a2 = flt_10459240;
  *(_QWORD *)(a2 + 4) = qword_10459244;
  *(float *)(a2 + 12) = 0.0;
  return result;
}
