void __cdecl sub_10478B40()
{
  int v0; // eax

  v0 = unk_106EB134;
  *(_DWORD *)byte_106EB110 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB110[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB134 = 0;
  }
  *(_DWORD *)byte_106EB110 = &ConCommandBase::`vftable';
}
