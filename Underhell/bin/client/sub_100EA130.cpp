void __thiscall sub_100EA130(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // [esp+24h] [ebp+18h]

  v9 = -1;
  if ( *(float *)&a6 != 0.0 )
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2);
    v9 = sub_100E9780(a4, a6, v11);
  }
  v12 = 0;
  if ( (int)this[5] > 0 )
  {
    v13 = 0;
    do
    {
      if ( *(_DWORD *)(this[2] + v13 + 20) == a2 )
        sub_100EA020(this, v12, a3, a4, a5, v9, *(float *)&a7, *(float *)&a8, *(float *)&a9);
      v13 += 24;
      ++v12;
    }
    while ( v12 < this[5] );
  }
}
