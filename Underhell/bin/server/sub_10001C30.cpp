int __thiscall sub_10001C30(Concurrency::details::ContextBase *this)
{
  sub_1008D640(833);
  sub_100BC460("prop_combine_ball");
  Concurrency::details::ContextBase::SetExecutingCollection(
    this,
    (struct Concurrency::details::_TaskCollectionBase *)"npc_combine_s");
  *((_DWORD *)this + 6) = 1;
  return sub_100BC470("episodic");
}
