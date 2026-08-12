void __cdecl sub_1046EBA0()
{
  int v0; // eax

  v0 = unk_10691EE4;
  *(_DWORD *)byte_10691EC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10691EC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10691EE4 = 0;
  }
  *(_DWORD *)byte_10691EC0 = &ConCommandBase::`vftable';
}
