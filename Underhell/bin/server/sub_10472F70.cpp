void __cdecl sub_10472F70()
{
  int v0; // eax

  v0 = unk_106BA53C;
  *(_DWORD *)byte_106BA518 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA518[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA53C = 0;
  }
  *(_DWORD *)byte_106BA518 = &ConCommandBase::`vftable';
}
