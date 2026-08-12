int __cdecl sub_101819B0(_DWORD *a1)
{
  int result; // eax

  if ( dword_104453A8 )
  {
    result = (int)a1;
    if ( *a1 == 2 )
      return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_104453A8 + 8))(a1[259], 0);
  }
  return result;
}
