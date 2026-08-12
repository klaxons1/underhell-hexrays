void __thiscall sub_1026CA00(_DWORD *this, wint_t a2)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  wint_t v6; // bp
  wint_t C[256]; // [esp+8h] [ebp-200h] BYREF

  v3 = this[89];
  if ( v3 < 0 )
    v3 = 0;
  v4 = v3 + 1;
  if ( v3 + 1 >= this[64] )
    v4 = 0;
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(this[58] + 12 * v4);
      (*(void (__thiscall **)(int, wint_t *, int))(*(_DWORD *)v5 + 776))(v5, C, 254);
      v6 = towlower(C[0]);
      if ( v6 == towlower(a2) )
        break;
      if ( ++v4 >= this[64] )
        v4 = 0;
      if ( v4 == v3 )
        goto LABEL_12;
    }
    v3 = v4;
  }
LABEL_12:
  if ( v3 >= 0 )
  {
    sub_1026C340((int)this, v3);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
}
