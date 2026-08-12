_DWORD *__thiscall sub_10275CE0(int this, int a2)
{
  _DWORD *result; // eax
  _BYTE *v5; // ecx
  bool v6; // bl
  int v7; // edx
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  _BYTE *v12; // ecx
  int v13; // edx
  char v14; // [esp+2Bh] [ebp-9h]
  int v15; // [esp+2Ch] [ebp-8h] BYREF
  int v16; // [esp+30h] [ebp-4h] BYREF
  char v17; // [esp+38h] [ebp+4h]

  nullsub_5(a2);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
    || (v17 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84)) )
  {
    v17 = 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (v14 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
  {
    v14 = 1;
  }
  result = (_DWORD *)(*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(
                       dword_1047CA68,
                       &v15,
                       &v16);
  v5 = *(_BYTE **)(this + 268);
  v6 = (v5[208] & 8) != 0;
  if ( a2 == 107 )
  {
    result = sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &v15, &v16);
    if ( v15 >= 20 )
    {
      v7 = *(_DWORD *)(this + 268);
      *(_DWORD *)(this + 272) = *(_DWORD *)(this + 208);
      if ( (*(_BYTE *)(v7 + 208) & 0x20) != 0 )
      {
        v8 = dword_1047CA68;
        v9 = *(_DWORD *)dword_1047CA68;
        v10 = (**(int (__thiscall ***)(int))this)(this);
        (*(void (__thiscall **)(int, int))(v9 + 8))(v8, v10);
      }
      v11 = *(_DWORD *)(this + 268);
      if ( v14 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 836))(v11, *(_DWORD *)(this + 208));
      }
      else if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 832))(v11, *(_DWORD *)(this + 208))
             || v17 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 832))(
               *(_DWORD *)(this + 268),
               *(_DWORD *)(this + 208))
          && v17 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 824))(
            *(_DWORD *)(this + 268),
            *(_DWORD *)(this + 208));
        }
        else
        {
          LOBYTE(v13) = v17 == 0;
          (*(void (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
            *(_DWORD *)(this + 268),
            *(_DWORD *)(this + 208),
            v13,
            1,
            1);
        }
      }
      else if ( (unsigned __int8)sub_10273510(this) )
      {
        v12 = *(_BYTE **)(this + 268);
        if ( (v12[208] & 0x20) != 0 )
          (*(void (__thiscall **)(_BYTE *, _DWORD, int, int, int))(*(_DWORD *)v12 + 820))(
            v12,
            *(_DWORD *)(this + 208),
            1,
            1,
            1);
      }
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 832))(
                           *(_DWORD *)(this + 268),
                           *(_DWORD *)(this + 208));
      *(_BYTE *)(this + 276) = (_BYTE)result;
    }
    else if ( v6 )
    {
      return (_DWORD *)sub_10275580(this, *(_BYTE *)(this + 240) == 0);
    }
  }
  else if ( a2 == 108 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v5 + 832))(v5, *(_DWORD *)(this + 208)) )
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
        *(_DWORD *)(this + 268),
        *(_DWORD *)(this + 208),
        1,
        1,
        1);
    return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 268) + 968))(
                       *(_DWORD *)(this + 268),
                       *(_DWORD *)(this + 208),
                       v15,
                       v16);
  }
  return result;
}
