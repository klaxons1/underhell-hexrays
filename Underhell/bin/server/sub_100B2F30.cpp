bool __userpurge sub_100B2F30@<al>(int a1@<ecx>, int a2@<ebx>, float *a3, float *a4)
{
  bool result; // al
  int v6; // eax
  int v8; // eax
  float *v9; // eax
  float *v10; // esi
  int v11; // edi
  double v12; // st7
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  double v16; // rt0
  double v17; // st6
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // st4
  double v22; // st3
  double v23; // st5
  double v24; // st2
  double v25; // st1
  double v26; // st0
  int v27; // ebx
  float v29[3]; // [esp+Ch] [ebp-3Ch] BYREF
  float v30; // [esp+18h] [ebp-30h] BYREF
  float v31; // [esp+1Ch] [ebp-2Ch]
  float v32[3]; // [esp+24h] [ebp-24h] BYREF
  float v33; // [esp+30h] [ebp-18h] BYREF
  float v34; // [esp+34h] [ebp-14h]
  float v35; // [esp+38h] [ebp-10h]
  float v36; // [esp+3Ch] [ebp-Ch] BYREF
  float v37; // [esp+40h] [ebp-8h]
  float v38; // [esp+44h] [ebp-4h]
  int v39; // [esp+50h] [ebp+8h]

  if ( !*(_BYTE *)(a1 + 16) )
    return 0;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 )
    *(_DWORD *)(v6 + 2716) |= 8u;
  if ( (!(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4))
     || (v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4), a2),
         v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 504))(v8),
         !sub_10074680(a3, v9, COERCE_FLOAT(&v30)))
     || sub_10023D10(*(_DWORD **)(a1 + 4), 10)
     || sub_10023D10(*(_DWORD **)(a1 + 4), 15)
     || *(float *)(dword_106B31C8 + 12) == *(float *)(*(_DWORD *)(a1 + 4) + 2140))
    && sub_100B2E40((_DWORD **)a1, a3, (float *)(*(_DWORD *)(a1 + 4) + 716)) )
  {
    v10 = *(float **)(a1 + 4);
    *a4 = v10[179];
    a4[1] = v10[180];
    a4[2] = v10[181];
    return 1;
  }
  else if ( *(_DWORD *)(dword_10695324 + 48) )
  {
    v11 = 5;
    v39 = 48;
    v12 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 4) + 1952))(*(_DWORD *)(a1 + 4));
    if ( (int)v12 != -1 && (int)v12 < 48 )
    {
      v11 = 1;
      v39 = (int)v12;
    }
    sub_104222B0(*(_DWORD *)(a1 + 4) + 728, 0, v29, 0);
    v13 = (double)v39;
    v14 = (float *)(*(_DWORD *)(a1 + 4) + 716);
    v15 = v29[0] * v13;
    v30 = v15;
    v16 = v15;
    v17 = v13;
    v18 = v16;
    v19 = v17 * v29[1];
    v31 = v19;
    v20 = *v14;
    v36 = *v14;
    v21 = v14[1];
    v37 = v14[1];
    v22 = v20;
    v23 = v14[2];
    v33 = v22;
    v24 = v21;
    v25 = v23;
    v32[0] = *a3;
    v32[1] = a3[1];
    v26 = a3[2];
    v27 = 0;
    v32[2] = v26;
    while ( 1 )
    {
      v33 = v33 - v18;
      v34 = v24 - v19;
      v35 = v25;
      v36 = v18 + v22;
      v37 = v19 + v21;
      v38 = v23;
      if ( sub_100B2E40((_DWORD **)a1, v32, &v33) )
      {
        *a4 = v33;
        a4[1] = v34;
        a4[2] = v35;
        return 1;
      }
      result = sub_100B2E40((_DWORD **)a1, v32, &v36);
      if ( result )
        break;
      if ( ++v27 >= v11 )
        return result;
      v23 = v38;
      v21 = v37;
      v22 = v36;
      v18 = v30;
      v19 = v31;
      v25 = v35;
      v24 = v34;
    }
    *a4 = v36;
    a4[1] = v37;
    a4[2] = v38;
    return 1;
  }
  else
  {
    return 0;
  }
}
