int __thiscall sub_10373130(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax

  switch ( a2 )
  {
    case 9:
      if ( *(_DWORD *)(dword_106E91D4 + 48) )
        goto LABEL_17;
      result = 102;
      break;
    case 12:
      result = 94;
      break;
    case 36:
      result = 96;
      break;
    case 41:
      result = 90;
      break;
    case 43:
      result = 88;
      break;
    case 44:
    case 89:
      if ( a2 == 44 )
        Msg("HUNTER IGNORING SQUAD SLOTS\n");
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( v4 && ((v5 = *(_DWORD *)(v4 + 92), v5 == dword_106E8514) || v5 == dword_106E8510) )
        result = 110;
      else
        result = 89;
      break;
    case 99:
      if ( !*(_DWORD *)(dword_106E91D4 + 48) )
        goto LABEL_17;
      result = 1;
      break;
    default:
LABEL_17:
      result = sub_102FB410(this, a2);
      break;
  }
  return result;
}
