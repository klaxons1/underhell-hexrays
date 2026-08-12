int __thiscall Concurrency::source_link_manager<Concurrency::multi_link_registry<Concurrency::ISource<enum Concurrency::agent_status>>>::set_bound(
        _DWORD *this,
        int a2)
{
  int result; // eax

  result = a2;
  this[15] = a2;
  return result;
}
