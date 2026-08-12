void __cdecl sub_10478670()
{
  int v0; // eax

  v0 = unk_106E953C;
  *(_DWORD *)byte_106E9518 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9518[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E953C = 0;
  }
  *(_DWORD *)byte_106E9518 = &ConCommandBase::`vftable';
}
