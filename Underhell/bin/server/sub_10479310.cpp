void __cdecl sub_10479310()
{
  int v0; // eax

  v0 = unk_106EE6FC;
  *(_DWORD *)byte_106EE6D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE6D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EE6FC = 0;
  }
  *(_DWORD *)byte_106EE6D8 = &ConCommandBase::`vftable';
}
