void __cdecl sub_10476A00()
{
  int v0; // eax

  v0 = unk_106DD83C;
  *(_DWORD *)byte_106DD818 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DD818[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DD83C = 0;
  }
  *(_DWORD *)byte_106DD818 = &ConCommandBase::`vftable';
}
