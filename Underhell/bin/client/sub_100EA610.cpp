void __thiscall sub_100EA610(int *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int *v6; // ecx
  _DWORD *i; // edx
  int v8; // ebx
  int v9; // ebx
  _DWORD *v10; // esi
  bool v11; // sf
  int v12; // eax
  int v13; // [esp+Ch] [ebp-4h]
  int v14; // [esp+18h] [ebp+8h]

  if ( a2 )
  {
    v3 = this[5];
    v4 = 0;
    if ( v3 > 0 )
    {
      v5 = this[2];
      v6 = this + 2;
      for ( i = (_DWORD *)(v5 + 20); *i != a2; i += 6 )
      {
        if ( ++v4 >= v3 )
          return;
      }
      if ( v4 != -1 )
      {
        sub_100EA240(v6, v4);
        *(_DWORD *)(a2 + 6740) = -1;
        sub_100F1890(0, 1, 0);
      }
    }
  }
  else
  {
    v8 = this[5] - 1;
    v14 = v8;
    if ( v8 >= 0 )
    {
      v9 = 24 * v8;
      do
      {
        v10 = (_DWORD *)(v9 + this[2]);
        v13 = v10[5];
        if ( v13 )
          sub_100F1860(v13);
        v11 = (int)v10[2] < 0;
        v10[3] = 0;
        if ( !v11 )
        {
          if ( *v10 )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v10);
            *v10 = 0;
          }
          v10[1] = 0;
        }
        v11 = (int)v10[2] < 0;
        v12 = *v10;
        v10[4] = *v10;
        if ( !v11 )
        {
          if ( v12 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v12);
            *v10 = 0;
          }
          v10[1] = 0;
        }
        if ( this[5] - v14 - 1 > 0 )
          memcpy((void *)(v9 + this[2]), (const void *)(v9 + this[2] + 24), 24 * (this[5] - v14 - 1));
        --this[5];
        *(_DWORD *)(v13 + 6740) = -1;
        sub_100F1890(0, 1, 0);
        v9 -= 24;
        --v14;
      }
      while ( v14 >= 0 );
    }
  }
}
