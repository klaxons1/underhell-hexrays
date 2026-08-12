int __usercall __check_float_string@<eax>(void **a1@<edi>, size_t *a2@<esi>, int a3, void *Src, _DWORD *a5)
{
  int v5; // eax
  void *v6; // eax
  void *v8; // eax

  v5 = *a2;
  if ( a3 == *a2 )
  {
    if ( *a1 == Src )
    {
      v6 = sub_101845E0(v5, 2);
      *a1 = v6;
      if ( !v6 )
        return 0;
      *a5 = 1;
      memcpy_0(*a1, Src, *a2);
    }
    else
    {
      v8 = sub_10184610((int)*a1, v5, 2);
      if ( !v8 )
        return 0;
      *a1 = v8;
    }
    *a2 *= 2;
  }
  return 1;
}
