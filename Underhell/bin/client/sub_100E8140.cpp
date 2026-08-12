int __thiscall sub_100E8140(_WORD *this)
{
  bool v2; // zf
  int v3; // eax
  int result; // eax

  v2 = this[39] == 0;
  *(_DWORD *)this = &CPanelMetaClassMgrImp::`vftable';
  if ( !v2 )
  {
    do
    {
      v3 = *((_DWORD *)this + 16);
      if ( *(_DWORD *)(v3 + 12) )
        sub_1022AF00(*(_DWORD *)(v3 + 12));
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(*((_DWORD *)this + 16) + 8));
      sub_100E77C0((int)(this + 30), 0);
      **((_WORD **)this + 16) = 0;
      *(_WORD *)(*((_DWORD *)this + 16) + 2) = this[40];
      --this[39];
      this[40] = 0;
    }
    while ( this[39] );
  }
  sub_100E7D10((_DWORD *)this + 15);
  sub_100E7BE0((int)(this + 30));
  sub_100E7CB0((_DWORD *)this + 8);
  sub_100E7B70((int)(this + 16));
  sub_100E7C50((_DWORD *)this + 1);
  result = sub_100E7B00((int)(this + 2));
  *(_DWORD *)this = &IPanelMetaClassMgr::`vftable';
  return result;
}
