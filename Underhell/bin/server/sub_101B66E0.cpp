int __thiscall sub_101B66E0(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int16 v8; // ax
  int result; // eax
  int v10; // edi
  int v11; // eax
  int *v12; // esi
  int v13; // edi
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // ebx
  bool v20; // zf
  _DWORD *v21; // eax
  int v22; // [esp+Ch] [ebp-1Ch]
  _DWORD *v23; // [esp+10h] [ebp-18h]
  int v24; // [esp+10h] [ebp-18h]
  int v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  unsigned __int8 v27; // [esp+1Ch] [ebp-Ch]
  unsigned __int8 v28; // [esp+20h] [ebp-8h]
  unsigned __int16 v30; // [esp+38h] [ebp+10h]
  _DWORD *v31; // [esp+38h] [ebp+10h]
  bool v32; // [esp+3Bh] [ebp+13h]
  bool v33; // [esp+3Fh] [ebp+17h]

  ++this[86];
  if ( !a4 || !a5 )
  {
    --this[86];
    return 1;
  }
  v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 76))(a2);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 76))(a3);
  if ( a4 == a5 )
  {
    if ( ((v30 | v8) & 0x8000) != 0 )
    {
LABEL_5:
      --this[86];
      return 0;
    }
    v10 = *(_DWORD *)dword_106BAFE8;
    v11 = (*(int (__thiscall **)(_DWORD *))(*a4 + 24))(a4);
    v12 = (int *)(*(int (__thiscall **)(int, int))(v10 + 44))(dword_106BAFE8, v11);
    if ( v12 )
    {
      v13 = *v12;
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 84))(a3);
      v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 84))(a2, v14);
      LOBYTE(result) = (*(int (__thiscall **)(int *, _DWORD))(v13 + 8))(v12, v15);
      --this[86];
      return (unsigned __int8)result;
    }
    goto LABEL_8;
  }
  if ( ((unsigned __int8)v30 & (unsigned __int8)v8 & 2) != 0
    || ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 92))(a2) & 0x40) != 0 && !sub_101B66B0((int)a5, a3)
    || ((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 92))(a3) & 0x40) != 0 && !sub_101B66B0((int)a4, a2) )
  {
    goto LABEL_5;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*a4 + 588))(a4, a5)
    || (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*a5 + 588))(a5, a4) )
  {
    goto LABEL_8;
  }
  if ( a4[6] && a5[6] && ((_DWORD *)sub_10019B00(a4) == a5 || (_DWORD *)sub_10019B00(a5) == a4) )
    goto LABEL_5;
  if ( sub_100233D0(a4) || sub_100233D0(a5) )
  {
    v31 = sub_100E99F0(a4);
    v16 = sub_100E99F0(a5);
    v23 = v16;
    if ( v31 == v16 )
      goto LABEL_5;
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106BAFFC + 12))(
           dword_106BAFFC,
           v31,
           v16) )
    {
      goto LABEL_5;
    }
    v17 = v31[106];
    if ( v17 )
    {
      if ( v23[106]
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106BAFFC + 12))(
             dword_106BAFFC,
             v17,
             v23[106]) )
      {
        goto LABEL_5;
      }
    }
  }
  v25 = sub_1001F450(a4);
  v22 = sub_1001F450(a5);
  v28 = sub_100CFD40(a4);
  v27 = sub_100CFD40(a5);
  v32 = *((_BYTE *)a4 + 306) == 7;
  v26 = *((unsigned __int8 *)a5 + 306);
  v24 = *((unsigned __int8 *)a4 + 306);
  v33 = v26 == 7;
  if ( sub_100233D0(a4) && (v24 != 6 || *((_BYTE *)sub_100E99F0(a4) + 306) != 6) )
    v32 = 1;
  if ( sub_100233D0(a5) && (v26 != 6 || *((_BYTE *)sub_100E99F0(a5) + 306) != 6) )
    v33 = 1;
  if ( v32 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 40))(a3)
    || v33 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2)
    || v32 && v33
    || (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 280))(a2) && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 280))(a3)
    || !v25
    || !v22 )
  {
    goto LABEL_5;
  }
  if ( ((v28 | v27) & 4) != 0 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) || (v27 & 4) != 0 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3) || (v28 & 4) != 0 )
        goto LABEL_5;
      --this[86];
      return 1;
    }
LABEL_8:
    --this[86];
    return 1;
  }
  if ( (v28 & 8) != 0 && v22 != 6 && v22 != 1 && v26 != 6
    || (v27 & 8) != 0 && v25 != 6 && v25 != 1 && v24 != 6
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
          dword_106B3CDC,
          a4[105],
          a5[105]) )
  {
    goto LABEL_5;
  }
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 160))(a2);
  if ( (v18 & (*(int (__thiscall **)(_DWORD *))(*a5 + 636))(a5)) != 0
    && (v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 160))(a3),
        (v19 & (*(int (__thiscall **)(_DWORD *))(*a4 + 636))(a4)) != 0)
    && !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106BAFFC + 12))(
          dword_106BAFFC,
          a4,
          a5) )
  {
    v20 = (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_106BAFFC + 12))(dword_106BAFFC, a2, a3) == 0;
    v21 = this;
    if ( v20 )
    {
      --this[86];
      return 1;
    }
  }
  else
  {
    v21 = this;
  }
  --v21[86];
  return 0;
}
