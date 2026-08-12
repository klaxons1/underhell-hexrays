void __cdecl sub_1046F9B0()
{
  int v0; // eax

  v0 = unk_106967AC;
  *(_DWORD *)byte_10696788 = &ConVar::`vftable';
  *(_DWORD *)&byte_10696788[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106967AC = 0;
  }
  *(_DWORD *)byte_10696788 = &ConCommandBase::`vftable';
}
