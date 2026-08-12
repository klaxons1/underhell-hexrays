void __cdecl sub_10477A70()
{
  int v0; // eax

  v0 = unk_106E397C;
  *(_DWORD *)byte_106E3958 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3958[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E397C = 0;
  }
  *(_DWORD *)byte_106E3958 = &ConCommandBase::`vftable';
}
