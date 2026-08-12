void __cdecl sub_10479AF0()
{
  int v0; // eax

  v0 = unk_106F0964;
  *(_DWORD *)byte_106F0940 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0940[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0964 = 0;
  }
  *(_DWORD *)byte_106F0940 = &ConCommandBase::`vftable';
}
