void __cdecl sub_10476CC0()
{
  int v0; // eax

  v0 = unk_106DE6BC;
  *(_DWORD *)byte_106DE698 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE698[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE6BC = 0;
  }
  *(_DWORD *)byte_106DE698 = &ConCommandBase::`vftable';
}
