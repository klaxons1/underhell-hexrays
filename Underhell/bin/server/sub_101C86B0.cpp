void __thiscall sub_101C86B0(int this, int a2, int a3, float a4, int a5)
{
  int v6; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int *v12; // eax

  if ( *(_DWORD *)(this + 28) != a2 )
  {
    if ( *(_BYTE *)(this + 32) )
    {
      sub_101C7250((_WORD *)this);
      sub_101C8140(this);
      *(_DWORD *)(this + 28) = a2;
    }
    *(_BYTE *)(this + 32) = *(_DWORD *)(dword_106BA8C4 + 48) != 0;
  }
  if ( *(_BYTE *)(this + 32) )
  {
    v6 = sub_101C85B0(this, a3, a4);
    *(float *)v6 = a4;
    *(_DWORD *)(v6 + 4) = a5;
    if ( a3 )
      v7 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    else
      v7 = -1;
    v8 = *(_DWORD *)(v6 + 20);
    v9 = *(_DWORD *)(v6 + 12);
    if ( v8 + 1 > v9 )
      sub_102ABFC0(v8 - v9 + 1);
    ++*(_DWORD *)(v6 + 20);
    v10 = *(_DWORD *)(v6 + 8);
    v11 = *(_DWORD *)(v6 + 20) - v8 - 1;
    *(_DWORD *)(v6 + 24) = v10;
    if ( v11 > 0 )
      memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * v11);
    v12 = (int *)(*(_DWORD *)(v6 + 8) + 4 * v8);
    if ( v12 )
      *v12 = v7;
  }
}
