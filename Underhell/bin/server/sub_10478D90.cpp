void __cdecl sub_10478D90()
{
  int v0; // eax

  v0 = unk_106EBF4C;
  *(_DWORD *)byte_106EBF28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EBF28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EBF4C = 0;
  }
  *(_DWORD *)byte_106EBF28 = &ConCommandBase::`vftable';
}
