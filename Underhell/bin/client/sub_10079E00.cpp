_WORD *__thiscall sub_10079E00(_WORD *this, char a2)
{
  *(_DWORD *)this = &CClientThinkList::`vftable';
  sub_1011A810(this + 26);
  sub_1011A810(this + 16);
  sub_10079950(this + 2);
  if ( *((int *)this + 3) >= 0 )
  {
    if ( *((_DWORD *)this + 1) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 1));
      *((_DWORD *)this + 1) = 0;
    }
    *((_DWORD *)this + 2) = 0;
  }
  sub_100D3350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
