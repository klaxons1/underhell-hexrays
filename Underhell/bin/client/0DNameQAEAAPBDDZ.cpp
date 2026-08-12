DName *__thiscall DName::DName(DName *this, char **a2, char a3)
{
  unsigned int v4; // edx
  char v6; // al
  const char *v7; // eax
  char v8; // cl
  char *v10; // [esp+10h] [ebp+8h]

  v4 = 0;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 1) &= 0xFFFF00FF;
  *(_DWORD *)this = 0;
  if ( !*a2 )
  {
LABEL_24:
    *((_BYTE *)this + 4) = 2;
    return this;
  }
  if ( !**a2 )
    goto LABEL_23;
  v10 = *a2;
  do
  {
    v6 = **a2;
    if ( v6 == a3 )
      break;
    if ( v6 != 95
      && v6 != 36
      && v6 != 60
      && v6 != 62
      && v6 != 45
      && (v6 < 97 || v6 > 122)
      && (v6 < 65 || v6 > 90)
      && (v6 < 48 || v6 > 57)
      && v6 >= -1
      && (dword_10482870 & 0x10000) == 0 )
    {
      goto LABEL_24;
    }
    ++v4;
    v7 = *a2 + 1;
    *a2 = (char *)v7;
  }
  while ( *v7 );
  DName::doPchar(this, v10, v4);
  v8 = **a2;
  if ( !v8 )
  {
    if ( *((_BYTE *)this + 4) )
      return this;
LABEL_23:
    *((_BYTE *)this + 4) = 1;
    return this;
  }
  ++*a2;
  if ( v8 != a3 )
  {
    *(_DWORD *)this = 0;
    *((_BYTE *)this + 4) = 3;
  }
  return this;
}
