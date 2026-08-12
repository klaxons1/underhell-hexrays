void __cdecl sub_102CDDF0()
{
  sub_100EC500(&dword_1044CB3C);
  if ( dword_1044CB44 >= 0 )
  {
    if ( dword_1044CB3C )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1044CB3C);
      dword_1044CB3C = 0;
    }
    dword_1044CB40 = 0;
  }
  sub_100D3350(dword_1044CB30);
}
