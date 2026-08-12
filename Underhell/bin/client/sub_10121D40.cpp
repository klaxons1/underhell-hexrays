void __thiscall sub_10121D40(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]
  int i; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v3 = *(_DWORD *)(this + 48) - 1;
  for ( i = v3; v3 >= 0; i = v3 )
  {
    v4 = *(_DWORD *)(this + 36);
    v5 = *(_DWORD **)(v4 + 4 * v3);
    v12 = v5;
    if ( *v5 == a2 )
    {
      v6 = *(_DWORD *)(this + 48);
      v16 = v3;
      if ( v6 > 0 )
      {
        *(_DWORD *)(v4 + 4 * v3) = *(_DWORD *)(v4 + 4 * v6 - 4);
        --*(_DWORD *)(this + 48);
      }
      v7 = *(_DWORD *)(this + 48);
      v15 = v7;
      if ( v7 )
      {
        v13 = v7 / 2;
        if ( v3 < v7 / 2 )
        {
          do
          {
            v8 = 2 * v16 + 1;
            if ( v8 < v15
              && (*(unsigned __int8 (__cdecl **)(int, int))(this + 56))(
                   *(_DWORD *)(this + 36) + 4 * v16,
                   *(_DWORD *)(this + 36) + 4 * v8) )
            {
              v3 = 2 * v16 + 1;
            }
            v9 = 2 * v16 + 2;
            if ( v9 < v15
              && (*(unsigned __int8 (__cdecl **)(int, int))(this + 56))(
                   *(_DWORD *)(this + 36) + 4 * v3,
                   *(_DWORD *)(this + 36) + 4 * v9) )
            {
              v3 = 2 * v16 + 2;
            }
            if ( v3 == v16 )
              break;
            v10 = *(_DWORD *)(this + 36);
            v11 = *(_DWORD *)(v10 + 4 * v16);
            *(_DWORD *)(v10 + 4 * v16) = *(_DWORD *)(v10 + 4 * v3);
            *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v3) = v11;
            v16 = v3;
          }
          while ( v3 < v13 );
          v5 = v12;
          v3 = i;
        }
      }
      sub_1022FD10(v5);
    }
    --v3;
  }
}
