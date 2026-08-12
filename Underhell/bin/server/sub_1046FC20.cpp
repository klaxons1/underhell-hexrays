void __cdecl sub_1046FC20()
{
  int v0; // eax

  v0 = unk_106973A4;
  *(_DWORD *)byte_10697380 = &ConVar::`vftable';
  *(_DWORD *)&byte_10697380[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106973A4 = 0;
  }
  *(_DWORD *)byte_10697380 = &ConCommandBase::`vftable';
}
