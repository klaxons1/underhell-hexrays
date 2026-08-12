int __userpurge sub_1038E6A0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int result; // eax
  float *v6; // edi
  _DWORD *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5

  switch ( a4 )
  {
    case 4:
      result = 89;
      break;
    case 6:
      result = sub_100697A0((_DWORD *)a1, 118, 0) ? 6 : 118;
      break;
    case 17:
      if ( *(_DWORD *)(a1 + 3624) )
        goto LABEL_28;
      result = 91;
      break;
    case 31:
      if ( sub_10023D10((_DWORD *)a1, 21) && (sub_103896B0(a1, 0) || sub_103896B0(a1, 1)) )
        result = 43;
      else
        result = sub_10023D10((_DWORD *)a1, 4) ? 51 : 77;
      break;
    case 35:
    case 92:
      if ( !sub_1038A110((void *)a1) || (result = sub_1038AD40(a1, a2, a3)) == 0 )
        result = 92;
      break;
    case 43:
      if ( *(_BYTE *)(a1 + 4180) )
      {
        if ( !sub_100CF660((_DWORD *)a1, (int)"weapon_smg1", 0) )
          goto LABEL_28;
        if ( !sub_1038A110((void *)a1) || (result = sub_1038E430((_DWORD *)a1)) == 0 )
          result = sub_1038C420(a1) + 99;
      }
      else
      {
        result = 93;
      }
      break;
    case 95:
      if ( !sub_1001ED60((float *)(a1 + 4204)) || !*(_DWORD *)(dword_106EA044 + 48) )
        goto LABEL_28;
      if ( !sub_100CF660((_DWORD *)a1, (int)"weapon_pistol", 0) )
      {
        *(float *)(a1 + 4204) = *(float *)(dword_106B31C8 + 12) + 99999.0;
        goto LABEL_28;
      }
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
        goto LABEL_28;
      v6 = (float *)sub_10019640((_DWORD *)a1);
      v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v8 = (float *)sub_10019640(v7);
      v9 = *v8 - *v6;
      v10 = v8[1] - v6[1];
      v11 = v8[2] - v6[2];
      if ( v9 * v9 + v10 * v10 + v11 * v11 <= 90000.0 || !sub_1004AFF0((_DWORD *)a1, 8) )
        goto LABEL_28;
      sub_100925F0((float *)(a1 + 4204), 3.0, 7.0);
      result = 96;
      break;
    default:
LABEL_28:
      result = sub_102FB410((_DWORD *)a1, a4);
      break;
  }
  return result;
}
