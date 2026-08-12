int __thiscall sub_10244860(void *this, int a2, char a3)
{
  int v3; // edi
  int result; // eax
  int (__thiscall ***v6)(_DWORD); // eax
  int (__thiscall ***v7)(void *, int, int); // eax
  char *v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v3 = a2;
  if ( !*(_BYTE *)a2 )
    return 0;
  v8 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 2));
  v6 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
  v7 = (int (__thiscall ***)(void *, int, int))sub_10239950(v6, v8, 1);
  if ( !v7 )
    return 0;
  sub_10236250(v7, (int)&a2, (int)&v9, (int)&v10, (int)&v11);
  switch ( *(_DWORD *)(v3 + 4) )
  {
    case 1:
      if ( !a3 )
        goto LABEL_25;
      return (a2 + v10) / 2;
    case 2:
      if ( a3 )
        goto LABEL_8;
      goto LABEL_25;
    case 3:
      if ( a3 )
        goto LABEL_10;
      result = (v9 + v11) / 2;
      break;
    case 4:
      if ( a3 )
        return (a2 + v10) / 2;
      else
        return (v11 + v9) / 2;
    case 5:
      if ( a3 )
        return a2 + v10;
      else
        return (v9 + v11) / 2;
    case 6:
      if ( a3 )
LABEL_10:
        result = a2;
      else
        result = v11 + v9;
      break;
    case 7:
      if ( a3 )
        result = (a2 + v10) / 2;
      else
        result = v9 + v11;
      break;
    case 8:
      if ( a3 )
LABEL_8:
        result = v10 + a2;
      else
        result = v9 + v11;
      break;
    default:
      result = a2;
      if ( !a3 )
LABEL_25:
        result = v9;
      break;
  }
  return result;
}
