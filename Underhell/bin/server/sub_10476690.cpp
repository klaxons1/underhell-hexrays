void __cdecl sub_10476690()
{
  int v0; // eax

  v0 = unk_106DB6A4;
  *(_DWORD *)byte_106DB680 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB680[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DB6A4 = 0;
  }
  *(_DWORD *)byte_106DB680 = &ConCommandBase::`vftable';
}
