char __thiscall sub_103A7170(_DWORD *this, float a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  double v5; // st7
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  float *v10; // ecx
  float *v11; // eax
  int v12; // eax
  int v13; // edi
  float *v14; // ebx
  float *v15; // eax
  int v16; // edx
  double v17; // st4
  double v18; // st6
  double v19; // st4
  double v20; // st5
  double v21; // st6
  double v22; // st7
  int v24; // eax
  float v25; // [esp+0h] [ebp-8Ch]
  _BYTE v26[12]; // [esp+Ch] [ebp-80h] BYREF
  int v27[18]; // [esp+18h] [ebp-74h] BYREF
  int v28; // [esp+60h] [ebp-2Ch] BYREF
  float v29; // [esp+64h] [ebp-28h]
  float v30; // [esp+68h] [ebp-24h]
  int v31; // [esp+6Ch] [ebp-20h] BYREF
  float v32; // [esp+70h] [ebp-1Ch]
  float v33; // [esp+74h] [ebp-18h]
  int v34; // [esp+78h] [ebp-14h] BYREF
  float v35; // [esp+7Ch] [ebp-10h]
  float v36; // [esp+80h] [ebp-Ch]
  float *v37; // [esp+84h] [ebp-8h]
  int v38; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  if ( this[941] == 6 )
  {
    sub_10329F40((int)this, a2);
    goto LABEL_50;
  }
  v3 = (_DWORD *)this[647];
  *(float *)&v34 = 0.0;
  v35 = 0.0;
  v38 = 0;
  v36 = 0.0;
  if ( sub_1007E040(v3) && !(sub_1007DFF0((_DWORD *)this[647]) | 2) )
  {
    v4 = sub_1007DFE0((_DWORD *)this[647]);
    v34 = *(int *)v4;
    v35 = *(float *)(v4 + 4);
    v5 = *(float *)(v4 + 8);
    goto LABEL_21;
  }
  v6 = this[605];
  if ( v6 != -1
    && (v7 = &off_1061BE18[4 * (this[605] & 0xFFF) + 1], v8 = v6 >> 12, off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v8)
    && *v7 )
  {
    if ( off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v8 )
      v9 = *v7;
    else
      v9 = 0;
  }
  else
  {
    if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
      goto LABEL_15;
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  }
  v38 = v9;
LABEL_15:
  if ( sub_103A5070((int)this) )
  {
    v11 = sub_103A50F0(v10, (float *)&v28);
    v34 = *(int *)v11;
    v35 = v11[1];
    v5 = v11[2];
  }
  else
  {
    if ( !(*(int (**)(void))(*this + 368))() )
      goto LABEL_22;
    v12 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v13 = v12;
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    v34 = *(int *)(v13 + 580);
    v35 = *(float *)(v13 + 584);
    v5 = *(float *)(v13 + 588);
  }
LABEL_21:
  v36 = v5;
LABEL_22:
  sub_10023E00((char *)this, 73);
  sub_10023E00((char *)this, 74);
  if ( v38 || sub_103A5070((int)this) )
  {
    v14 = (float *)sub_10073730(this[419]);
    v15 = (float *)sub_10073710(this[419]);
    v16 = this[63] >> 11;
    v37 = v15;
    if ( (v16 & 1) != 0 )
      sub_100DAE60((int)this);
    sub_100231A0(
      (int)&savedregs,
      (int)this,
      (float *)this + 145,
      (float *)&v34,
      v37,
      v14,
      147467,
      (int)this,
      0,
      (int)v26);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v17 = *((float *)this + 146) - v35;
    v18 = v17 * v17;
    v19 = *((float *)this + 145) - *(float *)&v34;
    v20 = v18;
    v21 = *((float *)this + 147) - v36;
    v25 = v19 * v19 + v20 + v21 * v21;
    v22 = off_10689708(v25);
    if ( v27[16] == v38 || v22 * (1.0 - *(float *)&v27[8]) < 50.0 )
    {
      if ( *(_DWORD *)(dword_106EAB14 + 48) )
      {
        sub_1011BC50((float *)this + 179, (float *)&v34, 0, 255, 0, 1, 0.0);
        *(float *)&v28 = 5.0;
        v29 = 5.0;
        v30 = 5.0;
        *(float *)&v31 = -5.0;
        v32 = -5.0;
        v33 = -5.0;
        sub_1011C000((float *)v27, (float *)&v31, (float *)&v28, 0, 255, 0, 1, 0.1);
      }
      sub_10023CB0((char *)this, 73);
    }
    else
    {
      if ( *(_DWORD *)(dword_106EAB14 + 48) )
      {
        sub_1011BC50((float *)this + 179, (float *)&v34, 255, 0, 0, 1, 0.0);
        *(float *)&v31 = 5.0;
        v32 = 5.0;
        v33 = 5.0;
        *(float *)&v28 = -5.0;
        v29 = -5.0;
        v30 = -5.0;
        sub_1011C000((float *)v27, (float *)&v28, (float *)&v31, 255, 0, 0, 1, 0.1);
      }
      sub_10023CB0((char *)this, 74);
    }
  }
  if ( !sub_1007E040((_DWORD *)this[647]) )
  {
    v24 = this[941];
    if ( v24 != 4 )
    {
      if ( !v24 )
      {
        sub_103A5EC0((float *)this, a2);
        goto LABEL_50;
      }
      if ( v24 != 7 )
      {
        if ( v24 == 5 )
        {
          if ( sub_1026A890(this + 979) )
            sub_103A6AF0(this);
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2248))(this, LODWORD(a2));
        }
        else if ( !sub_1007E040((_DWORD *)this[647]) )
        {
          sub_10328060((float *)this, a2, 9.5);
        }
        goto LABEL_50;
      }
    }
    sub_103A5DE0((int)this, *(float *)&this, a2);
    goto LABEL_50;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2240))(this, v38, LODWORD(a2)) )
  {
    sub_10328A10((float *)this);
    return 1;
  }
LABEL_50:
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2252))(this, LODWORD(a2));
  return 1;
}
