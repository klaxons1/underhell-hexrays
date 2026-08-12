int __thiscall sub_10169C40(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // eax

  v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = sub_1007A770(off_103DCD78, *v3);
  v5 = v4;
  if ( v4 && !sub_1010FB40(v4) )
  {
    v6 = this[4];
    v7 = this[2];
    if ( v6 + 1 > v7 )
      sub_1010AFF0(this + 1, v6 - v7 + 1);
    ++this[4];
    v8 = this[1];
    v9 = this[4] - v6 - 1;
    this[5] = v8;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
    v10 = (int *)(this[1] + 4 * v6);
    if ( v10 )
      *v10 = v5;
  }
  return 0;
}
