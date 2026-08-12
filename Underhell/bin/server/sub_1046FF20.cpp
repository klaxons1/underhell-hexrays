void __cdecl sub_1046FF20()
{
  int v0; // eax

  v0 = unk_106985D4;
  *(_DWORD *)byte_106985B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106985B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106985D4 = 0;
  }
  *(_DWORD *)byte_106985B0 = &ConCommandBase::`vftable';
}
