int __thiscall sub_1010B9B0(int this, int a2)
{
  int result; // eax

  result = a2;
  *(_BYTE *)(a2 + 12) = 0;
  *(float *)a2 = flt_10459240;
  *(_QWORD *)(a2 + 4) = qword_10459244;
  *(float *)(a2 + 1048) = 1.0;
  *(float *)(a2 + 1036) = 20.0;
  *(float *)(a2 + 1040) = 0.0;
  *(float *)(a2 + 1044) = 0.0;
  *(float *)(a2 + 1052) = *(float *)(this + 8);
  *(_DWORD *)(a2 + 1056) = *(_DWORD *)(this + 4);
  *(_BYTE *)(a2 + 1060) = 0;
  *(_BYTE *)(a2 + 524) = 0;
  *(_WORD *)(a2 + 1061) = 0;
  *(_DWORD *)(a2 + 1064) = 0;
  *(_BYTE *)(this + 12) = 0;
  return result;
}
