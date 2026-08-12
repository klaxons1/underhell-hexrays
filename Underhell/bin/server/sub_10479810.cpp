void __cdecl sub_10479810()
{
  int v0; // eax

  v0 = unk_106EFE2C;
  *(_DWORD *)byte_106EFE08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFE08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFE2C = 0;
  }
  *(_DWORD *)byte_106EFE08 = &ConCommandBase::`vftable';
}
