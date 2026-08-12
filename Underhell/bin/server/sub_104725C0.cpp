void __cdecl sub_104725C0()
{
  int v0; // eax

  v0 = unk_106B84BC;
  *(_DWORD *)byte_106B8498 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8498[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B84BC = 0;
  }
  *(_DWORD *)byte_106B8498 = &ConCommandBase::`vftable';
}
