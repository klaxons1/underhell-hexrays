void __cdecl sub_10474EF0()
{
  int v0; // eax

  v0 = unk_106D074C;
  *(_DWORD *)byte_106D0728 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0728[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D074C = 0;
  }
  *(_DWORD *)byte_106D0728 = &ConCommandBase::`vftable';
}
