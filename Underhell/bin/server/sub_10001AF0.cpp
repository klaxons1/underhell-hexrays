int __thiscall sub_10001AF0(Concurrency::details::ContextBase *this)
{
  sub_1008D640(577);
  sub_100BC460("npc_grenade_frag");
  Concurrency::details::ContextBase::SetExecutingCollection(
    this,
    (struct Concurrency::details::_TaskCollectionBase *)"npc_combine_s");
  *((_DWORD *)this + 6) = 1;
  return sub_100BC470("ep2");
}
