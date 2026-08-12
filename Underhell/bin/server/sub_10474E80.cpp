void __cdecl sub_10474E80()
{
  int v0; // eax

  v0 = unk_106D0594;
  *(_DWORD *)byte_106D0570 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0570[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0594 = 0;
  }
  *(_DWORD *)byte_106D0570 = &ConCommandBase::`vftable';
}
