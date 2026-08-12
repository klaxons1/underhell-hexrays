int __thiscall sub_10240000(void *this)
{
  int v1; // ebp
  int v2; // edi
  int (__thiscall **v3)(int, int, int); // esi
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int (__thiscall **v7)(int, int, int); // esi
  int v8; // eax
  int (__thiscall ***v9)(_DWORD); // eax
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // ebp
  int v14; // eax
  int v15; // esi
  int v16; // ebp
  int v17; // edi
  _DWORD *v18; // ebx
  int (__thiscall **v19)(int, _DWORD, int); // esi
  int v20; // eax
  int v21; // esi
  int v23; // [esp+24h] [ebp-28h] BYREF
  int v24; // [esp+28h] [ebp-24h] BYREF
  void *v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  int v27; // [esp+34h] [ebp-18h]
  int v28[3]; // [esp+38h] [ebp-14h] BYREF
  int v29; // [esp+44h] [ebp-8h]
  int v30; // [esp+48h] [ebp-4h]

  v25 = this;
  if ( dword_103FCF20 == -1 )
    return 0;
  v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF20);
  if ( !v1 )
    return 0;
  v2 = dword_1047CA70;
  v3 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
  v4 = sub_10278FB0();
  if ( !(*v3)(v2, v1, v4) )
    return 0;
  memset(v28, 0, sizeof(v28));
  v29 = 0;
  v30 = 0;
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v24, &v23);
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 24))(dword_1047CA6C);
  if ( dword_103FCF20 == -1
    || (v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF20)) == 0 )
  {
    v9 = 0;
  }
  else
  {
    v6 = dword_1047CA70;
    v7 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
    v8 = sub_10278FB0();
    v9 = (int (__thiscall ***)(_DWORD))(*v7)(v6, v5, v8);
  }
  v10 = (**v9)(v9);
  v11 = *(_DWORD *)dword_1047CA6C;
  v27 = v10;
  if ( (*(unsigned __int8 (__thiscall **)(int))(v11 + 204))(dword_1047CA6C)
    && (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 212))(dword_1047CA6C, v24, v23) )
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 304))(dword_1047CA6C) - 1;
    if ( v12 >= 0 )
    {
      do
      {
        v13 = v29;
        if ( v29 )
          goto LABEL_21;
        v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 308))(dword_1047CA6C, v12);
        v15 = v14;
        if ( v14 && v14 != v26 && v14 != v27 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 100))(dword_1047CA70, v14) )
            sub_1023FF40(0, (int)v28, v24, v23, v15);
        }
      }
      while ( --v12 >= 0 );
    }
    v13 = v29;
    if ( v29 )
      goto LABEL_21;
    sub_1023FF40(0, (int)v28, v24, v23, v26);
  }
  v13 = v29;
  if ( !v29 )
  {
LABEL_24:
    sub_1011A810(v28);
    return 0;
  }
LABEL_21:
  v16 = v13 - 1;
  if ( v16 < 0 )
    goto LABEL_24;
  while ( 1 )
  {
    v17 = dword_1047CA70;
    v18 = (_DWORD *)(v28[0] + 4 * v16);
    v19 = (int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA70 + 216);
    v20 = (*(int (**)(void))(*(_DWORD *)v25 + 104))();
    v21 = (*v19)(v17, *v18, v20);
    if ( v21 )
      break;
    if ( --v16 < 0 )
      goto LABEL_24;
  }
  sub_1011A810(v28);
  return v21;
}
