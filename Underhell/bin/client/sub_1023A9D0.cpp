void __stdcall sub_1023A9D0(int a1, int a2)
{
  float *v2; // edi

  v2 = (float *)(*(int (__cdecl **)(int))(a2 + 20))(a1);
  *v2 = atof((const char *)*(_DWORD *)(a2 + 12));
}
