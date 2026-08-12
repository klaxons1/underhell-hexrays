int __stdcall sub_1000E3C0(int a1, int a2, int a3, int (__thiscall *a4)(int))
{
  int i; // edi
  int result; // eax

  for ( i = a3 - 1; i >= 0; --i )
  {
    result = a4(a1);
    a1 += a2;
  }
  return result;
}
