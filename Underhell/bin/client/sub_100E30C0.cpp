Concurrency::details::ExecutionResource *__cdecl sub_100E30C0(Concurrency::details::ExecutionResource *a1, char *Str)
{
  struct Concurrency::details::VirtualProcessorRoot *v2; // eax
  Concurrency::details::ExecutionResource *result; // eax
  Concurrency::details::ExecutionResource *i; // esi

  v2 = (struct Concurrency::details::VirtualProcessorRoot *)sub_1022A6A0(Str, 0);
  if ( v2 )
    Concurrency::details::ExecutionResource::MarkAsVirtualProcessorRoot(a1, v2);
  result = (Concurrency::details::ExecutionResource *)sub_10229C90(a1);
  for ( i = result; result; i = result )
  {
    if ( sub_10229C90(i) )
      sub_100E30C0(i, Str);
    result = (Concurrency::details::ExecutionResource *)sub_1021F0F0(i);
  }
  return result;
}
