void __cdecl sub_10477EB0()
{
  int v0; // eax

  v0 = unk_106E60FC;
  *(_DWORD *)byte_106E60D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E60D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E60FC = 0;
  }
  *(_DWORD *)byte_106E60D8 = &ConCommandBase::`vftable';
}
