int sub_10151270()
{
  double v0; // st7
  int v1; // edx
  int result; // eax
  float v3; // [esp+10h] [ebp-10h] BYREF
  float v4; // [esp+14h] [ebp-Ch]
  float v5; // [esp+18h] [ebp-8h]
  float v6; // [esp+1Ch] [ebp-4h]

  v0 = *(float *)(dword_1043CCFC + 44);
  v3 = 0.0;
  v5 = 0.0;
  v4 = v0;
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
         dword_10413198,
         -10.0,
         10.0)
     + v4;
  v1 = *(_DWORD *)dword_10413198;
  v6 = *(float *)(dword_1043CD44 + 44);
  v6 = (((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v1 + 4))(dword_10413198, -0.2, 0.2) + 1.0) * v6;
  result = sub_101EDFB0(&v3, &flt_1043D718);
  flt_1043D718 = flt_1043D718 * v6;
  flt_1043D71C = flt_1043D71C * v6;
  flt_1043D720 = v6 * flt_1043D720;
  return result;
}
