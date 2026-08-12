void __cdecl sub_10477610()
{
  int v0; // eax

  v0 = unk_106E2434;
  *(_DWORD *)byte_106E2410 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2410[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2434 = 0;
  }
  *(_DWORD *)byte_106E2410 = &ConCommandBase::`vftable';
}
