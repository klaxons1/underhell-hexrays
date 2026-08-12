void __cdecl sub_104772E0()
{
  int v0; // eax

  v0 = unk_106E073C;
  *(_DWORD *)byte_106E0718 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0718[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E073C = 0;
  }
  *(_DWORD *)byte_106E0718 = &ConCommandBase::`vftable';
}
