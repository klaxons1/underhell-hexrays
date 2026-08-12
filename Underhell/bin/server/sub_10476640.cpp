void __cdecl sub_10476640()
{
  int v0; // eax

  v0 = unk_106DB4F4;
  *(_DWORD *)byte_106DB4D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB4D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DB4F4 = 0;
  }
  *(_DWORD *)byte_106DB4D0 = &ConCommandBase::`vftable';
}
