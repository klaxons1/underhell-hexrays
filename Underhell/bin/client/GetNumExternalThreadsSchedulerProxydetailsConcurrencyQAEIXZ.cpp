unsigned int __thiscall Concurrency::details::SchedulerProxy::GetNumExternalThreads(
        Concurrency::details::SchedulerProxy *this)
{
  return *((_DWORD *)this + 45);
}
