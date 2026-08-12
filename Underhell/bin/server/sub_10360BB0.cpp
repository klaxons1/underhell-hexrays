bool __userpurge sub_10360BB0@<al>(int a1@<ecx>, int a2@<edi>, float String2, _DWORD *a4)
{
  _DWORD *v4; // esi
  _DWORD *i; // esi
  int v8; // ecx
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  int v13; // ecx
  int v14; // ebx
  int (__thiscall *v15)(_DWORD *); // edx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  int v20; // eax
  unsigned int v21; // edi
  int v22; // [esp-4h] [ebp-4Ch]
  int v23; // [esp+0h] [ebp-48h]
  _BYTE v25[12]; // [esp+24h] [ebp-24h] BYREF
  float v26; // [esp+30h] [ebp-18h]
  float v27; // [esp+34h] [ebp-14h]
  float v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+3Ch] [ebp-Ch]
  _DWORD *v30; // [esp+40h] [ebp-8h]
  float v31; // [esp+44h] [ebp-4h]

  v31 = 99999.0;
  v4 = 0;
  v30 = 0;
  if ( String2 != 0.0
    && strlen((const char *)LODWORD(String2))
    && ((v4 = sub_1012BF20(&dword_1069E3E0, 0, (char *)LODWORD(String2), 0, 0, 0, 0)) == 0
      ? (String2 = NAN)
      : (String2 = *(float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 8))(v4)),
        sub_10319100((_DWORD *)(a1 + 4292), (unsigned int *)&String2) == -1) )
  {
    *(_BYTE *)(a1 + 4288) = 0;
    if ( v4 )
    {
      *(_DWORD *)(a1 + 4184) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 8))(v4);
      return 1;
    }
    *(_DWORD *)(a1 + 4184) = -1;
    return 1;
  }
  else
  {
    for ( i = sub_1012BC90(&dword_1069E3E0, (int)v4, "prop_physics");
          i;
          i = sub_1012BC90(&dword_1069E3E0, (int)i, "prop_physics") )
    {
      if ( i != a4 )
      {
        String2 = *(float *)(*(int (__thiscall **)(_DWORD *))(*i + 8))(i);
        if ( sub_10319100((_DWORD *)(a1 + 4292), (unsigned int *)&String2) == -1 )
        {
          v8 = i[106];
          v29 = v8;
          if ( v8 )
          {
            if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 116))(v8) <= 250.0 )
            {
              v9 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*i + 576))(i, a2);
              v10 = *v9;
              v11 = v9[1];
              v12 = v9[2];
              v26 = v10;
              v13 = *(_DWORD *)(a1 + 252) >> 11;
              v27 = v11;
              v28 = v12;
              if ( (v13 & 1) != 0 )
                sub_100DAE60(a1);
              v14 = *(_DWORD *)dword_106B31F0;
              v15 = *(int (__thiscall **)(_DWORD *))(*i + 24);
              String2 = fabs(*(float *)(a1 + 580) - v26) + fabs(*(float *)(a1 + 584) - v27);
              a2 = v15(i);
              if ( (*(int (__thiscall **)(int))(v14 + 16))(dword_106B31F0) )
              {
                v16 = v29;
                if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v29 + 76))(v29) & 4) == 0 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 40))(v16) )
                  {
                    v17 = i[105];
                    if ( v17 != 1 && v17 != 3 )
                    {
                      v18 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504))(a1, v25);
                      if ( *(float *)(v18 + 8) >= (double)v28
                        && v31 > (double)String2
                        && (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a1 + 548))(
                             a1,
                             i,
                             16449,
                             0) )
                      {
                        v30 = i;
                        v31 = String2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v19 = v30;
    *(_BYTE *)(a1 + 4288) = 0;
    if ( v19 )
      *(_DWORD *)(a1 + 4184) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v19 + 8))(v19);
    else
      *(_DWORD *)(a1 + 4184) = -1;
    if ( *(_DWORD *)(dword_106E7CD4 + 48) && v19 )
    {
      v23 = (*(int (__thiscall **)(_DWORD *))(v19[80] + 8))(v19 + 80);
      v22 = (*(int (__thiscall **)(_DWORD *))(v19[80] + 4))(v19 + 80);
      v20 = (*(int (__thiscall **)(_DWORD *))(*v19 + 576))(v19);
      sub_1011BB20(v20, v22, v23, 255, 0, 255, 1, 3.0);
    }
    v21 = *(_DWORD *)(a1 + 4184);
    return v21 != -1 && off_1061BE18[4 * (v21 & 0xFFF) + 2] == v21 >> 12 && off_1061BE18[4 * (v21 & 0xFFF) + 1];
  }
}
