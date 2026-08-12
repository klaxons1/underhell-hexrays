int __thiscall sub_100255E0(float *this, int a2, float a3)
{
  int v3; // eax
  float v5; // edx

  v3 = dword_10403664;
  v5 = *this;
  this[475] = -3.4028235e38;
  *((_DWORD *)this + 316) = v3 - 1;
  (*(void (__stdcall **)(_DWORD))(LODWORD(v5) + 380))(LODWORD(a3));
  return (*(int (__stdcall **)(int, int, int, _DWORD))(*((_DWORD *)this + 1) + 64))(a2, 128, 524032, LODWORD(a3));
}
