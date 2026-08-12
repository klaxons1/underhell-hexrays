void __cdecl sub_102CB480()
{
  sub_100CF530(&dword_10436CD0[47]);
  if ( (int)dword_10436CD0[13] >= 0 )
  {
    if ( dword_10436CD0[11] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10436CD0[11]);
      dword_10436CD0[11] = 0;
    }
    dword_10436CD0[12] = 0;
  }
  if ( (int)dword_10436CD0[9] >= 0 )
  {
    if ( dword_10436CD0[7] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10436CD0[7]);
      dword_10436CD0[7] = 0;
    }
    dword_10436CD0[8] = 0;
  }
  sub_1011A810(&dword_10436CD0[2]);
}
