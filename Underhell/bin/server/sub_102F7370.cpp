void __usercall sub_102F7370(int a1@<ecx>, double a2@<st0>)
{
  float *v3; // edi
  int v4; // eax
  bool v5; // bl
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // eax
  double v17; // st7
  const char *v18; // eax
  float v19; // [esp+4h] [ebp-10h]

  sub_10397340();
  if ( sub_10023D10((_DWORD *)a1, 50) )
    sub_10023E00((char *)a1, 53);
  sub_10023E00((char *)a1, 85);
  sub_10023E00((char *)a1, 83);
  sub_10023E00((char *)a1, 84);
  v3 = (float *)sub_1025FB50(1);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)v3 + 1264))(v3);
    v5 = v4 != 0;
    if ( (v4 != 0) != *(_BYTE *)(a1 + 5721) )
    {
      if ( v4 )
      {
        sub_10023CB0((char *)a1, 83);
      }
      else
      {
        a2 = 15.0;
        if ( v3[1271] >= 15.0 )
          sub_10023CB0((char *)a1, 84);
        else
          sub_10023CB0((char *)a1, 85);
      }
      *(_BYTE *)(a1 + 5721) = v5;
    }
  }
  if ( *(_DWORD *)(a1 + 2324) == 3 )
    sub_102F5390((char *)a1, a2);
  v6 = *(_DWORD *)(a1 + 5692);
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 2] == v8 ? (_DWORD *)*v7 : 0;
        if ( !sub_102F6A60(a1, v9) )
        {
          sub_10023E00((char *)a1, 79);
          sub_10023E00((char *)a1, 81);
          sub_10023CB0((char *)a1, 80);
          sub_10023CB0((char *)a1, 82);
          *(_DWORD *)(a1 + 5692) = -1;
        }
      }
    }
  }
  v10 = *(_DWORD *)(a1 + 5692);
  if ( v10 == -1
    || off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 2] != v10 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 1] )
  {
    sub_102F72F0(a1);
  }
  v11 = *(_DWORD *)(a1 + 5692);
  if ( v11 != -1
    && (v12 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 1],
        v13 = v11 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 2] == v13)
    && *v12 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5692) & 0xFFF) + 2] == v13 )
      v14 = (_DWORD *)*v12;
    else
      v14 = 0;
    if ( sub_102F6B90((void *)a1, v14) )
    {
      sub_10023CB0((char *)a1, 81);
      sub_10023E00((char *)a1, 82);
    }
    else
    {
      sub_10023CB0((char *)a1, 82);
      sub_10023E00((char *)a1, 81);
    }
    sub_10023CB0((char *)a1, 79);
    sub_10023E00((char *)a1, 80);
  }
  else
  {
    sub_10023CB0((char *)a1, 80);
    sub_10023E00((char *)a1, 79);
  }
  if ( sub_10023D10((_DWORD *)a1, 53) )
  {
    v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1460))(a1, 1048351);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1088))(a1) )
    {
      v16 = *(_DWORD *)(v15 + 16);
      if ( (v16 & 1) != 0 && (v16 & 0x2000000) != 0 )
      {
        if ( *(_DWORD *)(a1 + 5832) == 3 )
        {
          if ( !sub_100C4E90((_DWORD *)a1, 147) && !sub_100C4E90((_DWORD *)a1, 149) )
          {
            sub_100C7570((volatile signed __int32 *)a1, 147, COERCE_FLOAT(1), 1);
            sub_10019B30((_DWORD *)a1, 147);
            v17 = a2 + *(float *)(dword_106B31C8 + 12);
LABEL_47:
            v19 = v17 + 0.5;
            sub_100B8D50((float *)(a1 + 2760), v19);
          }
        }
        else if ( !sub_100C4E90((_DWORD *)a1, 146) && !sub_100C4E90((_DWORD *)a1, 148) )
        {
          sub_100C7570((volatile signed __int32 *)a1, 146, COERCE_FLOAT(1), 1);
          sub_10019B30((_DWORD *)a1, 146);
          v17 = a2 + *(float *)(dword_106B31C8 + 12);
          goto LABEL_47;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x400) != 0
    && *(_DWORD *)(a1 + 2324) != 4
    && !sub_10295590((_BYTE *)(a1 + 5144))
    && !*(_BYTE *)(a1 + 5412) )
  {
    v18 = *(const char **)(dword_106B31C8 + 60);
    if ( !v18 )
      v18 = String;
    Warning(
      "Removed FL_FLY from Alyx, who wasn't running a script or actbusy. Time %.2f, map %s.\n",
      *(float *)(dword_106B31C8 + 12),
      v18);
    sub_100EA9A0((int *)a1, 1024);
  }
}
