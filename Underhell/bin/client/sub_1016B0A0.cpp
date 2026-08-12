int __cdecl sub_1016B0A0(int a1, int a2, float *a3, int a4, float a5, float a6, int a7)
{
  int v7; // eax
  float v9; // [esp+24h] [ebp-18h]

  v9 = (double)a7 * 0.00392156862745098;
  v7 = ((int (__stdcall *)(float *, float *, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, float *))(*off_103E9C2C)[20])(
         a3,
         &flt_10459240,
         LODWORD(a6),
         a4,
         5,
         0,
         LODWORD(v9),
         LODWORD(a5),
         65792,
         &flt_10459240);
  if ( v7 )
    *(float *)(v7 + 2004) = 0.2;
  return sub_1016AED0(a4, a3, a5, a6, a7);
}
