void __cdecl sub_10471A20()
{
  dword_106B4ADC = (int)&CUserCmd::`vftable';
  sub_102375F0(dword_106B4B1C);
  if ( dword_106B4AA4 >= 0 )
  {
    if ( dword_106B4A9C )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106B4A9C);
      dword_106B4A9C = 0;
    }
    dword_106B4AA0 = 0;
  }
  sub_10170190(byte_106B4118);
}
