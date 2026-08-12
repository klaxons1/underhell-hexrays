void __cdecl sub_10479B00()
{
  int v0; // eax

  v0 = unk_106F09AC;
  *(_DWORD *)byte_106F0988 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0988[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F09AC = 0;
  }
  *(_DWORD *)byte_106F0988 = &ConCommandBase::`vftable';
}
