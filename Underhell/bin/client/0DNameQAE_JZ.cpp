DName *__thiscall DName::DName(DName *this, __int64 a2)
{
  unsigned int v2; // eax
  char *v4; // edi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  char v8; // [esp+13h] [ebp-1Dh]
  _BYTE v9[3]; // [esp+29h] [ebp-7h] BYREF

  v2 = HIDWORD(a2);
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 1) &= 0xFFFF00FF;
  v4 = v9;
  *(_DWORD *)this = 0;
  v9[0] = 0;
  v8 = 0;
  if ( a2 < 0 )
  {
    v8 = 1;
    v2 = (unsigned __int64)-a2 >> 32;
    LODWORD(a2) = -(int)a2;
  }
  do
  {
    --v4;
    v6 = __PAIR64__(v2, a2) % 0xA;
    v5 = __PAIR64__(v2, a2) / 0xA;
    LODWORD(a2) = v5;
    *v4 = v6 + 48;
    v2 = HIDWORD(v5);
  }
  while ( __PAIR64__(HIDWORD(v5), a2) );
  if ( v8 )
    *--v4 = 45;
  DName::doPchar(this, v4, v9 - v4);
  return this;
}
