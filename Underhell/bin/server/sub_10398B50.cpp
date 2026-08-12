int __cdecl sub_10398B50(unsigned int **a1, unsigned int **a2)
{
  unsigned int *v2; // ebx
  unsigned int *v3; // edi
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  bool v9; // bl
  int v10; // eax
  int v11; // eax
  bool v12; // al
  double v14; // st4
  unsigned int *v15; // ebx
  double v16; // st5
  double v17; // st6
  double v18; // st5
  double v19; // rt0
  double v20; // st7
  double v21; // rt1
  double v22; // st6
  double v23; // st7
  double v24; // rt2
  _DWORD *v25; // eax
  float *v26; // esi
  float *v27; // eax
  double v28; // st4
  double v29; // st6
  double v30; // st4
  double v31; // st5
  double v32; // st6
  _DWORD *v33; // eax
  float *v34; // esi
  float *v35; // eax
  double v36; // st4
  double v37; // st6
  double v38; // st4
  double v39; // st5
  double v40; // st6
  double v41; // st7
  unsigned int *v42; // [esp+14h] [ebp+8h]
  float v43; // [esp+14h] [ebp+8h]

  v2 = *a2;
  v3 = *a1;
  v4 = **a1;
  v42 = *a2;
  if ( v4 != -1 && off_1061BE18[4 * (v4 & 0xFFF) + 2] == v4 >> 12 && off_1061BE18[4 * (v4 & 0xFFF) + 1]
    || *v2 != -1 && off_1061BE18[4 * (*v2 & 0xFFF) + 2] == *v2 >> 12 && off_1061BE18[4 * (*v2 & 0xFFF) + 1] )
  {
    if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 || !off_1061BE18[4 * (v4 & 0xFFF) + 1] )
      return 1;
    if ( *v2 == -1 )
      return -1;
    if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
      return -1;
    if ( !off_1061BE18[4 * (*v2 & 0xFFF) + 1] )
      return -1;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106EA230 + 368))(dword_106EA230);
    if ( sub_1012B040(v3, v5) )
      return -1;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106EA230 + 368))(dword_106EA230);
    if ( sub_1012B040(v2, v6) )
      return 1;
    v7 = sub_1026A890(v3);
    v9 = 1;
    if ( !sub_103960A0(v7) )
    {
      v8 = sub_1026A890(v3);
      if ( !sub_103945A0(v8) )
        v9 = 0;
    }
    v10 = sub_1026A890(v3);
    if ( sub_103960A0(v10) || (v11 = sub_1026A890(v3), v12 = sub_103945A0(v11)) )
      v12 = 1;
    if ( v9 )
    {
      if ( !v12 )
        return -1;
    }
    else if ( v12 )
    {
      return 1;
    }
    if ( -3.402823466385289e38 == *((float *)v3 + 7) || 0.0 == *((float *)v3 + 7) )
      v14 = -99999.0;
    else
      v14 = *((float *)v3 + 7);
    if ( -3.402823466385289e38 != *((float *)v3 + 11) && v14 < *((float *)v3 + 11) )
      v14 = *((float *)v3 + 11);
    v15 = v42;
    if ( -3.402823466385289e38 == *((float *)v42 + 7) )
    {
      v16 = v14;
    }
    else
    {
      v16 = v14;
      if ( *((float *)v42 + 7) != 0.0 )
      {
        v17 = v14;
        v18 = *((float *)v42 + 7);
LABEL_38:
        v20 = v18;
        if ( *((float *)v42 + 11) != -3.402823466385289e38 )
        {
          v21 = v17;
          v22 = v18;
          v23 = v21;
          if ( v18 < *((float *)v42 + 11) )
            v22 = *((float *)v42 + 11);
          v24 = v22;
          v17 = v23;
          v20 = v24;
        }
        if ( v17 >= v20 )
        {
          if ( v17 > v20 )
            return 1;
          v25 = (_DWORD *)sub_1026A890(v3);
          v26 = (float *)sub_10019640(v25);
          v27 = (float *)sub_10019640((_DWORD *)dword_106EA230);
          v28 = v27[1] - v26[1];
          v29 = v28 * v28;
          v30 = *v27 - *v26;
          v31 = v29;
          v32 = v27[2] - v26[2];
          v43 = v30 * v30 + v31 + v32 * v32;
          v33 = (_DWORD *)sub_1026A890(v15);
          v34 = (float *)sub_10019640(v33);
          v35 = (float *)sub_10019640((_DWORD *)dword_106EA230);
          v36 = v35[1] - v34[1];
          v37 = v36 * v36;
          v38 = *v35 - *v34;
          v39 = v37;
          v40 = v35[2] - v34[2];
          v41 = v38 * v38 + v39 + v40 * v40;
          if ( v43 >= v41 )
            return v43 > v41;
        }
        return -1;
      }
    }
    v19 = v16;
    v18 = -99999.0;
    v17 = v19;
    goto LABEL_38;
  }
  return 0;
}
