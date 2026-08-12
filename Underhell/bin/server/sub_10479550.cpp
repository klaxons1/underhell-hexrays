void __cdecl sub_10479550()
{
  int v0; // eax

  v0 = unk_106EF294;
  *(_DWORD *)byte_106EF270 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EF270[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EF294 = 0;
  }
  *(_DWORD *)byte_106EF270 = &ConCommandBase::`vftable';
}
