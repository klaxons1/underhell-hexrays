int __stdcall sub_10238040(int a1, int a2)
{
  int *v2; // edi
  int result; // eax

  v2 = (int *)(*(int (__cdecl **)(int))(a2 + 20))(a1);
  result = atoi(*(const char **)(a2 + 12));
  *v2 = result;
  return result;
}
