int __thiscall sub_10054210(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  float *v7; // eax
  float v8; // [esp+8h] [ebp-1Ch]
  float v9[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( a2 > 100003 )
    return sub_1004B470((_DWORD **)this);
  if ( a2 == 100003 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
      return 100009;
    return sub_1004B470((_DWORD **)this);
  }
  switch ( a2 )
  {
    case 1:
      if ( sub_10054080(this)
        && !sub_10051020(this, *(float *)(this + 40), *(float *)(this + 44), *(_DWORD *)(this + 24)) )
      {
        goto LABEL_11;
      }
      if ( sub_10052150((_DWORD *)this) && !sub_100524D0((_DWORD *)this) )
        goto LABEL_8;
      goto LABEL_23;
    case 9:
    case 15:
      if ( !sub_10054080(this)
        || sub_10051020(this, *(float *)(this + 40), *(float *)(this + 44), *(_DWORD *)(this + 24)) )
      {
        return sub_1004B470((_DWORD **)this);
      }
      goto LABEL_11;
    case 17:
    case 36:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 300))(this) )
        return sub_1004B470((_DWORD **)this);
      return 100003;
    case 18:
      v5 = *(_DWORD *)(this + 4);
      if ( (*(_BYTE *)(v5 + 2716) & 2) == 0 )
        return sub_1004B470((_DWORD **)this);
      if ( !sub_10050FC0((_DWORD *)this) )
        return sub_1004B470((_DWORD **)this);
      v6 = (_DWORD *)sub_10050FC0((_DWORD *)this);
      v7 = (float *)sub_10019640(v6);
      v9[0] = *(float *)(v5 + 716) - *v7;
      v9[1] = *(float *)(v5 + 720) - v7[1];
      v9[2] = *(float *)(v5 + 724) - v7[2];
      if ( sub_100D7A40(v9) <= 500.0 )
        return sub_1004B470((_DWORD **)this);
      return 100002;
    case 20:
      if ( (sub_10054080(this) || *(_BYTE *)(this + 84))
        && !sub_10051020(this, *(float *)(this + 40), *(float *)(this + 44), *(_DWORD *)(this + 24)) )
      {
LABEL_11:
        result = 100004;
      }
      else if ( sub_10052150((_DWORD *)this) && !sub_100524D0((_DWORD *)this) )
      {
LABEL_8:
        result = 100006;
      }
      else
      {
        if ( !sub_1004FBA0((float *)(this + 92)) )
        {
          v8 = *(float *)(this + 56);
          v4 = sub_1026A890(this + 20);
          sub_10043F70((float *)(this + 92), v4, v8);
        }
        result = 100005;
      }
      break;
    case 21:
      return 100002;
    case 43:
      if ( !(unsigned __int8)sub_100B8D10(*(_DWORD *)(this + 4) + 2760) )
        return sub_1004B470((_DWORD **)this);
LABEL_23:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) != 0
             ? 100009
             : 100003;
      break;
    case 69:
      result = 100000;
      break;
    case 70:
      result = 100001;
      break;
    default:
      return sub_1004B470((_DWORD **)this);
  }
  return result;
}
