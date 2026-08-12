void __cdecl sub_10477760()
{
  int v0; // eax

  v0 = unk_106E2A0C;
  *(_DWORD *)byte_106E29E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E29E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2A0C = 0;
  }
  *(_DWORD *)byte_106E29E8 = &ConCommandBase::`vftable';
}
