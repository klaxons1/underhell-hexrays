int __thiscall sub_101790B0(unsigned int *this, int a2)
{
  const char **v2; // eax
  const char *v4; // eax
  int result; // eax
  unsigned int *v6; // edi
  unsigned int v7; // esi
  int *v8; // ecx

  v2 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = (const char **)&a2;
  }
  v4 = *v2;
  this[202] = (unsigned int)v4;
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(int, unsigned int, const char *))(*(_DWORD *)dword_106B31D0 + 156))(
    dword_106B31D0,
    this[200],
    v4);
  result = this[62];
  v6 = this + 62;
  v7 = result & 0xFFFFFFFE;
  if ( result != (result & 0xFFFFFFFE) )
  {
    result = (int)(v6 - 62);
    if ( *((_BYTE *)v6 - 164) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v6 = v7;
    }
    else
    {
      v8 = *(int **)(result + 24);
      if ( v8 )
        result = sub_100194B0(v8, 248);
      *v6 = v7;
    }
  }
  return result;
}
