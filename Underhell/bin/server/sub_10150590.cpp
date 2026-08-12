void __thiscall sub_10150590(_DWORD *this)
{
  char *v2; // eax
  char *v3; // eax

  if ( this[232] )
  {
    v2 = (char *)this[232];
    if ( !v2 )
      v2 = (char *)String;
    sub_1023B8B0(v2);
  }
  if ( this[233] )
  {
    v3 = (char *)this[233];
    if ( !v3 )
      v3 = (char *)String;
    sub_1023B8B0(v3);
  }
  this[234] = 0;
}
