void __thiscall sub_1008DAF0(_DWORD *this)
{
  int v2; // esi
  int *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // [esp+8h] [ebp-4h]

  v2 = this[1] - 1;
  if ( v2 >= 0 )
  {
    v3 = &this[v2 + 2];
    v7 = (int)&this[v2 + 2];
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = this[1];
        if ( v2 < v5 )
        {
          v6 = v5 - 1;
          this[1] = v6;
          if ( v6 > 0 && v2 != v6 )
            *v3 = this[v6 + 2];
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
          v3 = (int *)v7;
        }
      }
      --v3;
      --v2;
      v7 = (int)v3;
    }
    while ( v2 >= 0 );
  }
}
