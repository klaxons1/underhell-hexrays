void __cdecl sub_10472A60()
{
  int v0; // eax

  v0 = unk_106B917C;
  *(_DWORD *)byte_106B9158 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9158[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B917C = 0;
  }
  *(_DWORD *)byte_106B9158 = &ConCommandBase::`vftable';
}
