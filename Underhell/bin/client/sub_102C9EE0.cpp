void __cdecl sub_102C9EE0()
{
  dword_10430F68[0] = &CLCD::`vftable';
  sub_100CF530(&dword_10430F68[53]);
  sub_100CF680(&dword_10430F68[44]);
  sub_100CF590(&dword_10430F68[44]);
  sub_100CE570(&dword_10430F68[34]);
  sub_100CE510(&dword_10430F68[34]);
  sub_10009F80(&dword_10430F68[25]);
  sub_10009F20(&dword_10430F68[25]);
  sub_10009F80(&dword_10430F68[16]);
  sub_10009F20(&dword_10430F68[16]);
  sub_1011A810(&dword_10430F68[8]);
  if ( (int)dword_10430F68[4] >= 0 )
  {
    if ( dword_10430F68[2] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10430F68[2]);
      dword_10430F68[2] = 0;
    }
    dword_10430F68[3] = 0;
  }
}
