char __thiscall sub_1032A640(_DWORD *this, float a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  double v5; // st7
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // edi
  float *v11; // ebx
  float *v12; // eax
  int v13; // ecx
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v19; // st7
  float v21; // [esp+0h] [ebp-8Ch]
  _BYTE v22[12]; // [esp+Ch] [ebp-80h] BYREF
  int v23[18]; // [esp+18h] [ebp-74h] BYREF
  int v24; // [esp+60h] [ebp-2Ch] BYREF
  float v25; // [esp+64h] [ebp-28h]
  float v26; // [esp+68h] [ebp-24h]
  int v27; // [esp+6Ch] [ebp-20h] BYREF
  float v28; // [esp+70h] [ebp-1Ch]
  float v29; // [esp+74h] [ebp-18h]
  int v30; // [esp+78h] [ebp-14h] BYREF
  float v31; // [esp+7Ch] [ebp-10h]
  float v32; // [esp+80h] [ebp-Ch]
  float *v33; // [esp+84h] [ebp-8h]
  int v34; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  if ( this[941] == 6 )
  {
    sub_10329F40((int)this, a2);
    goto LABEL_40;
  }
  v3 = (_DWORD *)this[647];
  *(float *)&v30 = 0.0;
  v31 = 0.0;
  v34 = 0;
  v32 = 0.0;
  if ( sub_1007E040(v3) && !(sub_1007DFF0((_DWORD *)this[647]) | 2) )
  {
    v4 = sub_1007DFE0((_DWORD *)this[647]);
    v30 = *(int *)v4;
    v31 = *(float *)(v4 + 4);
    v5 = *(float *)(v4 + 8);
    goto LABEL_19;
  }
  v6 = this[605];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (this[605] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v8 )
          v9 = *v7;
        else
          v9 = 0;
        goto LABEL_14;
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
LABEL_14:
    v34 = v9;
  }
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    goto LABEL_20;
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
    sub_100DAE60(v10);
  v30 = *(int *)(v10 + 580);
  v31 = *(float *)(v10 + 584);
  v5 = *(float *)(v10 + 588);
LABEL_19:
  v32 = v5;
LABEL_20:
  sub_10023E00((char *)this, 73);
  sub_10023E00((char *)this, 74);
  if ( v34 )
  {
    v11 = (float *)sub_10073730(this[419]);
    v12 = (float *)sub_10073710(this[419]);
    v13 = this[63] >> 11;
    v33 = v12;
    if ( (v13 & 1) != 0 )
      sub_100DAE60((int)this);
    sub_100231A0(
      (int)&savedregs,
      (int)this,
      (float *)this + 145,
      (float *)&v30,
      v33,
      v11,
      147467,
      (int)this,
      0,
      (int)v22);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v14 = *((float *)this + 146) - v31;
    v15 = v14 * v14;
    v16 = *((float *)this + 145) - *(float *)&v30;
    v17 = v15;
    v18 = *((float *)this + 147) - v32;
    v21 = v16 * v16 + v17 + v18 * v18;
    v19 = off_10689708(v21);
    if ( v23[16] == v34 || v19 * (1.0 - *(float *)&v23[8]) < 50.0 )
    {
      if ( *(_DWORD *)(dword_106E55D4 + 48) )
      {
        sub_1011BC50((float *)this + 179, (float *)&v30, 0, 255, 0, 1, 0.0);
        *(float *)&v24 = 5.0;
        v25 = 5.0;
        v26 = 5.0;
        *(float *)&v27 = -5.0;
        v28 = -5.0;
        v29 = -5.0;
        sub_1011C000((float *)v23, (float *)&v27, (float *)&v24, 0, 255, 0, 1, 0.1);
      }
      sub_10023CB0((char *)this, 73);
    }
    else
    {
      if ( *(_DWORD *)(dword_106E55D4 + 48) )
      {
        sub_1011BC50((float *)this + 179, (float *)&v30, 255, 0, 0, 1, 0.0);
        *(float *)&v27 = 5.0;
        v28 = 5.0;
        v29 = 5.0;
        *(float *)&v24 = -5.0;
        v25 = -5.0;
        v26 = -5.0;
        sub_1011C000((float *)v23, (float *)&v24, (float *)&v27, 255, 0, 0, 1, 0.1);
      }
      sub_10023CB0((char *)this, 74);
    }
  }
  if ( sub_1007E040((_DWORD *)this[647]) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2240))(this, v34, LODWORD(a2)) )
    {
      sub_10328A10((float *)this);
      return 1;
    }
  }
  else if ( this[941] == 5 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2248))(this, LODWORD(a2));
  }
  else if ( !sub_1007E040((_DWORD *)this[647]) )
  {
    sub_10328060((float *)this, a2, 9.5);
  }
LABEL_40:
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 2252))(this, LODWORD(a2));
  return 1;
}
