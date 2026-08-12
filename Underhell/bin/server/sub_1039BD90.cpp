int __usercall sub_1039BD90@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  double v4; // st7

  result = sub_1032F2D0(a1, a2);
  if ( result == 22 )
  {
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           1.0,
           3.0);
    result = 22;
    *(float *)(a1 + 2824) = v4 + *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
