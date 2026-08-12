char __thiscall sub_10041300(_WORD *this, char a2, int a3, int a4, int a5)
{
  char result; // al

  switch ( sub_101E1B20(a5) )
  {
    case 2:
      if ( a2 )
        goto LABEL_5;
      return sub_10041270(this, a3, a4, a5);
    case 5:
      if ( *(_BYTE *)(a3 + 64) )
        goto LABEL_5;
      goto LABEL_12;
    case 7:
      if ( !*(_BYTE *)(a3 + 64) )
        goto LABEL_12;
      if ( a2 )
LABEL_5:
        result = 1;
      else
        result = (*(int (__thiscall **)(_WORD *, int, int, int))(*(_DWORD *)this + 768))(this, a3, a4, a5);
      break;
    case 10:
      if ( a2 )
      {
        if ( (unsigned __int8)sub_101E1CC0(a5) )
          sub_1003F2F0(this, (int *)a3);
      }
      goto LABEL_5;
    default:
LABEL_12:
      result = 0;
      break;
  }
  return result;
}
