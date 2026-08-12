void __cdecl sub_10477330()
{
  int v0; // eax

  v0 = unk_106E08A4;
  *(_DWORD *)byte_106E0880 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0880[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E08A4 = 0;
  }
  *(_DWORD *)byte_106E0880 = &ConCommandBase::`vftable';
}
