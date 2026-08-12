_DWORD *__stdcall sub_100B9150(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  if ( a2 )
  {
    result = a1;
    if ( dword_1040D3A8 )
      *a1 = dword_103E08BC;
    else
      *a1 = dword_103E08B8;
  }
  else
  {
    result = a1;
    *a1 = dword_103E08B0;
  }
  return result;
}
