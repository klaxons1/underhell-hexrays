float *__cdecl sub_1025F470(float *a1)
{
  double v1; // st7
  int v2; // ecx
  double v3; // st7
  int v4; // ecx

  v1 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -1.0,
         1.0);
  v2 = dword_106B31E4;
  *a1 = v1;
  v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v2 + 4))(v2, -1.0, 1.0);
  v4 = dword_106B31E4;
  a1[1] = v3;
  a1[2] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v4 + 4))(v4, 0.0, 1.0);
  return a1;
}
