int __stdcall sub_100F3B70(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  int result; // eax

  v3 = (_DWORD *)sub_100422D0();
  if ( v3 )
    return sub_10013260(v3, a1, a2, a3);
  *(float *)a1 = flt_10459240;
  *(_QWORD *)(a1 + 4) = qword_10459244;
  *(float *)a2 = flt_10459240;
  *(_QWORD *)(a2 + 4) = qword_10459244;
  result = a3;
  *(float *)a3 = flt_10459240;
  *(_QWORD *)(a3 + 4) = qword_10459244;
  return result;
}
