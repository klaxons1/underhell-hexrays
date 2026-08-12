void __cdecl sub_10479800()
{
  int v0; // eax

  v0 = unk_106EFDE4;
  *(_DWORD *)byte_106EFDC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFDC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFDE4 = 0;
  }
  *(_DWORD *)byte_106EFDC0 = &ConCommandBase::`vftable';
}
