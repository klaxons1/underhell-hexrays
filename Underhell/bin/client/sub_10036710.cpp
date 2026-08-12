char __thiscall sub_10036710(_DWORD *this)
{
  int v2; // eax
  int v3; // esi

  LOBYTE(v2) = sub_1000E2D0((_BYTE *)this - 4);
  if ( (_BYTE)v2 )
  {
    v2 = this[43];
    if ( v2 != *((_DWORD *)off_103DC81C + 1) )
    {
      if ( sub_10229D00(32) )
        v3 = sub_10229D20("entity_state");
      else
        v3 = 0;
      (*(void (__thiscall **)(_DWORD *, int))(*(this - 1) + 348))(this - 1, v3);
      sub_101BC9C0(this[42], v3);
      (*(void (__thiscall **)(_DWORD *, int))(*(this - 1) + 352))(this - 1, v3);
      LOBYTE(v2) = sub_1022AF00(v3);
      this[43] = *((_DWORD *)off_103DC81C + 1);
    }
  }
  return v2;
}
