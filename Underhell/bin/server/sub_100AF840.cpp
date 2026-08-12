void __thiscall sub_100AF840(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // edi
  int *v6; // ecx
  int v7; // eax
  int v8; // [esp+8h] [ebp-4h]
  int *v9; // [esp+14h] [ebp+8h]

  if ( a2 != -1 )
  {
    sub_100AF560(this, a2);
    v4 = this[1];
    v5 = 28 * a2;
    v6 = *(int **)(v4 + 28 * a2 + 24);
    v7 = v4 + 28 * a2 + 16;
    v8 = v7;
    v9 = v6;
    if ( v6 )
    {
      sub_10068150(v6);
      sub_10184660(v9);
      v7 = v8;
    }
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v5 + this[1]) = a2;
    *(_DWORD *)(this[1] + v5 + 4) = this[6];
    --this[5];
    this[6] = a2;
  }
}
