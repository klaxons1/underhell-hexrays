int __thiscall sub_101220C0(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  int v4; // edi
  int result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  int v12; // [esp+Ch] [ebp-8h]
  int v14; // [esp+1Ch] [ebp+8h]

  v3 = this;
  this[1] = 1;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) )
    v3[1] |= 2u;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
    v3[1] |= 4u;
  v4 = 0;
  v14 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  if ( result > 0 )
  {
    do
    {
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 16))(a2, v4);
      if ( v12 >= 0 )
      {
        v6 = v3[5];
        v7 = v3[3];
        if ( v6 + 1 > v7 )
          sub_1010AFF0(v3 + 2, v6 - v7 + 1);
        ++v3[5];
        v8 = v3[2];
        v9 = v3[5] - v6 - 1;
        v3[6] = v8;
        if ( v9 > 0 )
          memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
        v10 = v3[2];
        v3 = this;
        v11 = (int *)(v10 + 4 * v6);
        if ( v11 )
          *v11 = v12;
      }
      v4 = ++v14;
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
    }
    while ( v14 < result );
  }
  return result;
}
