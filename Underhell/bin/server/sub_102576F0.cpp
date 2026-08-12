void __thiscall sub_102576F0(_DWORD *this, unsigned int a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF
  char v7; // [esp+17h] [ebp-1h]

  if ( a2 )
    v6 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
  else
    v6 = -1;
  if ( sub_10319100(&v6) != -1 )
  {
    if ( a2 )
      v6 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
    else
      v6 = -1;
    v3 = sub_10319100(&v6);
    if ( v3 != -1 )
    {
      if ( this[271] - v3 - 1 > 0 )
        memcpy((void *)(this[268] + 4 * v3), (const void *)(this[268] + 4 * v3 + 4), 4 * (this[271] - v3 - 1));
      --this[271];
    }
    sub_1010DD80(this + 244, __SPAIR64__((unsigned int)this, a2), 0.0);
    v4 = this[271] - 1;
    v7 = 0;
    if ( v4 < 0 )
      goto LABEL_22;
    do
    {
      v5 = *(_DWORD *)(this[268] + 4 * v4);
      if ( v5 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this[268] + 4 * v4) & 0xFFF) + 2] == v5 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this[268] + 4 * v4) & 0xFFF) + 1] )
      {
        v7 = 1;
      }
      else
      {
        if ( this[271] - v4 - 1 > 0 )
          memcpy((void *)(this[268] + 4 * v4), (const void *)(this[268] + 4 * v4 + 4), 4 * (this[271] - v4 - 1));
        --this[271];
      }
      --v4;
    }
    while ( v4 >= 0 );
    if ( !v7 )
LABEL_22:
      sub_1010DD80(this + 250, __SPAIR64__((unsigned int)this, a2), 0.0);
  }
}
