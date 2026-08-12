int __thiscall sub_101488E0(_DWORD *this)
{
  int result; // eax
  char *v3; // eax

  result = this[215];
  if ( result )
  {
    result = sub_104291C0(result, "None", 4);
    if ( result )
    {
      v3 = (char *)this[215];
      if ( !v3 )
        v3 = (char *)String;
      return sub_10216390((int)this, v3);
    }
  }
  return result;
}
