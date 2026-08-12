void __cdecl sub_1046F810()
{
  *(_DWORD *)byte_10696088 = &ConVar::`vftable';
  dword_106960A0 = &ConVar::`vftable';
  if ( dword_106960AC[0] )
  {
    sub_10184660(dword_106960AC[0]);
    dword_106960AC[0] = 0;
  }
  *(_DWORD *)byte_10696088 = &ConCommandBase::`vftable';
}
