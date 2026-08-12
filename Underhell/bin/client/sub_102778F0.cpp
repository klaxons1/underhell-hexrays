void __thiscall sub_102778F0(_DWORD *this, int a2, char a3, char a4)
{
  int v4; // ebp
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // eax
  int *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int i; // edi
  int v13; // edx
  int v15; // [esp+10h] [ebp-8h]
  int *v16; // [esp+14h] [ebp-4h] BYREF

  v4 = a2;
  if ( a2 < 0 )
  {
    v4 = -a2;
    a4 = 1;
  }
  v5 = this + 53;
  if ( v4 >= 0 && v4 < this[54] && v4 <= this[60] )
  {
    v6 = 12 * v4;
    v7 = 12 * v4 + *v5;
    if ( *(_DWORD *)(v7 + 4) != v4 || *(_DWORD *)(v7 + 8) == v4 )
    {
      v16 = *(int **)(v6 + *v5);
      v8 = v16;
      v9 = sub_10273C00(v16);
      v15 = v9;
      if ( a3 && v9 )
      {
        v10 = 0;
        if ( v16[58] > 0 )
        {
          do
          {
            v11 = *(_DWORD *)(v8[55] + 4 * v10++);
            *(_DWORD *)(v11 + 212) = *(_DWORD *)(v15 + 208);
          }
          while ( v10 < v8[58] );
        }
      }
      else if ( a4 )
      {
        while ( v16[58] )
          (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 792))(
            this,
            -*(_DWORD *)(*(_DWORD *)v16[55] + 208),
            0,
            0);
      }
      else
      {
        for ( i = 0; i < v16[58]; ++i )
          (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*this + 792))(
            this,
            *(_DWORD *)(*(_DWORD *)(v16[55] + 4 * i) + 208),
            0,
            0);
        v6 = 12 * v4;
      }
      if ( v15 )
        sub_102750F0((_DWORD *)(v15 + 220), &v16);
      sub_10265FF0(v5, v4);
      *(_DWORD *)(*v5 + v6 + 8) = v5[5];
      v5[5] = v4;
      v13 = *v8;
      if ( a4 )
        (*(void (__thiscall **)(int *, int))(v13 + 120))(v8, 1);
      else
        (*(void (__thiscall **)(int *))(v13 + 300))(v8);
      sub_102750F0(this + 69, &v16);
    }
  }
}
