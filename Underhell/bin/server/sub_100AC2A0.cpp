bool __thiscall sub_100AC2A0(_DWORD *this, int a2)
{
  int v3; // esi
  bool result; // al
  _DWORD *v5; // esi
  _DWORD *v6; // eax

  switch ( a2 )
  {
    case 1:
      v3 = this[1];
      if ( *(_DWORD *)(v3 + 2324) != 3 && (*(_DWORD *)(v3 + 248) & 2) != 0 )
        goto LABEL_10;
      goto LABEL_4;
    case 2:
      v5 = (_DWORD *)this[1];
      if ( v5[581] != 3 && (v5[62] & 2) != 0 )
        goto LABEL_7;
      if ( v5[699] && (int)sub_100B16F0(1) > 1 )
LABEL_4:
        result = 1;
      else
LABEL_10:
        result = 0;
      break;
    case 3:
      v6 = (_DWORD *)this[1];
      if ( v6[581] != 3 && (v6[62] & 2) != 0 )
LABEL_7:
        result = 0;
      else
        result = v6[699] && (int)sub_100B16F0(1) > 1 && (unsigned __int8)sub_100B1BD0(this[1]);
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
