void __cdecl sub_10477860()
{
  int v0; // eax

  v0 = unk_106E2EB4;
  *(_DWORD *)byte_106E2E90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2E90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2EB4 = 0;
  }
  *(_DWORD *)byte_106E2E90 = &ConCommandBase::`vftable';
}
