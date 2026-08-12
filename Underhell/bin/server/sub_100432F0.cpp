char __fastcall sub_100432F0(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // esi
  char result; // al
  char v5; // al
  _DWORD v6[12]; // [esp+10h] [ebp-30h] BYREF

  v3 = a1;
  switch ( *(_DWORD *)a3 )
  {
    case 9:
    case 0xA:
      if ( sub_10022C40(a1) )
      {
        sub_10042370(v6, 1, -1, -1.0, 0, dword_10601B94);
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(*(_DWORD *)v3[647] + 20))(v3[647], v6, 0) )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v3 + 1312))(v3, 11);
          sub_10081C10(v3[647]);
        }
        result = sub_10027CD0(v3, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v3 + 1312))(v3, 1);
        result = sub_10027CD0(v3, 0);
      }
      break;
    case 0x2D:
      v5 = sub_1007F110(*(float *)(a3 + 4), (int)(a1 + 916));
      a1 = v3;
      if ( v5 )
        goto LABEL_2;
      result = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 1312))(v3, 22);
      break;
    case 0x30:
      sub_1007DD70(1);
      result = sub_10027CD0(v3, 0);
      break;
    case 0x42:
LABEL_2:
      result = sub_10027CD0(a1, 0);
      break;
    default:
      result = sub_10046510((int)a1, a3);
      break;
  }
  return result;
}
