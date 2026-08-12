char __thiscall sub_10060390(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // eax
  int *v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  unsigned __int16 v7; // cx
  int v8; // edi
  _WORD *v9; // eax
  int v10; // edx
  int v11; // eax
  int v13; // [esp+Ch] [ebp-104h]
  int v14; // [esp+10h] [ebp-100h]
  _DWORD v15[54]; // [esp+14h] [ebp-FCh] BYREF
  int v16; // [esp+ECh] [ebp-24h] BYREF
  int v17; // [esp+F0h] [ebp-20h]
  _DWORD *v18; // [esp+F4h] [ebp-1Ch]
  int v19; // [esp+F8h] [ebp-18h]
  const char *v20; // [esp+FCh] [ebp-14h]
  char *String2; // [esp+100h] [ebp-10h]
  const char **v22; // [esp+104h] [ebp-Ch]
  unsigned __int16 v23[3]; // [esp+108h] [ebp-8h] BYREF
  char v24; // [esp+10Fh] [ebp-1h] BYREF

  v1 = this;
  v18 = this;
  v14 = 1;
  v15[35] = 1;
  v13 = 2;
  v15[2] = 2;
  v15[6] = 2;
  v15[10] = 2;
  v15[14] = 2;
  v15[18] = 2;
  v15[22] = 2;
  v15[25] = 69;
  v15[26] = 2;
  v15[30] = 2;
  v15[53] = 69;
  v15[37] = 282;
  v15[41] = 282;
  v15[45] = 282;
  v2 = (int)(this + 4);
  v15[0] = 0;
  v15[1] = 5;
  v15[3] = 76;
  v15[4] = 0;
  v15[5] = 5;
  v15[7] = 6;
  v15[8] = 0;
  v15[9] = 8;
  v15[11] = 11;
  v15[12] = 0;
  v15[13] = 13;
  v15[15] = 7;
  v15[16] = 0;
  v15[17] = 9;
  v15[19] = 12;
  v15[20] = 0;
  v15[21] = 14;
  v15[23] = 66;
  v15[24] = 0;
  v15[27] = 269;
  v15[28] = 0;
  v15[29] = 270;
  v15[31] = 264;
  v15[32] = 0;
  v15[33] = 265;
  v15[34] = 3;
  v15[36] = 0;
  v15[38] = 3;
  v15[39] = 76;
  v15[40] = 0;
  v15[42] = 3;
  v15[43] = 5;
  v15[44] = 0;
  v15[46] = 3;
  v15[47] = 17;
  v15[48] = 0;
  v15[49] = 19;
  v15[50] = 3;
  v15[51] = 66;
  v15[52] = 0;
  sub_1005E840((int)(this + 4));
  v3 = sub_100CF460(v1[1]);
  if ( !v3 || (String2 = *(char **)(v3 + 92)) == 0 )
    String2 = (char *)String;
  v22 = (const char **)v15;
  v19 = 14;
  do
  {
    if ( !*v22 || (v4 = (int *)_stricmp(*v22, String2)) == 0 )
    {
      v5 = (_DWORD *)v1[1];
      v20 = v22[1];
      if ( sub_10022CA0(v5, (int)v20)
        || (v6 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(*(_DWORD *)v1[1] + 936))(v1[1], v20, 0),
            LOBYTE(v4) = sub_10022CA0((_DWORD *)v1[1], v6),
            (_BYTE)v4) )
      {
        v16 = (unsigned int)*(v22 - 1) | ((_DWORD)*(v22 - 2) << 16);
        v17 = (int)v20;
        sub_1005E130((_WORD *)v2, (int)&v16, v23, &v24);
        v7 = sub_10243CD0(v2);
        v8 = 16 * v7;
        v9 = (_WORD *)(v8 + *(_DWORD *)(v2 + 4));
        v9[2] = v23[0];
        v9[1] = -1;
        *v9 = -1;
        v9[3] = 0;
        if ( v23[0] == 0xFFFF )
        {
          *(_WORD *)(v2 + 16) = v7;
        }
        else
        {
          v10 = *(_DWORD *)(v2 + 4);
          if ( v24 )
            *(_WORD *)(v10 + 16 * v23[0]) = v7;
          else
            *(_WORD *)(v10 + 16 * v23[0] + 2) = v7;
        }
        sub_1005E900(v2, v7);
        v11 = *(_DWORD *)(v2 + 4);
        ++*(_WORD *)(v2 + 18);
        v4 = (int *)(v11 + v8 + 8);
        v1 = v18;
        if ( v4 )
        {
          *v4 = v16;
          v4[1] = v17;
        }
      }
    }
    v22 += 4;
    --v19;
  }
  while ( v19 );
  return (char)v4;
}
