void __cdecl sub_10479990()
{
  int v0; // eax

  v0 = unk_106F062C;
  *(_DWORD *)byte_106F0608 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0608[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F062C = 0;
  }
  *(_DWORD *)byte_106F0608 = &ConCommandBase::`vftable';
}
