void __usercall sub_10027450(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // esi
  int v9; // ebx
  _DWORD *v10; // eax
  float *v11; // edi
  float *v12; // eax
  int v13; // ebx
  double v14; // st7
  int v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  double v19; // st7
  int v20; // [esp-Ch] [ebp-20h]
  float v22[3]; // [esp+4h] [ebp-10h] BYREF
  float v23; // [esp+10h] [ebp-4h]

  v3 = a1[647];
  v4 = *(_DWORD *)(v3 + 12);
  if ( v4 != 3 && v4 != 1 && sub_1007E000(v3) == 1 )
  {
    v5 = sub_1007E670(a1[647]);
    v6 = a1[605];
    if ( v6 == -1 || off_1061BE18[4 * (a1[605] & 0xFFF) + 2] != a1[605] >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (a1[605] & 0xFFF) + 1];
    if ( v7 == v5 )
    {
      if ( (sub_1007E010(a1[647]) & 2) != 0 )
      {
        if ( !sub_10022C40(a1) )
          goto LABEL_20;
        v9 = a1[647];
        v10 = (_DWORD *)sub_10022C40(a1);
        v11 = (float *)sub_10019640(v10);
        v12 = (float *)sub_1007DD50(v9, a2);
        v13 = *a1;
        v22[0] = *v12 - *v11;
        v22[1] = v12[1] - v11[1];
        v14 = v12[2] - v11[2];
        v15 = a1[647];
        v22[2] = v14;
        v23 = sub_100D7A40(v22);
        v16 = (_DWORD *)sub_10022C40(a1);
        v17 = sub_10019640(v16);
        v20 = sub_1007DD50(v15, v17);
        v18 = sub_10022C40(a1);
        v19 = ((double (__thiscall *)(_DWORD *, int, int, int))*(_DWORD *)(v13 + 1520))(a1, v18, 1, v20);
        if ( v19 < v23 )
        {
LABEL_20:
          if ( !(unsigned __int8)sub_100846A0(0, 0) )
            (*(void (__thiscall **)(_DWORD *, int))(*a1 + 1312))(a1, 11);
        }
      }
    }
    else
    {
      v8 = a1[647];
      if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
        (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v8 + 24))(v8, 0, &flt_106F1CA8);
      else
        (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)v8 + 24))(
          v8,
          off_1061BE18[4 * (v6 & 0xFFF) + 1],
          &flt_106F1CA8);
    }
  }
}
