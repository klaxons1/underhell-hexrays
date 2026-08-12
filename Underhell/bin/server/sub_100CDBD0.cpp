void __thiscall sub_100CDBD0(unsigned int *this, float a2, int *a3, float *a4)
{
  int *v4; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int (__thiscall *v15)(unsigned int *, int *); // edx
  float *v16; // eax
  int *v17; // ebx
  float *v18; // eax
  double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  unsigned int v24; // eax
  float *v25; // eax
  double v26; // st4
  double v27; // st7
  double v28; // st6
  int v29; // [esp+24h] [ebp-104h]
  float v30; // [esp+24h] [ebp-104h]
  _BYTE v31[48]; // [esp+34h] [ebp-F4h] BYREF
  _BYTE v32[48]; // [esp+64h] [ebp-C4h] BYREF
  _BYTE v33[48]; // [esp+94h] [ebp-94h] BYREF
  _BYTE v34[48]; // [esp+C4h] [ebp-64h] BYREF
  int v35[3]; // [esp+F4h] [ebp-34h] BYREF
  float v36[3]; // [esp+100h] [ebp-28h] BYREF
  float v37; // [esp+10Ch] [ebp-1Ch]
  float v38; // [esp+110h] [ebp-18h] BYREF
  float v39; // [esp+114h] [ebp-14h]
  float v40; // [esp+118h] [ebp-10h]
  float v41; // [esp+11Ch] [ebp-Ch] BYREF
  float v42; // [esp+120h] [ebp-8h]
  float v43; // [esp+124h] [ebp-4h]

  v4 = (int *)LODWORD(a2);
  if ( a2 != 0.0 )
  {
    if ( (this[64] & 0x2000) != 0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 1272))(COERCE_FLOAT(LODWORD(a2))) )
      {
        a2 = COERCE_FLOAT((*(int (__thiscall **)(int *))(*v4 + 1224))(v4));
        sub_10031800(v4 + 300, &a2);
        if ( (char *)v4[23] == "weapon_smg1" || (unsigned __int8)sub_100D6240("weapon_smg1") )
        {
          v6 = *(_DWORD *)dword_106B3CDC;
          v29 = (*(int (__thiscall **)(int *))(*v4 + 1284))(v4);
          v7 = sub_1025FB50(1);
          v37 = ((double (__thiscall *)(int, int, unsigned int *, int))*(_DWORD *)(v6 + 124))(
                  dword_106B3CDC,
                  v7,
                  this,
                  v29);
          v8 = (*(int (__thiscall **)(unsigned int *))(*this + 448))(this);
          a2 = (double)v8 / v37 + (double)v8 / v37;
          sub_100CBC80(v4 + 300, &a2);
        }
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 1276))(v4) )
      {
        a2 = COERCE_FLOAT((*(int (__thiscall **)(int *))(*v4 + 1228))(v4));
        sub_100CBCD0(v4 + 301, &a2);
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 320))(this) )
    {
      v9 = (float *)(*(int (__thiscall **)(unsigned int *, int *))(*this + 968))(this, v35);
      v41 = *v9;
      v42 = v9[1];
      v43 = v9[2] - 12.0;
      if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, &v41, 0) & 1) != 0 )
        Msg("Weapon spawning in solid!\n");
      sub_100E0D20(&v41);
      v10 = (*(int (__thiscall **)(unsigned int *, int *))(*this + 904))(this, v35);
      sub_10422540(v10, v36);
      sub_100E0EA0(v36);
LABEL_21:
      v17 = a3;
      if ( a3 )
      {
        if ( (v4[63] & 0x800) != 0 )
          sub_100DAE60(v4);
        v18 = (float *)sub_101692F0(
                         (int)v35,
                         (int)this,
                         v4[145],
                         v4[146],
                         v4[147],
                         *v17,
                         v17[1],
                         v17[2],
                         0.2,
                         1.0,
                         0,
                         0,
                         0);
        v38 = *v18;
        v39 = v18[1];
        v19 = v18[2];
      }
      else if ( a4 )
      {
        v20 = *a4;
        v38 = *a4;
        v21 = a4[1];
        v39 = a4[1];
        v22 = a4[2];
        v40 = a4[2];
        v30 = v20 * v20 + v21 * v21 + v22 * v22;
        if ( off_10689708(v30) <= 400.0 )
          goto LABEL_33;
        off_10689714();
        v38 = v38 * 400.0;
        v39 = v39 * 400.0;
        v19 = 400.0 * v40;
      }
      else
      {
        if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 320))(this) )
        {
          v23 = 400.0;
        }
        else
        {
          a2 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 64, 128));
          v23 = (double)SLODWORD(a2);
        }
        v24 = *this;
        a2 = v23;
        v25 = (float *)(*(int (__thiscall **)(unsigned int *, int *))(v24 + 908))(this, v35);
        v26 = v25[2];
        v27 = v25[1] * a2;
        v38 = *v25 * a2;
        v28 = v27;
        v19 = a2 * v26;
        v39 = v28;
      }
      v40 = v19;
LABEL_33:
      (*(void (__thiscall **)(int *, float *))(*v4 + 868))(v4, &v38);
      sub_100CD650(this, (int)v4);
      if ( (this[62] & 0x2000) != 0 )
        sub_1025FAC0(v4);
      return;
    }
    a2 = NAN;
    v11 = sub_10001430(v4);
    v12 = 0;
    v37 = *(float *)&v11;
    if ( v11 && (v13 = *v11, *(int *)(*v11 + 156) > 0) )
    {
      a2 = 0.0;
      while ( 1 )
      {
        v14 = sub_100BEAD0(
                (int)this,
                (char *)(v13 + v12 + *(_DWORD *)(v13 + 160) + *(_DWORD *)(v13 + v12 + *(_DWORD *)(v13 + 160))));
        if ( v14 != -1 )
          break;
        v13 = *(_DWORD *)LODWORD(v37);
        v12 += 216;
        ++LODWORD(a2);
        if ( SLODWORD(a2) >= *(_DWORD *)(v13 + 156) )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v14 = sub_100BEAD0((int)this, "ValveBiped.Weapon_bone");
      if ( v14 == -1 )
      {
        (*(void (__thiscall **)(unsigned int *, float *))(*this + 904))(this, &v41);
        v15 = *(int (__thiscall **)(unsigned int *, int *))(*this + 968);
        v41 = v41 * 10.0;
        v42 = v42 * 10.0;
        v43 = 10.0 * v43;
        v16 = (float *)v15(this, v35);
        v36[0] = v41 + *v16;
        v36[1] = v16[1] + v42;
        v36[2] = v16[2] + v43;
        sub_100E0D20(v36);
        goto LABEL_21;
      }
    }
    (*(void (__thiscall **)(unsigned int *, int, _BYTE *))(*this + 772))(this, v14, v31);
    sub_100E1BB0(v4);
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
    sub_100E0D20(&v41);
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
    sub_100E0EA0(&v41);
    sub_100BCCF0(v4);
    (*(void (__thiscall **)(int *, float, _BYTE *))(*v4 + 772))(v4, COERCE_FLOAT(LODWORD(a2)), v33);
    sub_10424F80(v33, v32);
    sub_10421E30(v31, v32, v34);
    sub_10421A90(v34, v36);
    sub_10421CE0(v34, 3, v35);
    (*(void (__thiscall **)(int *, int *, float *, _DWORD))(*v4 + 416))(v4, v35, v36, 0);
    goto LABEL_21;
  }
}
