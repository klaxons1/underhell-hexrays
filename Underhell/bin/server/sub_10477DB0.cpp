void __cdecl sub_10477DB0()
{
  int v0; // eax

  v0 = unk_106E5C7C;
  *(_DWORD *)byte_106E5C58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5C58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5C7C = 0;
  }
  *(_DWORD *)byte_106E5C58 = &ConCommandBase::`vftable';
}
