DName *__thiscall DName::DName(DName *this, unsigned __int64 a2)
{
  char *v3; // edi
  unsigned __int64 v4; // rcx
  _BYTE v6[4]; // [esp+28h] [ebp-8h] BYREF

  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 1) &= 0xFFFF00FF;
  v3 = v6;
  *(_DWORD *)this = 0;
  v6[0] = 0;
  do
  {
    --v3;
    v4 = a2 % 0xA;
    a2 /= 0xAu;
    *v3 = v4 + 48;
  }
  while ( a2 );
  DName::doPchar(this, v3, v6 - v3);
  return this;
}
