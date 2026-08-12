void __cdecl sub_10478D80()
{
  int v0; // eax

  v0 = unk_106EBF04;
  *(_DWORD *)byte_106EBEE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EBEE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EBF04 = 0;
  }
  *(_DWORD *)byte_106EBEE0 = &ConCommandBase::`vftable';
}
