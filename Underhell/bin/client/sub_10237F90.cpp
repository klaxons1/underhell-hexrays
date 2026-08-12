int __stdcall sub_10237F90(int a1, int a2)
{
  float *v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int result; // eax

  v2 = (float *)(*(int (__cdecl **)(int))(a2 + 20))(a1);
  v3 = atof((const char *)*(_DWORD *)(a2 + 12));
  v4 = dword_1047CA7C;
  v5 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 80))(a1, (int)v3);
  result = (*(int (__thiscall **)(int, int))(v5 + 52))(v4, v6);
  *v2 = (float)result;
  return result;
}
