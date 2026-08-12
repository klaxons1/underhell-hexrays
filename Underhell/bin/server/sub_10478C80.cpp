void __cdecl sub_10478C80()
{
  int v0; // eax

  v0 = unk_106EB6D4;
  *(_DWORD *)byte_106EB6B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB6B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB6D4 = 0;
  }
  *(_DWORD *)byte_106EB6B0 = &ConCommandBase::`vftable';
}
