void __cdecl sub_1046E820()
{
  int v0; // eax

  v0 = unk_106905C4;
  *(_DWORD *)byte_106905A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106905A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106905C4 = 0;
  }
  *(_DWORD *)byte_106905A0 = &ConCommandBase::`vftable';
}
