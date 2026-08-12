struct Concurrency::IExecutionContext *__thiscall Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(
        Concurrency::details::UMSThreadVirtualProcessor *this)
{
  return (struct Concurrency::IExecutionContext *)*((_DWORD *)this + 53);
}
