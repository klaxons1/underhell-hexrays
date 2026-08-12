void __cdecl sub_1046EA00()
{
  int v0; // eax

  v0 = unk_10690EFC;
  *(_DWORD *)byte_10690ED8 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690ED8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690EFC = 0;
  }
  *(_DWORD *)byte_10690ED8 = &ConCommandBase::`vftable';
}
