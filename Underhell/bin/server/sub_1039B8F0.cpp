void __thiscall sub_1039B8F0(int *this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *i; // edx
  unsigned __int16 v5; // ax
  int v6; // edi

  if ( *((_WORD *)this + 11) )
  {
    v3 = 0;
    for ( i = this + 8; a2[23] != *i; ++i )
    {
      if ( ++v3 >= 4 )
        return;
    }
    a2 = *(_DWORD **)(*(int (**)(void))(*a2 + 8))();
    v5 = sub_10399DF0((_WORD *)this + 2, (unsigned int *)&a2);
    v6 = v5;
    if ( v5 != 0xFFFF )
    {
      sub_10399E70(this + 1, v5);
      *(_WORD *)(this[1] + 8 * v6 + 6) = *((_WORD *)this + 10);
      *((_WORD *)this + 10) = v6;
    }
  }
}
