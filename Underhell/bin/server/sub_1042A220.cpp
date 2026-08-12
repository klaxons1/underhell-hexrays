int __stdcall sub_1042A220(int a1, int a2, int a3, void *Src, size_t Size)
{
  int result; // eax

  if ( a1 )
    result = (*(int (__thiscall **)(int, void *, size_t, int))(*(_DWORD *)a1 + 4))(a1, Src, Size, a2);
  if ( a3 )
    return sub_1042DD00(Src, Size);
  return result;
}
