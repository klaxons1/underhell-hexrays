int __thiscall sub_10153B90(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v4; // [esp+8h] [ebp-4h] BYREF

  *this = &CClient_Precipitation::`vftable';
  this[1] = &CClient_Precipitation::`vftable';
  this[2] = &CClient_Precipitation::`vftable';
  this[3] = &CClient_Precipitation::`vftable';
  v4 = this;
  sub_1012D820(&dword_1043CCCC, &v4);
  if ( dword_1043CCC8 )
  {
    (**(void (__thiscall ***)(int, int))dword_1043CCC8)(dword_1043CCC8, 1);
    dword_1043CCC8 = 0;
  }
  v2 = this[323];
  if ( v2 )
    sub_100F2FF0(v2);
  sub_1011A810(this + 318);
  sub_101520B0((_WORD *)this + 622);
  if ( (int)this[313] >= 0 )
  {
    if ( this[311] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[311]);
      this[311] = 0;
    }
    this[312] = 0;
  }
  return sub_1003D350((int)this);
}
