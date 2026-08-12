void __cdecl sub_1046E9E0()
{
  int v0; // eax

  v0 = unk_10690DA4;
  *(_DWORD *)byte_10690D80 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690D80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690DA4 = 0;
  }
  *(_DWORD *)byte_10690D80 = &ConCommandBase::`vftable';
}
