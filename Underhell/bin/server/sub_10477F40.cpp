void __cdecl sub_10477F40()
{
  int v0; // eax

  v0 = unk_106E6384;
  *(_DWORD *)byte_106E6360 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6360[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6384 = 0;
  }
  *(_DWORD *)byte_106E6360 = &ConCommandBase::`vftable';
}
