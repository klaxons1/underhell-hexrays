int __thiscall sub_1005EBA0(_DWORD *this)
{
  int v2; // eax

  sub_1005E4B0(this);
  if ( this[688] )
  {
    v2 = sub_101218C0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 40))(v2, this[688]);
    this[688] = 0;
  }
  return sub_1003BCD0(this);
}
