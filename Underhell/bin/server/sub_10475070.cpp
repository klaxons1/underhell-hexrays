void __cdecl sub_10475070()
{
  int v0; // eax

  v0 = unk_106D0E3C;
  *(_DWORD *)byte_106D0E18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0E18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0E3C = 0;
  }
  *(_DWORD *)byte_106D0E18 = &ConCommandBase::`vftable';
}
