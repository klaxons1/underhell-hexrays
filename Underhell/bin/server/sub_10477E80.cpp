void __cdecl sub_10477E80()
{
  int v0; // eax

  v0 = unk_106E6024;
  *(_DWORD *)byte_106E6000 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6000[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6024 = 0;
  }
  *(_DWORD *)byte_106E6000 = &ConCommandBase::`vftable';
}
