void __cdecl sub_10474D60()
{
  int v0; // eax

  v0 = unk_106D00A4;
  *(_DWORD *)byte_106D0080 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0080[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D00A4 = 0;
  }
  *(_DWORD *)byte_106D0080 = &ConCommandBase::`vftable';
}
