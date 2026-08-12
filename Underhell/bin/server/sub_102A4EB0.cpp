float *__usercall sub_102A4EB0@<eax>(_BYTE *a1@<ecx>, char a2@<dil>, double a3@<st0>)
{
  float *result; // eax
  int v5; // eax
  int v6; // eax
  volatile signed __int32 *v7; // edi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  double v11; // st7
  int v12; // eax
  int v13; // eax
  volatile signed __int32 *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  float *i; // edi
  int v31; // edx
  _DWORD *v32; // eax
  float v33; // [esp+Ch] [ebp-14h]
  float v35; // [esp+10h] [ebp-10h]
  unsigned __int8 v36[4]; // [esp+18h] [ebp-8h] BYREF
  int v37; // [esp+1Ch] [ebp-4h] BYREF

  result = (float *)sub_1029EC10((int)a1);
  if ( !a1[100] )
    return result;
  if ( *((_DWORD *)a1 + 4) == 2 )
  {
    v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
    v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100007);
    if ( sub_10023D10(*((_DWORD **)a1 + 1), v6) )
    {
      if ( !sub_102A3CC0((float *)a1, 1) )
        goto LABEL_10;
      v7 = (volatile signed __int32 *)*((_DWORD *)a1 + 1);
      v8 = (*(int (__thiscall **)(volatile signed __int32 *, int, int))(*v7 + 932))(v7, dword_106DB614, 1);
      v9 = sub_100C74B0(v7, v8, a2);
      v10 = (_DWORD *)*((_DWORD *)a1 + 1);
      sub_10019B30(v10, v9);
      v35 = a3 + a3 + *(float *)(dword_106B31C8 + 12);
      sub_10031BA0((int)v10, v35);
      sub_100B8D50((float *)(*((_DWORD *)a1 + 1) + 2760), *(float *)(*((_DWORD *)a1 + 1) + 1672));
      v11 = 1.5;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 1.5);
    }
    else
    {
      v12 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
      v13 = sub_1007DB30((_DWORD *)(v12 + 52), 100010);
      if ( !sub_10023D10(*((_DWORD **)a1 + 1), v13) || !sub_102A3CC0((float *)a1, 0) )
      {
LABEL_10:
        sub_102A3E00((int)a1);
        if ( sub_102A4880((int)a1) )
        {
          v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
          v17 = sub_1007DB30((_DWORD *)(v16 + 52), 100015);
          sub_10023CB0(*((char **)a1 + 1), v17);
        }
        goto LABEL_12;
      }
      v14 = (volatile signed __int32 *)*((_DWORD *)a1 + 1);
      v15 = (*(int (__thiscall **)(volatile signed __int32 *, int, int))(*v14 + 932))(v14, dword_106DB610, 1);
      sub_100C74B0(v14, v15, a2);
      v11 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 1.5);
    }
    v33 = v11;
    sub_102A2440((float *)a1, v33);
    goto LABEL_10;
  }
LABEL_12:
  v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
  v19 = sub_1007DB30((_DWORD *)(v18 + 52), 100016);
  sub_10023E00(*((char **)a1 + 1), v19);
  if ( (unsigned __int8)sub_1004B510(a1, 100007, 1) )
  {
    v20 = *((_DWORD *)a1 + 17);
    if ( v20 == -1 || off_1061BE18[4 * (*((_DWORD *)a1 + 17) & 0xFFF) + 2] != v20 >> 12 )
      v21 = 0;
    else
      v21 = off_1061BE18[4 * (*((_DWORD *)a1 + 17) & 0xFFF) + 1];
    if ( sub_1004FBE0((float *)a1 + 42, v21) )
    {
      v22 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
      v23 = sub_1007DB30((_DWORD *)(v22 + 52), 100014);
      sub_10023CB0(*((char **)a1 + 1), v23);
    }
    if ( sub_102A4500((int)a1, &v37, (float *)a1 + 19, (float *)a1 + 22) )
    {
      sub_102A11F0(a1, v37);
      v24 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
      v25 = sub_1007DB30((_DWORD *)(v24 + 52), 100001);
      sub_10023CB0(*((char **)a1 + 1), v25);
      v26 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
      v27 = sub_1007DB30((_DWORD *)(v26 + 52), 100016);
      sub_10023CB0(*((char **)a1 + 1), v27);
    }
  }
  v28 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 40) = 0;
  v29 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 1868))(v28);
  result = (float *)sub_10077AB0(v29, v36);
  for ( i = result; result; i = result )
  {
    if ( *(_DWORD *)i == -1 || off_1061BE18[4 * (*(_DWORD *)i & 0xFFF) + 2] != *(_DWORD *)i >> 12 )
      v31 = 0;
    else
      v31 = off_1061BE18[4 * (*(_DWORD *)i & 0xFFF) + 1];
    if ( (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)a1 + 1) + 1080))(*((_DWORD *)a1 + 1), v31) == 1
      && *(float *)(dword_106B31C8 + 12) == i[7] )
    {
      ++*((_DWORD *)a1 + 40);
    }
    v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 1) + 1868))(*((_DWORD *)a1 + 1));
    result = (float *)sub_10077340(v32, v36);
  }
  return result;
}
