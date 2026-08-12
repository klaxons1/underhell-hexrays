void __cdecl sub_10474F40()
{
  int v0; // eax

  v0 = unk_106D08B4;
  *(_DWORD *)byte_106D0890 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0890[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D08B4 = 0;
  }
  *(_DWORD *)byte_106D0890 = &ConCommandBase::`vftable';
}
