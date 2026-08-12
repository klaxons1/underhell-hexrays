void __cdecl sub_10478030()
{
  int v0; // eax

  v0 = unk_106E68FC;
  *(_DWORD *)byte_106E68D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E68D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E68FC = 0;
  }
  *(_DWORD *)byte_106E68D8 = &ConCommandBase::`vftable';
}
