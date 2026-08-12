int __userpurge sub_102F6730@<eax>(float *a1@<ecx>, double a2@<st0>, int a3)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  double v11; // st7
  double v12; // st7
  int v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h]

  if ( (*(_BYTE *)(a3 + 64) & 9) != 0 )
    return 0;
  if ( sub_101172D0() )
  {
    v5 = *(_DWORD *)(a3 + 44);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          v8 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] == v7 ? *v6 : 0;
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 284))(v8) )
            return 0;
        }
      }
    }
  }
  v9 = sub_10396110((int)a1, a3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
    {
      if ( !sub_10023D10(a1, 74) && !sub_10023D10(a1, 10) && (*(_BYTE *)(a3 + 64) & 0x84) != 0 )
      {
        v13 = sub_1001E870((_DWORD *)a3);
        v10 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1868))(a1);
        v11 = sub_10077680(v10, v13, 0);
        if ( -3.402823466385289e38 == v11 || (a2 = *(float *)(dword_106B31C8 + 12) - v11, a2 > 3.0) )
        {
          (*(void (__thiscall **)(float *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 2344))(
            a1,
            "TLK_DARKNESS_UNKNOWN_WOUND",
            0,
            0,
            0,
            0);
          a2 = RandomFloat(3.0, 5.0) + *(float *)(dword_106B31C8 + 12);
          a1[1432] = a2;
        }
      }
    }
    if ( (*(_BYTE *)(a3 + 64) & 0x40) != 0 )
    {
      if ( *((_DWORD *)a1 + 1458) == 3 )
      {
        if ( sub_100C4E90(a1, 146) || sub_100C4E90(a1, 149) )
          return v9;
        sub_100C7570((volatile signed __int32 *)a1, 149, COERCE_FLOAT(1), 1);
        sub_10019B30(a1, 149);
        v12 = a2 + *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        if ( sub_100C4E90(a1, 146) || sub_100C4E90(a1, 148) )
          return v9;
        sub_100C7570((volatile signed __int32 *)a1, 148, COERCE_FLOAT(1), 1);
        sub_10019B30(a1, 148);
        v12 = a2 + *(float *)(dword_106B31C8 + 12);
      }
      v14 = v12 + 0.5;
      sub_100B8D50(a1 + 690, v14);
    }
  }
  return v9;
}
