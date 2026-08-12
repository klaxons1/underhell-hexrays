void __cdecl sub_10476EC0()
{
  int v0; // eax

  v0 = unk_106DED74;
  *(_DWORD *)byte_106DED50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DED50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DED74 = 0;
  }
  *(_DWORD *)byte_106DED50 = &ConCommandBase::`vftable';
}
