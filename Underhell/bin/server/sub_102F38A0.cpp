int __thiscall sub_102F38A0(_DWORD *this)
{
  int v2; // eax

  if ( sub_10023D10(this, 50) )
  {
    v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 1460))(this, 8);
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 16) & 8) != 0 && *(_DWORD *)(v2 + 32) == 9 )
        (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
          this,
          "TLK_DANGER_ZOMBINE_GRENADE",
          0,
          0,
          0,
          0);
    }
  }
  return sub_10397C50(this);
}
