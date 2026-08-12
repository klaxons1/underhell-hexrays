void __cdecl sub_10474E40()
{
  int v0; // eax

  v0 = unk_106D0444;
  *(_DWORD *)byte_106D0420 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0420[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0444 = 0;
  }
  *(_DWORD *)byte_106D0420 = &ConCommandBase::`vftable';
}
