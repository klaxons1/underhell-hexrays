int __userpurge sub_102F76A0@<eax>(float *a1@<ecx>, double a2@<st0>, int a3)
{
  int v3; // edi
  int v6; // edi
  _DWORD *v7; // eax
  unsigned int *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // eax

  v3 = a3;
  switch ( a3 )
  {
    case 1:
      return 110;
    case 4:
      return 108;
    case 6:
      return 111;
    case 7:
      return 106;
    case 12:
      if ( sub_10023D10(a1, 35) || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 2168))(a1) )
        return sub_10397E20(v3);
      return 107;
    case 32:
      if ( !sub_10023D10(a1, 63) )
        return sub_10397E20(v3);
      return 83;
    case 40:
    case 91:
      return 81;
    case 43:
      if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) )
        return 105;
      v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 2168))(a1) && *(int *)(v6 + 220) > 15 )
      {
        sub_100271C0(a1, (float *)v6);
        if ( a2 > 540.0 && (*(_BYTE *)(v6 + 256) & 1) != 0 )
          (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 2180))(a1);
      }
      if ( ((*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 2168))(a1)
         || sub_102F3560(a1) && !sub_10023D10(a1, 18))
        && sub_102F6DD0((int)a1, a2, v6) )
      {
        (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 2172))(a1);
        return 105;
      }
      else
      {
        (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 2176))(a1);
        return 105;
      }
    case 50:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
        return 51;
      v7 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1868))(a1);
      v8 = sub_10077AB0(v7, (unsigned __int8 *)&a3);
      if ( !v8 )
        return 51;
      while ( 1 )
      {
        v9 = sub_1026A890(v8);
        v10 = sub_100D7680(v9);
        v11 = v10;
        if ( v10 )
        {
          if ( (*(int (__thiscall **)(int, float *))(*(_DWORD *)v10 + 1080))(v10, a1) == 1
            && ((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1672))(v11) & 0x66000) != 0 )
          {
            break;
          }
        }
        v12 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1868))(a1);
        v8 = (unsigned int *)sub_10077340(v12, (unsigned __int8 *)&a3);
        if ( !v8 )
          return 51;
      }
      return 50;
    case 77:
      if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) || !sub_10023D10(a1, 10) || !sub_100CF460(a1) )
        return sub_10397E20(v3);
      return 43;
    case 78:
      return 112;
    default:
      return sub_10397E20(v3);
  }
}
