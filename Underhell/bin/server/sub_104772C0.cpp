void __cdecl sub_104772C0()
{
  int v0; // eax

  v0 = unk_106E06AC;
  *(_DWORD *)byte_106E0688 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0688[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E06AC = 0;
  }
  *(_DWORD *)byte_106E0688 = &ConCommandBase::`vftable';
}
