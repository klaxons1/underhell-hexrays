int __stdcall sub_10237F30(int a1, int a2, int a3)
{
  float *v3; // ebx
  double v4; // st7
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  int result; // eax

  v3 = (float *)(*(int (__stdcall **)(int))(a3 + 20))(a1);
  v4 = sub_1022A940((_DWORD *)a3, (char *)*(_DWORD *)a3, 0.0);
  v5 = dword_1047CA7C;
  v6 = *(_DWORD *)dword_1047CA7C;
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 80))(a1, (int)v4);
  result = (*(int (__thiscall **)(int, int))(v6 + 52))(v5, v7);
  *v3 = (float)result;
  return result;
}
