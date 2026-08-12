int __stdcall sub_10229BC0(int a1, int a2, int a3, void *Src, size_t Size)
{
  int result; // eax

  if ( a1 )
    result = (*(int (__thiscall **)(int, void *, size_t, int))(*(_DWORD *)a1 + 4))(a1, Src, Size, a2);
  if ( a3 )
    return sub_1022ECB0(Src, Size);
  return result;
}
