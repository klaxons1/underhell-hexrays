int __thiscall sub_10170420(_DWORD *this)
{
  int result; // eax

  *this = &CTempEnts::`vftable';
  sub_10170290(this + 1);
  sub_100EC500((_WORD *)this + 26);
  sub_100EC500((_WORD *)this + 26);
  if ( (int)this[15] >= 0 )
  {
    if ( this[13] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[13]);
      this[13] = 0;
    }
    this[14] = 0;
  }
  result = sub_1022FD30(this + 1);
  *this = &ITempEnts::`vftable';
  return result;
}
