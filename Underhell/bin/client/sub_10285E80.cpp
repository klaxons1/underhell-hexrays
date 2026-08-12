char __thiscall sub_10285E80(void *this, int a2)
{
  int v3; // ebx
  int (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // ebp
  unsigned __int8 (__thiscall **v13)(int, int); // esi
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // esi
  _DWORD *v20; // eax
  _DWORD *v21; // ebp
  bool v22; // bl
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  int v25; // ebx
  void (__thiscall **v26)(int, int); // esi
  int v27; // eax
  void (__thiscall **v28)(void *, int, int); // esi
  int v29; // [esp+14h] [ebp-24h]
  int v30; // [esp+14h] [ebp-24h]
  int v31; // [esp+18h] [ebp-20h]
  char v32; // [esp+2Fh] [ebp-9h]
  int (__thiscall ***v33)(_DWORD, int); // [esp+30h] [ebp-8h]
  int v34; // [esp+34h] [ebp-4h]
  char v35; // [esp+3Ch] [ebp+4h]

  ++dword_10481AA8;
  sub_10237CE0((_DWORD *)this + 3, 0);
  v3 = 0;
  if ( a2 )
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 204))(dword_1047CA70, a2);
  v4 = 0;
  v35 = 0;
  v32 = 1;
  v33 = 0;
  while ( 2 )
  {
    v5 = v3 + 1;
    v34 = 999999;
    v6 = 0;
    if ( sub_10237130(*((int (__thiscall ****)(_DWORD))this + 4)) <= 0 )
      goto LABEL_17;
    while ( 1 )
    {
      v7 = sub_10237150(*((int (__thiscall ****)(void *, int, int))this + 4), v6);
      v8 = (int (__thiscall ***)(_DWORD, int))v7;
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 128))(v7)
          && ((unsigned __int8 (__thiscall *)(int (__thiscall ***)(_DWORD, int)))(*v8)[51])(v8)
          && ((int (__thiscall *)(int (__thiscall ***)(_DWORD, int)))(*v8)[17])(v8) )
        {
          break;
        }
      }
LABEL_13:
      if ( ++v6 >= sub_10237130(*((int (__thiscall ****)(_DWORD))this + 4)) )
        goto LABEL_16;
    }
    v9 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD, int)))(*v8)[17])(v8);
    if ( v9 != v5 )
    {
      if ( v9 > v5 && v9 < v34 )
      {
        v34 = v9;
        v33 = v8;
      }
      goto LABEL_13;
    }
    v33 = v8;
LABEL_16:
    v4 = v33;
LABEL_17:
    if ( !v32 )
    {
      if ( !v4 )
        goto LABEL_43;
      goto LABEL_28;
    }
    if ( v4 )
    {
LABEL_28:
      v18 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD, int)))**v4)(v4);
      sub_10237CE0((_DWORD *)this + 3, v18);
      (*v4)[12](v4, 1);
      v35 = 1;
      v19 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD, int)))**v4)(v4);
      if ( !v19 )
        goto LABEL_46;
      v20 = (_DWORD *)sub_10229D00(32);
      if ( v20 )
        v21 = sub_10229D20(v20, (int)"CanBeDefaultButton");
      else
        v21 = 0;
      v22 = 0;
      if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_1047CA70 + 184))(
             dword_1047CA70,
             v19,
             v21) )
      {
        v22 = sub_1022A800(v21, "result", 0) == 1;
      }
      sub_1022AF00(v21);
      if ( v22 )
      {
        v28 = (void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 40);
        v30 = (**v33)(v33, 1);
        (*v28)(this, v30, v31);
      }
      else
      {
LABEL_46:
        if ( sub_10237CC0((_DWORD *)this + 1) )
        {
          v29 = sub_10237CC0((_DWORD *)this + 1);
          (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 40))(this, v29, 1);
        }
        else
        {
          (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 40))(this, 0, 1);
          if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 4) + 148))(*((_DWORD *)this + 4)) )
          {
            v23 = (_DWORD *)sub_10229D00(32);
            if ( v23 )
              v24 = sub_10229D20(v23, (int)"FindDefaultButton");
            else
              v24 = 0;
            v25 = dword_1047CA74;
            v26 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
            v27 = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD))(**((_DWORD **)this + 4) + 148))(
                    *((_DWORD *)this + 4),
                    v24,
                    0,
                    0.0);
            (*v26)(v25, v27);
            --dword_10481AA8;
            return 1;
          }
        }
      }
LABEL_43:
      --dword_10481AA8;
      return v35;
    }
    if ( *((_BYTE *)this + 20)
      || !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 4) + 148))(*((_DWORD *)this + 4)) )
    {
      goto LABEL_25;
    }
    v10 = *((_DWORD *)this + 4);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 24))(dword_1047CA6C);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 148))(v10) == v11
      || dword_10481AA8 >= 15
      || (v12 = dword_1047CA70,
          v13 = (unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 196),
          v14 = *((_DWORD *)this + 4),
          v15 = (**(int (***)(void))v14)(),
          v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 148))(v14, v15),
          !(*v13)(v12, v16)) )
    {
      v4 = v33;
LABEL_25:
      v3 = 0;
      v32 = 0;
      continue;
    }
    break;
  }
  (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 40))(this, 0, 1);
  --dword_10481AA8;
  return 1;
}
