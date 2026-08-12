void __cdecl sub_10472E00()
{
  int v0; // eax

  v0 = unk_106BA274;
  *(_DWORD *)byte_106BA250 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA250[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA274 = 0;
  }
  *(_DWORD *)byte_106BA250 = &ConCommandBase::`vftable';
}
