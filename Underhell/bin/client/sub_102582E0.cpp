void __thiscall sub_102582E0(int this, int a2)
{
  bool v3; // bl
  char v4; // al
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  char v9; // [esp+18h] [ebp-2h]
  char v10; // [esp+19h] [ebp-1h]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (v10 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
  {
    v10 = 1;
  }
  v3 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
    || (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
  {
    v4 = 1;
  }
  v9 = 0;
  if ( v3 )
  {
    switch ( a2 )
    {
      case 13:
      case 34:
      case 72:
        goto LABEL_19;
      case 74:
      case 76:
        goto LABEL_13;
      case 75:
      case 77:
        goto LABEL_20;
      default:
        goto LABEL_17;
    }
  }
  if ( v4 )
  {
    v9 = 1;
LABEL_25:
    *(_DWORD *)(this + 308) = *(_DWORD *)(this + 296);
    if ( v9 )
      sub_10236CD0((void *)this, a2);
  }
  else
  {
    switch ( a2 )
    {
      case '@':
      case 'C':
      case 'F':
      case 'O':
      case 'P':
LABEL_17:
        v9 = 1;
        goto LABEL_25;
      case 'I':
        if ( v10 )
LABEL_19:
          (*(void (__thiscall **)(int))(*(_DWORD *)this + 772))(this);
        goto LABEL_25;
      case 'J':
LABEL_13:
        sub_10257640((_DWORD *)this);
        goto LABEL_25;
      case 'K':
LABEL_20:
        sub_10257CC0((_DWORD *)this);
        goto LABEL_25;
      case 'L':
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 128))(*(_DWORD *)(this + 212)) )
        {
          v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 788))(*(_DWORD *)(this + 212));
          v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 772))(*(_DWORD *)(this + 212));
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 768))(*(_DWORD *)(this + 212), v6 - v5 - 1);
        }
        goto LABEL_25;
      case 'M':
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 128))(*(_DWORD *)(this + 212)) )
        {
          v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 788))(*(_DWORD *)(this + 212));
          v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 772))(*(_DWORD *)(this + 212));
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 768))(*(_DWORD *)(this + 212), v8 + v7 + 1);
        }
        goto LABEL_25;
      default:
        return;
    }
  }
}
