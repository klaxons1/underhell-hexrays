int __thiscall sub_10067390(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi

  sub_10066F70(this);
  result = this[311];
  if ( result )
  {
    sub_100672B0(this, result, 0);
    v3 = 0;
    result = sub_1007A630(this[311]);
    if ( result > 0 )
    {
      do
      {
        v4 = sub_101E6500(v3);
        if ( sub_10065E70(this, v4) )
          sub_100404D0(this[311]);
        ++v3;
        result = sub_1007A630(this[311]);
      }
      while ( v3 < result );
    }
  }
  v5 = this[311];
  if ( v5 )
  {
    sub_101E9B00(this[311]);
    result = sub_10034930(v5);
  }
  this[311] = 0;
  return result;
}
