int __thiscall sub_10090640(_DWORD *this, int ArgList, int a3, char a4, float a5)
{
  _DWORD *v6; // ecx
  int v8; // eax
  int v9; // ebx
  char *v10; // eax
  char *v11; // eax
  float v12; // edx
  int v13; // edx
  int v14; // edx
  _DWORD *v15; // ecx
  int v16; // edi
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  int v24; // [esp-18h] [ebp-26Ch]
  char Buffer[256]; // [esp+4h] [ebp-250h] BYREF
  char v26[256]; // [esp+104h] [ebp-150h] BYREF
  _DWORD v27[6]; // [esp+204h] [ebp-50h] BYREF
  char v28; // [esp+21Ch] [ebp-38h]
  float v29; // [esp+220h] [ebp-34h]
  int v30; // [esp+224h] [ebp-30h]
  int v31; // [esp+228h] [ebp-2Ch]
  _DWORD v32[6]; // [esp+22Ch] [ebp-28h] BYREF
  char v33; // [esp+244h] [ebp-10h]
  float v34; // [esp+248h] [ebp-Ch]
  int v35; // [esp+24Ch] [ebp-8h]
  int v36; // [esp+250h] [ebp-4h]
  int savedregs; // [esp+254h] [ebp+0h] BYREF
  int ArgLista; // [esp+25Ch] [ebp+8h]

  v6 = (_DWORD *)this[5];
  if ( !v6[1] )
    return 0;
  v29 = a5;
  v27[3] = *(_DWORD *)ArgList;
  v27[4] = *(_DWORD *)(ArgList + 4);
  v27[5] = *(_DWORD *)(ArgList + 8);
  v27[2] = 0;
  v31 = 0;
  v24 = this[1];
  v27[0] = &CPathfindNearestNodeFilter::`vftable';
  v27[1] = this;
  v28 = 1;
  v30 = a4 & 0xF;
  v8 = sub_10085990(v6, (int)&savedregs, v30, (int)this, v24, (float *)ArgList, 1, (int)v27);
  v9 = v31;
  ArgLista = v8;
  if ( !v31 )
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v10 = sub_1001E280(Buffer, "Node pathfind failed, no route to source %d\n", v8);
      v11 = sub_1001E280(v26, "[Nav] %s", v10);
      sub_10029660((_DWORD *)this[1], (int)v11);
      return 0;
    }
    return 0;
  }
  v12 = *(float *)a3;
  v34 = a5;
  *(float *)&v32[3] = v12;
  v13 = *(_DWORD *)(a3 + 4);
  v35 = a4 & 0xF;
  v32[4] = v13;
  v32[5] = *(_DWORD *)(a3 + 8);
  v14 = this[1];
  v32[2] = 0;
  v33 = 0;
  v36 = 0;
  v15 = (_DWORD *)this[5];
  v32[0] = &CPathfindNearestNodeFilter::`vftable';
  v32[1] = this;
  v16 = sub_10085990(v15, (int)&savedregs, (int)v32, (int)this, v14, (float *)a3, 1, (int)v32);
  if ( !v36 )
  {
    sub_100B9C00(v9);
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v17 = sub_1001E280(v26, "Node pathfind failed, no route to dest %d\n", v16);
      v18 = sub_1001E280(Buffer, "[Nav] %s", v17);
      sub_10029660((_DWORD *)this[1], (int)v18);
    }
    return 0;
  }
  if ( v16 == ArgLista )
  {
    sub_100B9A80(v9, v36);
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v19 = sub_1001E280(v26, "[Nav] %s", "Node pathfind succeeded: dest == source\n");
      sub_10029660((_DWORD *)this[1], (int)v19);
    }
    return v9;
  }
  if ( !sub_10085110((_DWORD *)this[5], ArgLista, v16) )
    return 0;
  v20 = sub_1008FD20(this, ArgLista, v16);
  if ( !v20 )
  {
    sub_100B9C00(v9);
    sub_100B9C00(v36);
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v21 = sub_1001E280(v26, "Node pathfind failed, no route between %d and %d\n", ArgLista, v16);
      v22 = sub_1001E280(Buffer, "[Nav] %s", v21);
      sub_10029660((_DWORD *)this[1], (int)v22);
    }
    return 0;
  }
  sub_100B9A80(v9, v20);
  sub_100B9A80(v9, v36);
  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v23 = sub_1001E280(v26, "[Nav] %s", "Node pathfind succeeded\n");
    sub_10029660((_DWORD *)this[1], (int)v23);
  }
  return v9;
}
