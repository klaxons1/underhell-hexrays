char __thiscall sub_100A37C0(
        int this,
        int *a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 (__thiscall ***a6)(_DWORD, int, _DWORD))
{
  __int16 v7; // si
  __int16 v8; // ax
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // ebx
  char v15; // cl
  _DWORD *v16; // ebx
  int v17; // [esp+Ch] [ebp-40h] BYREF
  int v18[12]; // [esp+10h] [ebp-3Ch] BYREF
  int v19; // [esp+40h] [ebp-Ch]
  int v20; // [esp+44h] [ebp-8h]
  char ArgList[4]; // [esp+48h] [ebp-4h]
  int v22; // [esp+5Ch] [ebp+10h]
  char v23; // [esp+67h] [ebp+1Bh]

  *(_DWORD *)ArgList = this;
  if ( a4 )
  {
    sub_100A0F60((char *)v18);
    v17 = a4;
    v7 = sub_1009CA60((_WORD *)(this + 4), (int)&v17);
    sub_1009CA00(v18);
    if ( v18[2] >= 0 )
    {
      if ( v18[0] )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v18[0]);
        v18[0] = 0;
      }
      v18[1] = 0;
    }
    v8 = v7;
  }
  else
  {
    v8 = -1;
  }
  if ( v8 == -1 )
    return 0;
  v9 = *(_DWORD *)(this + 8);
  v10 = 60 * v8;
  v11 = v9 + v10 + 12;
  v22 = v10;
  if ( !*(_BYTE *)(v9 + v10 + 53) )
    return 0;
  v12 = *(_DWORD *)(v9 + v10 + 24);
  v19 = v12;
  if ( !v12 )
    return 0;
  if ( (*(_BYTE *)(v11 + 44) & 8) != 0 )
  {
    v13 = *(unsigned __int8 *)(v11 + 42);
    v20 = v13;
    while ( 1 )
    {
      *(_BYTE *)(v11 + 42) = v13 + 1;
      if ( v13 >= v12 )
      {
        if ( (*(_BYTE *)(v11 + 44) & 0x10) != 0 )
        {
          *(_BYTE *)(v11 + 41) = 0;
          return 0;
        }
        v13 = 0;
        *(_BYTE *)(v11 + 42) = 0;
      }
      if ( !a6 )
        goto LABEL_24;
      if ( (**a6)(a6, *(_BYTE *)(*(_DWORD *)v11 + 8 * v13 + 7) & 0x3F, *(_DWORD *)(*(_DWORD *)v11 + 8 * v13)) )
        goto LABEL_23;
      v13 = *(unsigned __int8 *)(v11 + 42);
      if ( v13 == v20 )
        return 0;
      v10 = v22;
      v12 = v19;
    }
  }
  v13 = sub_100A1860(v11, a6);
  if ( v13 < 0 )
    return 0;
LABEL_23:
  v10 = v22;
LABEL_24:
  if ( (_BYTE)a5 )
  {
    sub_1009A510(*(int *)ArgList, a3, "%s\n", *(const char **)(*(_DWORD *)(*(_DWORD *)ArgList + 8) + v10 + 8));
    sub_1009A510(*(int *)ArgList, a3, "{\n");
    sub_1009AE40(*(int *)ArgList, (int)a6, (_DWORD *)v11, v13, a3);
  }
  v15 = *(_BYTE *)(*(_DWORD *)v11 + 8 * v13 + 7);
  v16 = (_DWORD *)(*(_DWORD *)v11 + 8 * v13);
  v23 = 1;
  if ( (v15 & 0x3F) == 4 )
  {
    v23 = sub_100A37C0(a2, a3 + 1, *v16, a5, (char)a6);
  }
  else
  {
    a2[1] = (int)v16;
    *a2 = v11;
  }
  if ( (_BYTE)a5 )
    sub_1009A510(*(int *)ArgList, a3, "}\n");
  return v23;
}
