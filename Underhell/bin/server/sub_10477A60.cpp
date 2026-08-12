void __cdecl sub_10477A60()
{
  int v0; // eax

  v0 = unk_106E3934;
  *(_DWORD *)byte_106E3910 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3910[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3934 = 0;
  }
  *(_DWORD *)byte_106E3910 = &ConCommandBase::`vftable';
}
