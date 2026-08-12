void __cdecl sub_104710D0()
{
  int v0; // eax

  v0 = unk_106B05AC;
  *(_DWORD *)byte_106B0588 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B0588[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B05AC = 0;
  }
  *(_DWORD *)byte_106B0588 = &ConCommandBase::`vftable';
}
