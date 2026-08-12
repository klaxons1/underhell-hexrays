unsigned int __thiscall Concurrency::details::SchedulerBase::GetNumberOfActiveVirtualProcessors(
        Concurrency::details::SchedulerBase *this)
{
  return *((_DWORD *)this + 62);
}
