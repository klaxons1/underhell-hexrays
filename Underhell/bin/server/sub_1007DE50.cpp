int __thiscall sub_1007DE50(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edi
  _DWORD *v8; // ebx
  int v9; // eax
  int v10; // eax

  result = sub_100A5FE0(*(_DWORD *)(this + 36));
  if ( result == -1 )
  {
    v4 = sub_10021B60(*(_DWORD **)(this + 4));
    if ( v4 == -1 )
      v4 = 1;
    v5 = sub_10039AE0(*(_DWORD **)(this + 4), v4, 0);
    v6 = sub_100BDD50(v5, a2);
    if ( v6 == -1 )
    {
      v7 = *(_DWORD *)(this + 36);
      v8 = *(_DWORD **)(this + 4);
      sub_100A5FB0(v7);
      v9 = sub_100A5FB0(v7);
      sub_10008F90(v9);
      sub_10029660(v8, (int)"No appropriate sequence for arrival activity %s (%d)\n");
      v10 = sub_10039AE0(*(_DWORD **)(this + 4), 1, 0);
      v6 = sub_100BDD50(v10, a2);
    }
    sub_100A5FF0(v6);
    return v6;
  }
  return result;
}
