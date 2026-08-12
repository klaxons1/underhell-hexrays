int __thiscall sub_101FDF80(int *this)
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
    sub_101FDE90((int *)this[35]);
    sub_10034930(v3);
    *v2 = 0;
  }
  sub_101FAF70(this + 36);
  sub_10230D40(this + 41);
  sub_101FD160(this + 61);
  sub_10230E30(this + 41);
  sub_1011A810(this + 36);
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
