int __thiscall sub_100F60B0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  unsigned __int16 v7; // ax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  int result; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  bool v17; // bl
  int v18; // [esp+8h] [ebp-8h]
  unsigned __int16 v19; // [esp+20h] [ebp+10h]
  bool v20; // [esp+23h] [ebp+13h]
  int v21; // [esp+24h] [ebp+14h]
  int v22; // [esp+24h] [ebp+14h]

  ++this[44];
  if ( a4 && a5 )
  {
    v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 76))(a2);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 76))(a3);
    if ( a4 == a5 )
    {
      if ( ((v19 | v7) & 0x8000) == 0 )
      {
        v21 = *(_DWORD *)dword_10436248;
        v8 = sub_10034480((__int16 *)a4);
        v9 = (_DWORD *)(*(int (__thiscall **)(int, int))(v21 + 44))(dword_10436248, v8);
        v10 = v9;
        if ( v9 )
        {
          v22 = *v9;
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 84))(a3);
          v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 84))(a2, v11);
          LOBYTE(result) = (*(int (__thiscall **)(_DWORD *, _DWORD))(v22 + 8))(v10, v12);
          --this[44];
          return (unsigned __int8)result;
        }
        goto LABEL_33;
      }
    }
    else if ( (!dword_10412D50
            || (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10412D50 + 112))(
                 dword_10412D50,
                 *(_DWORD *)(a4 + 736),
                 *(_DWORD *)(a5 + 736)))
           && (((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 76))(a2) & 8) == 0
            || ((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 76))(a3) & 8) == 0
            || *(_DWORD *)(dword_10435EAC + 48)) )
    {
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 160))(a2);
      if ( (v14 & (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 492))(a5)) != 0 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 160))(a3);
        if ( (v15 & (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 492))(a4)) != 0
          && !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1043625C + 12))(
                dword_1043625C,
                a4,
                a5)
          && !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1043625C + 12))(
                dword_1043625C,
                a2,
                a3) )
        {
          v16 = *(unsigned __int8 *)(a4 + 316);
          v20 = v16 == 7;
          v18 = *(unsigned __int8 *)(a5 + 316);
          if ( sub_1000EF90((_DWORD *)a4) && (v16 != 6 || *((_BYTE *)sub_1000F870((_DWORD *)a4) + 316) != 6) )
            v20 = 1;
          v17 = sub_1000EF90((_DWORD *)a5) && (v18 != 6 || *((_BYTE *)sub_1000F870((_DWORD *)a5) + 316) != 6)
             || v18 == 7;
          if ( (!v20 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 40))(a3))
            && (!v17 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2))
            && (!v20 || !v17)
            && (!(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 280))(a2)
             || !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 280))(a3)) )
          {
LABEL_33:
            --this[44];
            return 1;
          }
        }
      }
    }
    --this[44];
    return 0;
  }
  else
  {
    --this[44];
    return 1;
  }
}
