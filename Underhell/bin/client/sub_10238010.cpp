int __stdcall sub_10238010(int a1, _DWORD *a2, int a3)
{
  int *v3; // edi
  int result; // eax

  v3 = (int *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  result = sub_1022A800(a2, *(char **)a3, 0);
  *v3 = result;
  return result;
}
