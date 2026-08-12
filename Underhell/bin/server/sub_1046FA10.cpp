void __cdecl sub_1046FA10()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10696898[4];
  *(_DWORD *)byte_10696878 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696878[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10696898[4] = 0;
  }
  *(_DWORD *)byte_10696878 = &ConCommandBase::`vftable';
}
