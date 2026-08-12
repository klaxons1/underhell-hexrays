int __cdecl sub_102346A0(int a1, int a2, unsigned __int8 *a3, int *a4)
{
  int result; // eax

  result = a3[3];
  *a4 = result | ((a3[2] | ((a3[1] | (*a3 << 8)) << 8)) << 8);
  return result;
}
