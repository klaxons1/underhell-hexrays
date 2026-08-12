void *__thiscall sub_100A6040(void *this)
{
  void *result; // eax

  if ( !*(_DWORD *)this || (result = *(void **)(*(_DWORD *)this + 40)) == 0 )
  {
    if ( (dword_10694830 & 1) == 0 )
    {
      dword_10694830 |= 1u;
      flt_10694824 = 0.0;
      flt_10694828 = 0.0;
      flt_1069482C = 0.0;
    }
    return &unk_10694868;
  }
  return result;
}
