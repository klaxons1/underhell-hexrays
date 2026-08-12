void __thiscall sub_10246230(_DWORD *this, __int16 a2, int (__thiscall ***a3)(_DWORD))
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // ecx
  int v10; // edi
  char *v11; // eax

  v4 = 0;
  if ( (int)this[66] > 0 )
  {
    v5 = 0;
    do
    {
      v6 = v5 + this[63];
      if ( *(_WORD *)(v6 + 4) == a2 && (!a3 || (int (__thiscall ***)(_DWORD))sub_10237C80((_DWORD *)(v6 + 16)) == a3) )
      {
        if ( this[66] - v4 - 1 > 0 )
          memcpy((void *)(this[63] + v5), (const void *)(this[63] + v5 + 20), 20 * (this[66] - v4 - 1));
        --this[66];
        --v4;
        v5 -= 20;
      }
      ++v4;
      v5 += 20;
    }
    while ( v4 < this[66] );
  }
  v7 = 0;
  if ( (int)this[61] > 0 )
  {
    v8 = 0;
    do
    {
      v9 = this[58] + v8;
      if ( *(_WORD *)(v9 + 4) == a2 )
      {
        if ( !a3
          || (v10 = sub_10237C80((_DWORD *)v9)) != 0
          && (v11 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 72))(v10), sub_10239950(a3, v11, 1) == v10) )
        {
          if ( this[61] - v7 - 1 > 0 )
            memcpy((void *)(v8 + this[58]), (const void *)(v8 + this[58] + 68), 68 * (this[61] - v7 - 1));
          --this[61];
          --v7;
          v8 -= 68;
        }
      }
      ++v7;
      v8 += 68;
    }
    while ( v7 < this[61] );
  }
}
