void __cdecl sub_10477820()
{
  int v0; // eax

  v0 = unk_106E2D6C;
  *(_DWORD *)byte_106E2D48 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2D48[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2D6C = 0;
  }
  *(_DWORD *)byte_106E2D48 = &ConCommandBase::`vftable';
}
