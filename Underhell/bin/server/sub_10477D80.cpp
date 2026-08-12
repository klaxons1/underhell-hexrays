void __cdecl sub_10477D80()
{
  int v0; // eax

  v0 = unk_106E5BA4;
  *(_DWORD *)byte_106E5B80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5B80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5BA4 = 0;
  }
  *(_DWORD *)byte_106E5B80 = &ConCommandBase::`vftable';
}
