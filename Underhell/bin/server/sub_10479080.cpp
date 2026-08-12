void __cdecl sub_10479080()
{
  int v0; // eax

  v0 = unk_106ED1C4;
  *(_DWORD *)byte_106ED1A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ED1A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106ED1C4 = 0;
  }
  *(_DWORD *)byte_106ED1A0 = &ConCommandBase::`vftable';
}
