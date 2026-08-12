void __cdecl sub_10478450()
{
  int v0; // eax

  v0 = unk_106E8BAC;
  *(_DWORD *)byte_106E8B88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8B88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8BAC = 0;
  }
  *(_DWORD *)byte_106E8B88 = &ConCommandBase::`vftable';
}
