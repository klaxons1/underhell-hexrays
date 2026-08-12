void __cdecl sub_1046FF40()
{
  int v0; // eax

  v0 = unk_10698A64;
  *(_DWORD *)byte_10698A40 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698A40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10698A64 = 0;
  }
  *(_DWORD *)byte_10698A40 = &ConCommandBase::`vftable';
}
