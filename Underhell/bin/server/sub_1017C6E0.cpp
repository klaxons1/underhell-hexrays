void __thiscall sub_1017C6E0(unsigned int *this, unsigned int a2, int a3, int a4, int a5)
{
  int v6; // edx
  unsigned int *v7; // esi
  unsigned int v8; // eax
  int v9; // ecx
  const char *v10; // eax
  const char *v11; // eax
  int v12; // [esp+4h] [ebp-10h]
  int v13; // [esp+10h] [ebp-4h]

  v6 = 0;
  v13 = this[270];
  if ( v13 > 0 )
  {
    v7 = this + 200;
    do
    {
      v8 = *v7;
      ++v6;
      ++v7;
      if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
    }
    while ( v9 != a3 && v6 < v13 );
  }
  if ( v6 <= v13 )
  {
    this[v6 + 231] ^= 1u;
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *, unsigned int))(*this + 280))(this, a2) )
    {
      v12 = this[270];
      v11 = sub_100D6390(this);
      DevMsg(2, "Multisource %s enabled (%d inputs)\n", v11, v12);
      sub_1010DD80(this + 264, __SPAIR64__((unsigned int)this, a2), 0.0);
    }
  }
  else
  {
    if ( *(_DWORD *)(a3 + 24) )
    {
      v10 = *(const char **)(a3 + 92);
      if ( !v10 )
      {
        Warning("MultiSrc: Used by non member %s.\n", String);
        return;
      }
    }
    else
    {
      v10 = "<logical entity>";
    }
    Warning("MultiSrc: Used by non member %s.\n", v10);
  }
}
