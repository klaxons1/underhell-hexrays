int sub_1009CC00()
{
  int result; // eax

  result = sub_101267F0(&unk_1042D614);
  dword_1042D60C = 0;
  if ( dword_1042D608 < 0 )
  {
    ++dword_103DFF08;
    dword_1042D610 = dword_1042D600;
  }
  else
  {
    result = dword_1042D600;
    if ( dword_1042D600 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1042D600);
      result = 0;
      dword_1042D600 = 0;
    }
    ++dword_103DFF08;
    dword_1042D604 = 0;
    dword_1042D610 = result;
  }
  return result;
}
