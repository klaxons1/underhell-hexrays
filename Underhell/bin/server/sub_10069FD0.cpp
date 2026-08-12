int __stdcall sub_10069FD0(int a1)
{
  int v1; // esi

  v1 = sub_100D6340(820);
  if ( v1 )
  {
    sub_100E33C0(0);
    *(_DWORD *)v1 = &CAI_RadialLinkController::`vftable';
  }
  else
  {
    v1 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 108))(v1, a1);
  return v1 + 12;
}
