void __cdecl sub_10474990()
{
  int v0; // eax

  v0 = unk_106CE68C;
  *(_DWORD *)byte_106CE668 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CE668[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CE68C = 0;
  }
  *(_DWORD *)byte_106CE668 = &ConCommandBase::`vftable';
}
