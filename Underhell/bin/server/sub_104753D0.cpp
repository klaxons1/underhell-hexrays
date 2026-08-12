void __cdecl sub_104753D0()
{
  int v0; // eax

  v0 = unk_106D1D14;
  *(_DWORD *)byte_106D1CF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1CF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1D14 = 0;
  }
  *(_DWORD *)byte_106D1CF0 = &ConCommandBase::`vftable';
}
