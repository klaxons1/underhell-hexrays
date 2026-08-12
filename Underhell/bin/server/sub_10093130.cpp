void __thiscall sub_10093130(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax

  if ( a2 == 50 )
    (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
      this,
      "TLK_HIDEANDRELOAD",
      0,
      0,
      0,
      0);
  v3 = this[906];
  if ( v3 )
  {
    if ( a2 >= 1000000000 || a2 == -1 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
      v5 = sub_1007DAF0((_DWORD *)(v4 + 4), a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 96))(v3, v5);
    }
    else
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 96))(v3, a2);
    }
  }
}
