int __thiscall sub_10377330(int this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // esi
  const char *v8; // eax
  char *v9; // eax
  void *v10; // esi
  char **v11; // eax
  int result; // eax
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v4 = *(_DWORD *)(this + 4);
  *(_BYTE *)(this + 244) = 1;
  v5 = *(_DWORD **)(v4 + 2796);
  if ( v5 )
    sub_100B1AB0(v5, v4, 0);
  v6 = a2;
  v7 = 0;
  if ( dword_106E95A4 > 0 )
  {
    while ( sub_10050FC0((_DWORD *)(*(_DWORD *)(dword_106E9598 + 4 * v7) + 4292)) != v6 )
    {
      if ( ++v7 >= dword_106E95A4 )
        goto LABEL_8;
    }
    sub_100B20E0(*(_DWORD *)(*(_DWORD *)(dword_106E9598 + 4 * v7) + 2796), *(_DWORD **)(this + 4));
  }
LABEL_8:
  if ( !*(_DWORD *)(*(_DWORD *)(this + 4) + 2796) )
  {
    v8 = *(const char **)(v6 + 260);
    if ( !v8 )
      v8 = String;
    v9 = sub_1001E280(Buffer, "%s_hunter_squad", v8);
    v10 = *(void **)(this + 4);
    v11 = (char **)sub_10162BE0(&a2, v9);
    sub_1004AF40(v10, *v11);
  }
  LOBYTE(result) = sub_100577F0(this, v6, 0);
  *(float *)(this + 236) = *(float *)(dword_106B31C8 + 12);
  return result;
}
