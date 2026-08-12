void __cdecl sub_10477890()
{
  int v0; // eax

  v0 = unk_106E2F8C;
  *(_DWORD *)byte_106E2F68 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2F68[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2F8C = 0;
  }
  *(_DWORD *)byte_106E2F68 = &ConCommandBase::`vftable';
}
