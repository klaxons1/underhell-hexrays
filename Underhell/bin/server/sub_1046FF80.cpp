void __cdecl sub_1046FF80()
{
  int v0; // eax

  v0 = unk_10698B94;
  *(_DWORD *)byte_10698B70 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698B70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10698B94 = 0;
  }
  *(_DWORD *)byte_10698B70 = &ConCommandBase::`vftable';
}
