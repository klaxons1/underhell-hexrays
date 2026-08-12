void __cdecl sub_104752E0()
{
  int v0; // eax

  v0 = unk_106D1904;
  *(_DWORD *)byte_106D18E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D18E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1904 = 0;
  }
  *(_DWORD *)byte_106D18E0 = &ConCommandBase::`vftable';
}
