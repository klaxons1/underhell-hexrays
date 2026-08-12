void __cdecl sub_10479090()
{
  int v0; // eax

  v0 = unk_106ED20C;
  *(_DWORD *)byte_106ED1E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ED1E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106ED20C = 0;
  }
  *(_DWORD *)byte_106ED1E8 = &ConCommandBase::`vftable';
}
