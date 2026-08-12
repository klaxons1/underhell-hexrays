void __cdecl sub_10477730()
{
  int v0; // eax

  v0 = unk_106E28A4;
  *(_DWORD *)byte_106E2880 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2880[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E28A4 = 0;
  }
  *(_DWORD *)byte_106E2880 = &ConCommandBase::`vftable';
}
