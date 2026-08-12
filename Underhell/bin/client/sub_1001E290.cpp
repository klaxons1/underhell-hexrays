_WORD *__thiscall sub_1001E290(_WORD *this, char a2)
{
  *(_DWORD *)this = &CDataManager<CBoneCache,bonecacheparams_t,CBoneCache *,CThreadFastMutex>::`vftable';
  sub_1022D9A0();
  this[37] |= 1u;
  sub_1022D810(this);
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
