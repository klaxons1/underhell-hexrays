void __thiscall Concurrency::details::ExecutionResource::MarkAsVirtualProcessorRoot(
        Concurrency::details::ExecutionResource *this,
        struct Concurrency::details::VirtualProcessorRoot *a2)
{
  *((_DWORD *)this + 7) = a2;
}
