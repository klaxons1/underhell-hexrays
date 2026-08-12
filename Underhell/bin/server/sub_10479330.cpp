void __cdecl sub_10479330()
{
  int v0; // eax

  v0 = unk_106EE78C;
  *(_DWORD *)byte_106EE768 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE768[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EE78C = 0;
  }
  *(_DWORD *)byte_106EE768 = &ConCommandBase::`vftable';
}
