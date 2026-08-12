int __thiscall sub_101A83B0(int this)
{
  int result; // eax

  *(float *)(this + 3664) = flt_106F1CA8;
  *(float *)(this + 3668) = flt_106F1CAC;
  *(float *)(this + 3672) = flt_106F1CB0;
  if ( *(_DWORD *)(this + 3644) )
  {
    sub_10184660(*(_DWORD *)(this + 3644));
    *(_DWORD *)(this + 3644) = 0;
  }
  result = *(_DWORD *)(this + 3648);
  if ( result )
  {
    result = sub_10184660(*(_DWORD *)(this + 3648));
    *(_DWORD *)(this + 3648) = 0;
  }
  return result;
}
