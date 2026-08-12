void __thiscall sub_10023F60(_DWORD *this, int a2, int a3)
{
  int i; // ebx
  int v5; // esi
  int v6; // eax

  for ( i = 0; i < a3; ++i )
  {
    v5 = *(_DWORD *)(a2 + 4 * i);
    if ( v5 >= 1000000000 )
    {
      v6 = *(_DWORD *)(a2 + 4 * i);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      v6 = sub_1007DB30(v5);
    }
    if ( v6 != -1 && v6 != 999999999 )
      this[((v6 - 1000000000) >> 5) + 572] |= 1 << (v6 & 0x1F);
  }
}
