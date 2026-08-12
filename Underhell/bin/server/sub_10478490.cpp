void __cdecl sub_10478490()
{
  int v0; // eax

  v0 = unk_106E8CCC;
  *(_DWORD *)byte_106E8CA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8CA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8CCC = 0;
  }
  *(_DWORD *)byte_106E8CA8 = &ConCommandBase::`vftable';
}
