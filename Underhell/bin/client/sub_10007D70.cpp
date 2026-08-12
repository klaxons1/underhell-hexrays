int sub_10007D70()
{
  int v0; // eax
  int result; // eax

  sub_101267F0(&unk_10400F7C);
  v0 = dword_10400F68;
  dword_10400F74 = 0;
  if ( dword_10400F70 >= 0 )
  {
    if ( dword_10400F68 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10400F68);
      v0 = 0;
      dword_10400F68 = 0;
    }
    dword_10400F6C = 0;
  }
  dword_10400F78 = v0;
  result = sub_10007D20(off_103D627C);
  ++dword_103D6278;
  return result;
}
