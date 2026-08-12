int __thiscall sub_10034EE0(int *this)
{
  int *v2; // esi
  int v3; // edi
  int result; // eax

  if ( this[275] )
  {
    v2 = this + 185;
    v3 = 90;
    do
    {
      sub_10034930(*v2);
      *v2++ = 0;
      --v3;
    }
    while ( v3 );
    sub_10034930(this[275]);
    result = 0;
    this[275] = 0;
    this[276] = 0;
  }
  return result;
}
