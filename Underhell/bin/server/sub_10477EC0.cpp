void __cdecl sub_10477EC0()
{
  int v0; // eax

  v0 = unk_106E6144;
  *(_DWORD *)byte_106E6120 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6120[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6144 = 0;
  }
  *(_DWORD *)byte_106E6120 = &ConCommandBase::`vftable';
}
