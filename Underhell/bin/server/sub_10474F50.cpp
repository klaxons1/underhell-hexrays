void __cdecl sub_10474F50()
{
  int v0; // eax

  v0 = unk_106D08FC;
  *(_DWORD *)byte_106D08D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D08D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D08FC = 0;
  }
  *(_DWORD *)byte_106D08D8 = &ConCommandBase::`vftable';
}
