DName *__thiscall DName::operator=(DName *this, char *a2)
{
  unsigned int v3; // ecx

  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 1) &= 0xFFFF00FF;
  *(_DWORD *)this = 0;
  v3 = 0;
  if ( *a2 )
  {
    do
      ++v3;
    while ( a2[v3] );
  }
  DName::doPchar(this, a2, v3);
  return this;
}
