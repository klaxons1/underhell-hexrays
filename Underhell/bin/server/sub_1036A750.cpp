int __thiscall sub_1036A750(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  float *v5; // edi
  double v6; // st7
  float *v7; // edi
  _DWORD *v8; // eax
  float *v9; // eax
  double v10; // st7
  float v11[3]; // [esp+8h] [ebp-Ch] BYREF

  switch ( a2 )
  {
    case 4:
      result = 90 - sub_10022CA0(this, dword_106E8120);
      break;
    case 18:
      if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) || !sub_10023D10(this, 10) )
        goto LABEL_13;
      v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v5 = (float *)(sub_10019640(v4) + 2);
      v6 = *v5 - *((float *)sub_10019640(this) + 2);
      if ( v6 < 128.0 )
        goto LABEL_12;
      if ( v6 > 512.0 )
        goto LABEL_12;
      v7 = (float *)sub_10019640(this);
      v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v9 = (float *)sub_10019640(v8);
      v11[0] = *v9 - *v7;
      v11[1] = v9[1] - v7[1];
      v10 = v9[2] - v7[2];
      v11[2] = v10;
      sub_10018D40(v11);
      if ( v10 > 384.0 )
LABEL_12:
        result = 75;
      else
        result = 97;
      break;
    case 31:
      result = 5;
      break;
    case 43:
      result = 88;
      break;
    case 78:
      result = 98;
      break;
    default:
LABEL_13:
      result = sub_10069910(this, a2);
      break;
  }
  return result;
}
