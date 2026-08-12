void __cdecl sub_104777C0()
{
  int v0; // eax

  v0 = unk_106E2BBC;
  *(_DWORD *)byte_106E2B98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2B98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2BBC = 0;
  }
  *(_DWORD *)byte_106E2B98 = &ConCommandBase::`vftable';
}
