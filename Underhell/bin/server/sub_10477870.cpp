void __cdecl sub_10477870()
{
  int v0; // eax

  v0 = unk_106E2EFC;
  *(_DWORD *)byte_106E2ED8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2ED8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2EFC = 0;
  }
  *(_DWORD *)byte_106E2ED8 = &ConCommandBase::`vftable';
}
