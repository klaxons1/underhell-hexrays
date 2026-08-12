void __thiscall sub_1017CA00(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // edx
  int v4; // edi
  int v5; // ecx
  char v6; // [esp+Eh] [ebp-2h]
  char v7; // [esp+Fh] [ebp-1h]

  v6 = 0;
  v7 = 0;
  if ( (int)this[219] <= 0 )
    goto LABEL_17;
  v3 = (_DWORD *)this[216];
  v4 = this[219];
  do
  {
    if ( *v3 != -1
      && off_1061BE18[4 * (*v3 & 0xFFF) + 2] == *v3 >> 12
      && (v5 = off_1061BE18[4 * (*v3 & 0xFFF) + 1]) != 0
      && *(_BYTE *)(v5 + 800) )
    {
      v6 = 1;
    }
    else
    {
      v7 = 1;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( v6 )
  {
    if ( !v7 )
    {
      if ( this[221] != 1 )
      {
        sub_1010DD80(this + 222, __SPAIR64__((unsigned int)this, a2), 0.0);
        this[221] = 1;
      }
      return;
    }
    goto LABEL_17;
  }
  if ( !v7 )
  {
LABEL_17:
    if ( this[221] != 3 )
    {
      sub_1010DD80(this + 234, __SPAIR64__((unsigned int)this, a2), 0.0);
      this[221] = 3;
    }
    return;
  }
  if ( this[221] != 2 )
  {
    sub_1010DD80(this + 228, __SPAIR64__((unsigned int)this, a2), 0.0);
    this[221] = 2;
  }
}
