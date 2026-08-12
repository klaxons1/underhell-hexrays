_WORD *__thiscall sub_10100F80(_WORD *this, char a2)
{
  *(_DWORD *)this = &CDataManager<CBoneCache,bonecacheparams_t,CBoneCache *,CThreadFastMutex>::`vftable';
  sub_10431810();
  this[37] |= 1u;
  sub_10431680(this);
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
