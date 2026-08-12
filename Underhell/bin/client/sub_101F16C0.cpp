BOOL __cdecl sub_101F16C0(float *a1, float *a2, int a3)
{
  return sub_101EDDA0(a1, a2, a3) == 2
      || sub_101EDDA0(a1, a2, a3 + 20) == 2
      || sub_101EDDA0(a1, a2, a3 + 40) == 2
      || sub_101EDDA0(a1, a2, a3 + 60) == 2
      || sub_101EDDA0(a1, a2, a3 + 80) == 2
      || sub_101EDDA0(a1, a2, a3 + 100) == 2;
}
