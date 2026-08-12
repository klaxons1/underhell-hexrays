_DWORD *__thiscall sub_10321F80(_DWORD *this, volatile signed __int32 *a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  volatile signed __int32 *v7; // edi
  int v8; // esi
  void *v9; // edi
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int *v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // esi
  char v31[12]; // [esp+20h] [ebp-28h] BYREF
  char v32[12]; // [esp+2Ch] [ebp-1Ch] BYREF
  _BYTE v33[12]; // [esp+38h] [ebp-10h] BYREF
  _DWORD *v34; // [esp+44h] [ebp-4h]

  v2 = this;
  this[922] = -1;
  v3 = this[934];
  v34 = this;
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5) && *v4 )
  {
    if ( v4[1] == v5 )
      v6 = *v4;
    else
      v6 = 0;
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    v7 = a2;
    (*(void (__thiscall **)(volatile signed __int32 *, char *))(*a2 + 504))(a2, v32);
  }
  else
  {
    v7 = a2;
  }
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)v7 + 275) && sub_100D7240((void *)v7) )
    sub_100BD750(v7);
  v9 = (void *)*((_DWORD *)v7 + 275);
  if ( !v9 || !*(_DWORD *)v9 )
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  if ( v9 )
  {
    v10 = sub_100BD8E0(a2);
    v11 = 0;
    v12 = sub_100BCEB0(v9, v10);
    if ( v12 <= 0 )
    {
LABEL_24:
      v2 = v34;
    }
    else
    {
      v13 = *(_DWORD *)v9 + *(_DWORD *)(*(_DWORD *)v9 + 176) + 12 * v10;
      v14 = 0;
      while ( 1 )
      {
        if ( v13 )
        {
          v15 = (int *)(v13 + v14 + *(_DWORD *)(v13 + 8));
          if ( v15 )
          {
            if ( v15[1] == 1 )
              break;
          }
        }
        ++v11;
        v14 += 68;
        if ( v11 >= v12 )
          goto LABEL_24;
      }
      v24 = *v15;
      v25 = v34;
      v34[922] = v24;
      v2 = v25;
    }
  }
  if ( v2[922] == -1 )
  {
    v16 = sub_100BEAD0((int)a2, "Bip01 Head");
    v2[922] = v16;
    if ( v16 == -1 )
    {
      v17 = sub_100BEAD0((int)a2, "ValveBiped.Bip01_Head1");
      v2[922] = v17;
      if ( v17 == -1 )
      {
        v18 = sub_100BEAD0((int)a2, "ValveBiped.head");
        v2[922] = v18;
        if ( v18 == -1 )
        {
          v19 = sub_100BEAD0((int)a2, "Bullsquid.Head_Bone1");
          v2[922] = v19;
          if ( v19 == -1 )
            v2[922] = 0;
        }
      }
    }
  }
  sub_100BEB30((int)a2, v2[922], (int)v33, (int)v31);
  v20 = v2[934];
  if ( v20 != -1 )
  {
    v21 = &off_1061BE18[4 * (v2[934] & 0xFFF) + 1];
    v22 = v20 >> 12;
    if ( off_1061BE18[4 * (v2[934] & 0xFFF) + 2] == v22 )
    {
      if ( *v21 )
      {
        if ( off_1061BE18[4 * (v2[934] & 0xFFF) + 2] == v22 )
          v23 = *v21;
        else
          v23 = 0;
        (*(void (__thiscall **)(int, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v23 + 416))(v23, v33, 0, 0);
      }
    }
  }
  v26 = v2[934];
  if ( v26 == -1 || off_1061BE18[4 * (v2[934] & 0xFFF) + 2] != v2[934] >> 12 )
    v27 = 0;
  else
    v27 = off_1061BE18[4 * (v2[934] & 0xFFF) + 1];
  if ( v26 == -1 )
  {
    v28 = 0;
  }
  else if ( off_1061BE18[4 * (v2[934] & 0xFFF) + 2] == v26 >> 12 )
  {
    v28 = off_1061BE18[4 * (v2[934] & 0xFFF) + 1];
  }
  else
  {
    v28 = 0;
  }
  v29 = (_DWORD *)sub_101CFAB0(
                    (int)a2,
                    &flt_106F1CA8,
                    -1,
                    0,
                    *(int **)(v27 + 424),
                    v28,
                    0,
                    (int)v33,
                    v2[922],
                    &flt_106F1CA8);
  if ( v29 )
  {
    sub_101DAB00(v2, a2);
    sub_101DAAC0(v2, v29);
    sub_101CDE70((int)v29);
    sub_100EC3F0(v29, 0, 0.0, 0);
  }
  return v29;
}
