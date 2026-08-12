void __thiscall sub_100F54D0(_DWORD *this, _DWORD *a2, float a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11[3]; // [esp+24h] [ebp-18h] BYREF
  float v12[3]; // [esp+30h] [ebp-Ch] BYREF

  v7 = ++this[45];
  if ( a3 < 0.050000001 || a4 < 0 )
  {
    this[45] = v7 - 1;
  }
  else
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)a6 + 4))(a6, v11);
    (*(void (__thiscall **)(_DWORD *, int *, float *))(*a2 + 212))(a2, v11, v12);
    v8 = (*(int (__thiscall **)(_DWORD *))(*a2 + 68))(a2);
    v9 = v8;
    if ( v8 )
    {
      v10 = sub_100F52B0(&off_103E1A70, v8);
      if ( *((int *)off_103DC81C + 5) > 1
        && v10
        && *(_DWORD *)(v10 + 4)
        && *(float *)(v10 + 12) + 0.5 > *((float *)off_103DC81C + 3) )
      {
        *(float *)(v10 + 8) = *((float *)off_103DC81C + 3);
        --this[45];
        return;
      }
      sub_10101790(v9, (int)a2, a3, a4, a5);
    }
    sub_10102640((int)v11, v12[0], v12[1], v12[2], a3, a4, a5);
    --this[45];
  }
}
