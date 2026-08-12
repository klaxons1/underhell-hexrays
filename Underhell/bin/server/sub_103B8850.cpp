int __thiscall sub_103B8850(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edi
  int *v8; // eax
  int v10; // [esp+20h] [ebp-10h]
  int v11; // [esp+24h] [ebp-Ch]

  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  v3 = this[1004];
  v4 = this[1002];
  if ( v3 + 1 > v4 )
    sub_102ABFC0(this + 1001, v3 - v4 + 1);
  ++this[1004];
  v5 = this[1001];
  v6 = this[1004] - v3 - 1;
  this[1005] = v5;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v3 + 4), (const void *)(v5 + 4 * v3), 4 * v6);
  v7 = (_DWORD *)(this[1001] + 4 * v3);
  if ( v7 )
    *v7 = a2;
  sub_100B8FC0((int)(this + 984), 0);
  v8 = sub_10162BE0(&a2, "!player");
  return sub_1010C6E0(
           (float *)dword_10614CA8,
           (int)this,
           "UpdateEnemyMemory",
           *v8,
           v10,
           v11,
           -1,
           2,
           1.0,
           (int)this,
           (int)this,
           0);
}
