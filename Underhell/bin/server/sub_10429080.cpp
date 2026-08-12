int __thiscall sub_10429080(int *this)
{
  int *v2; // esi
  int v3; // edi
  int i; // edi
  bool v5; // sf
  int result; // eax

  v2 = this + 35;
  v3 = this[35];
  if ( v3 )
  {
    sub_10428F90((int *)this[35]);
    sub_10184660(v3);
    *v2 = 0;
  }
  sub_10427860(this + 36);
  sub_1042F730(this + 41);
  sub_10428610(this + 61);
  sub_1042F820(this + 41);
  sub_102375F0(this + 36);
  for ( i = 6; i >= 0; --i )
  {
    v2 -= 5;
    v5 = v2[2] < 0;
    v2[3] = 0;
    if ( !v5 )
    {
      if ( *v2 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v2);
        *v2 = 0;
      }
      v2[1] = 0;
    }
    v5 = v2[2] < 0;
    result = *v2;
    v2[4] = *v2;
    if ( !v5 )
    {
      if ( result )
      {
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
        *v2 = 0;
      }
      v2[1] = 0;
    }
  }
  return result;
}
