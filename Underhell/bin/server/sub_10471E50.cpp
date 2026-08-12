void __cdecl sub_10471E50()
{
  int v0; // eax

  v0 = unk_106B5D44;
  *(_DWORD *)byte_106B5D20 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B5D20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B5D44 = 0;
  }
  *(_DWORD *)byte_106B5D20 = &ConCommandBase::`vftable';
}
