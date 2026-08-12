void __usercall sub_101BB4B0(double a1@<st0>, int a2, int a3, int a4, int a5)
{
  sub_101BB3B0(
    &dword_106B9F38,
    a1,
    a2,
    a3,
    *(_DWORD *)(a4 + 4 * (a5 == 0)),
    1,
    (float *)(a4 + 12 * (a5 == 0) + 32),
    (float *)(a4 + 12 * (a5 == 0) + 80));
}
