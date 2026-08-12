void __cdecl sub_10479B30()
{
  int v0; // eax

  v0 = unk_106F0A84;
  *(_DWORD *)byte_106F0A60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0A60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0A84 = 0;
  }
  *(_DWORD *)byte_106F0A60 = &ConCommandBase::`vftable';
}
