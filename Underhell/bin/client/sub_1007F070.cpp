int __thiscall sub_1007F070(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v5; // [esp+Ch] [ebp-4h]

  *this = (int)&CClientLeafSystem::`vftable';
  v5 = (int)(this + 1);
  this[1] = (int)&CClientLeafSystem::`vftable';
  this[2] = (int)&CClientLeafSystem::`vftable';
  v2 = (_DWORD *)sub_1001ACF0(this + 98);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_10034930((int)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  sub_1001ACF0(this + 98);
  sub_1011A810(this + 91);
  sub_1011A810(this + 86);
  sub_1007F000(this + 66);
  sub_1007EF90(this + 46);
  sub_1007EF90(this + 26);
  sub_1007E180(this + 17);
  if ( this[19] >= 0 )
  {
    if ( this[17] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[17]);
      this[17] = 0;
    }
    this[18] = 0;
  }
  sub_1007DA10(this + 8);
  if ( this[10] >= 0 )
  {
    if ( this[8] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[8]);
      this[8] = 0;
    }
    this[9] = 0;
  }
  sub_1011A810(this + 3);
  return sub_100D3350(v5);
}
