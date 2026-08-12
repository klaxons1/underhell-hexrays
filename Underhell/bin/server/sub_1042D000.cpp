char *__thiscall sub_1042D000(char *this, char a2, const char *a3, int a4, int a5)
{
  int i; // ecx
  char v7; // al
  signed int *v8; // edi
  const char *v9; // eax
  signed int v10; // eax

  this[4] = a2;
  *(_DWORD *)this = &CUtlCharConversion::`vftable';
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 4) = a4;
  *((_DWORD *)this + 3) = strlen(a3);
  *((_DWORD *)this + 5) = 0;
  memset(this + 280, 0, 0x7F8u);
  for ( i = 0; i < a4; ++i )
  {
    v7 = *(_BYTE *)(a5 + 8 * i);
    this[i + 24] = v7;
    v8 = (signed int *)&this[8 * v7 + 280];
    v9 = *(const char **)(a5 + 8 * i + 4);
    v8[1] = (signed int)v9;
    v10 = strlen(v9);
    *v8 = v10;
    if ( v10 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v10;
  }
  return this;
}
