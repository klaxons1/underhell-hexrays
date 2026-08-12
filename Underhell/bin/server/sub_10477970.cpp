void __cdecl sub_10477970()
{
  int v0; // eax

  v0 = unk_106E34FC;
  *(_DWORD *)byte_106E34D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E34D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E34FC = 0;
  }
  *(_DWORD *)byte_106E34D8 = &ConCommandBase::`vftable';
}
