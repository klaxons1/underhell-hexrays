void __cdecl sub_10477F00()
{
  int v0; // eax

  v0 = unk_106E6264;
  *(_DWORD *)byte_106E6240 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6240[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6264 = 0;
  }
  *(_DWORD *)byte_106E6240 = &ConCommandBase::`vftable';
}
