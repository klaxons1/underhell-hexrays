int __thiscall sub_10278B30(int *this, const char *a2)
{
  int result; // eax
  int v4; // edi
  _BYTE *v5; // edx
  const char *v6; // ecx

  result = strlen(a2);
  v4 = result;
  if ( result > this[73] || !this[72] )
  {
    sub_10034930(this[72]);
    result = sub_100DDA40(v4 + 1);
    this[72] = result;
  }
  v5 = (_BYTE *)this[72];
  v6 = a2;
  do
  {
    LOBYTE(result) = *v6;
    *v5++ = *v6++;
  }
  while ( (_BYTE)result );
  this[73] = v4;
  return result;
}
