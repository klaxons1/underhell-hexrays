void *__cdecl sub_10034900(size_t Size)
{
  void *v1; // esi

  v1 = (void *)(*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 4))(g_pMemAlloc, Size);
  memset(v1, 0, Size);
  return v1;
}
