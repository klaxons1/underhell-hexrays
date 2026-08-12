void __thiscall sub_1026DEB0(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // ecx
  int v5; // ebp
  int v6; // ebx
  int (__thiscall **v7)(int, int, int); // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; v2 < this[56]; i = v2 )
  {
    v4 = *(_DWORD *)(this[53] + 4 * v2);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 916))(v4) )
    {
      v5 = 0;
      if ( (int)this[56] > 0 )
      {
        do
        {
          v6 = dword_1047CA70;
          v7 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
          v8 = (*(int (__thiscall **)(_DWORD *))(*this + 104))(this);
          v9 = (*v7)(v6, a2, v8);
          v10 = this[53];
          if ( v9 == *(_DWORD *)(v10 + 4 * v5) && v5 != i )
          {
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 4 * i) + 952))(*(_DWORD *)(v10 + 4 * i));
            (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 952))(v9);
          }
          ++v5;
        }
        while ( v5 < this[56] );
        v2 = i;
      }
    }
    ++v2;
  }
}
