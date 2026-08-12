int __thiscall sub_100948C0(int this, char a2)
{
  int v2; // edx
  int *v5; // eax
  char v6; // cl
  int *v7; // edi
  int *v8; // eax
  int result; // eax
  char v10; // [esp+14h] [ebp+8h]

  v2 = dword_10693990;
  if ( (dword_10693990 & 1) == 0 )
  {
    v2 = dword_10693990 | 1;
    dword_10693990 |= 1u;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( a2 == -1 )
    v5 = &dword_1069398C;
  else
    v5 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
  v6 = *(_BYTE *)v5;
  v10 = *(_BYTE *)v5;
  if ( (v2 & 1) == 0 )
  {
    dword_10693990 = v2 | 1;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( v6 == -1 )
    v7 = &dword_1069398C;
  else
    v7 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
  *(_BYTE *)(12 * a2 + *(_DWORD *)(this + 4)) = *((_BYTE *)v7 + 1);
  if ( (dword_10693990 & 1) == 0 )
  {
    dword_10693990 |= 1u;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( v6 == -1 )
    v8 = &dword_1069398C;
  else
    v8 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
  if ( *((_BYTE *)v8 + 1) != 0xFF )
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * sub_10094100((_DWORD *)this, v10) + 2) = a2;
    v6 = v10;
  }
  if ( v6 != -1 )
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 2) = sub_10094480((_DWORD *)this, a2);
    v6 = v10;
  }
  if ( a2 == *(_BYTE *)(this + 16) )
  {
    *(_BYTE *)(this + 16) = v6;
  }
  else
  {
    if ( sub_100944E0((_DWORD *)this, a2) )
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * sub_10094480((_DWORD *)this, a2) + 1) = v10;
    else
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * sub_10094480((_DWORD *)this, a2)) = v10;
    v6 = v10;
  }
  result = 3 * v6;
  *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v6 + 1) = a2;
  if ( a2 != -1 )
  {
    result = *(_DWORD *)(this + 4);
    *(_BYTE *)(result + 12 * a2 + 2) = v6;
  }
  return result;
}
