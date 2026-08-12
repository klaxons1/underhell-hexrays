void __thiscall sub_1026CAB0(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebp
  char v6; // bl
  int v7; // eax
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v4 = this[3];
  if ( v4 )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v9, &v8);
    v5 = v4 - 1;
    v6 = 0;
    if ( v4 - 1 < 0 )
      goto LABEL_11;
    do
    {
      v7 = sub_10237C80((_DWORD *)(4 * v5 + *this));
      if ( v7 )
      {
        if ( sub_1026AD50(v7, v9, v8) )
          v6 = 1;
      }
      else
      {
        if ( this[3] - v5 - 1 > 0 )
          memcpy((void *)(4 * v5 + *this), (const void *)(4 * v5 + *this + 4), 4 * (this[3] - v5 - 1));
        --this[3];
      }
      --v5;
    }
    while ( v5 >= 0 );
    if ( !v6 )
LABEL_11:
      sub_1026BDD0(this);
  }
}
