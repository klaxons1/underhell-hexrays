int sub_100D3230()
{
  int result; // eax

  sub_100D3160((void (__thiscall *)(int))Concurrency::details::ExternalContextBase::SpinYield);
  result = dword_10431134;
  if ( dword_10431134 )
  {
    result = sub_10034930(dword_10431134);
    dword_10431134 = 0;
  }
  return result;
}
