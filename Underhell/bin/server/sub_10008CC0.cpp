int sub_10008CC0()
{
  int v0; // eax
  int result; // eax

  sub_10244CD0(&unk_1069015C);
  v0 = dword_10690148;
  dword_10690154 = 0;
  if ( dword_10690150 >= 0 )
  {
    if ( dword_10690148 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10690148);
      v0 = 0;
      dword_10690148 = 0;
    }
    dword_1069014C = 0;
  }
  dword_10690158 = v0;
  result = sub_10008C10(&off_105FD4D0);
  ++dword_105FD4CC;
  return result;
}
