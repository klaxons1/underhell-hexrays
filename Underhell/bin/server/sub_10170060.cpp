int sub_10170060()
{
  int result; // eax

  sub_1016FF90((void (__thiscall *)(int))Concurrency::details::ExternalContextBase::SpinYield);
  result = dword_106B5980;
  if ( dword_106B5980 )
  {
    result = sub_10184660(dword_106B5980);
    dword_106B5980 = 0;
  }
  return result;
}
