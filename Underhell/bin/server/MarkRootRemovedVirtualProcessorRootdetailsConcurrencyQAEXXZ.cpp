void __thiscall Concurrency::details::VirtualProcessorRoot::MarkRootRemoved(
        Concurrency::details::VirtualProcessorRoot *this)
{
  *((_BYTE *)this + 68) = 1;
}
