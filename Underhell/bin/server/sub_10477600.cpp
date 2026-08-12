void __cdecl sub_10477600()
{
  int v0; // eax

  v0 = unk_106E23EC;
  *(_DWORD *)byte_106E23C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E23C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E23EC = 0;
  }
  *(_DWORD *)byte_106E23C8 = &ConCommandBase::`vftable';
}
