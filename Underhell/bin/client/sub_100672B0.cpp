void __thiscall sub_100672B0(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  char v5; // al
  int v6; // eax
  _DWORD *v7; // eax

  v4 = 0;
  if ( this[311] )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131DC + 36))(dword_104131DC, this[302]);
    sub_1011BF50("%s : %8.2f:  clearing events\n", v5);
    if ( sub_1007A630(this[311]) > 0 )
    {
      do
      {
        v6 = sub_101E6500(v4);
        v7 = (_DWORD *)sub_10065E70(this, v6);
        if ( v7 )
          sub_1003FAC0(v7, a2, a3);
        ++v4;
      }
      while ( v4 < sub_1007A630(this[311]) );
    }
    this[315] = 0;
    if ( (int)this[314] >= 0 )
    {
      if ( this[312] )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[312]);
        this[312] = 0;
      }
      this[313] = 0;
    }
    this[316] = this[312];
  }
}
