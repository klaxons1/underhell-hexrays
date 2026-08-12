void __cdecl sub_10476E30()
{
  int v0; // eax

  v0 = unk_106DEAEC;
  *(_DWORD *)byte_106DEAC8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEAC8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEAEC = 0;
  }
  *(_DWORD *)byte_106DEAC8 = &ConCommandBase::`vftable';
}
