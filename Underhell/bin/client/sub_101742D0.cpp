int __cdecl sub_101742D0(int a1, int a2, float *a3, int a4, float a5, int a6)
{
  float v7; // [esp+20h] [ebp-18h]

  v7 = (double)a6 * 0.00392156862745098;
  ((void (__stdcall *)(float *, float *, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, float *))(*off_103E9C2C)[20])(
    a3,
    &flt_10459240,
    LODWORD(a5),
    a4,
    5,
    0,
    LODWORD(v7),
    0.0,
    256,
    &flt_10459240);
  return sub_10174130(a4, a3, a5, a6);
}
