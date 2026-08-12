void __cdecl sub_10477990()
{
  int v0; // eax

  v0 = unk_106E358C;
  *(_DWORD *)byte_106E3568 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3568[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E358C = 0;
  }
  *(_DWORD *)byte_106E3568 = &ConCommandBase::`vftable';
}
