void __cdecl sub_1046EC00()
{
  int v0; // eax

  v0 = unk_10691FFC;
  *(_DWORD *)byte_10691FD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_10691FD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10691FFC = 0;
  }
  *(_DWORD *)byte_10691FD8 = &ConCommandBase::`vftable';
}
