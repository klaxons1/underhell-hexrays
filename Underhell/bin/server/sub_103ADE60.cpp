char __thiscall sub_103ADE60(int this)
{
  double v2; // st6
  double v3; // rt0
  char result; // al
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  int v8; // edi
  int v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  float v14; // [esp+0h] [ebp-84h]
  _BYTE v15[12]; // [esp+14h] [ebp-70h] BYREF
  float v16[18]; // [esp+20h] [ebp-64h] BYREF
  float v17[3]; // [esp+68h] [ebp-1Ch] BYREF
  int v18[4]; // [esp+74h] [ebp-10h] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3696)
    || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3700) )
  {
    *(float *)(this + 3700) = *(float *)(dword_106B31C8 + 12);
  }
  if ( *(_DWORD *)(this + 3720) )
    goto LABEL_35;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_103ABDA0(this, (float *)v18, *(float *)(this + 580), *(float *)(this + 584), *(float *)(this + 588));
  v2 = 3600.0 * *(float *)(this + 3680);
  v3 = *(float *)(this + 3676) * 3600.0;
  v17[0] = *(float *)(this + 3672) * 3600.0 + *(float *)v18;
  v17[1] = v3 + *(float *)&v18[1];
  v17[2] = v2 + *(float *)&v18[2];
  sub_1002A5F0((int)&savedregs, this, (float *)v18, v17, 1174421507, this, 0, (int)v15);
  if ( v16[8] >= 1.0 )
    return sub_10027CD0((_DWORD *)this, 0);
  v5 = sub_100FB5C0("sprites/laser.vmt", 2.0);
  *(_DWORD *)(this + 3720) = v5;
  sub_100FAD20(v5, v16, (_DWORD *)this);
  sub_1005BC90(*(_DWORD *)(this + 3720), 1);
  v6 = *(_DWORD *)(this + 3720);
  if ( *(_BYTE *)(v6 + 119) != 0xFF )
  {
    if ( *(_BYTE *)(v6 + 84) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 116);
    }
    *(_BYTE *)(v6 + 119) = -1;
  }
  v8 = *(_DWORD *)(this + 3720);
  v9 = *(_DWORD *)(v8 + 928);
  *(float *)&v18[3] = 0.0;
  if ( v9 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v8 + 84) )
    {
      *(_BYTE *)(v8 + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(v8 + 24);
      if ( v10 )
        sub_100194B0(v10, 928);
    }
    *(float *)(v8 + 928) = 0.0;
  }
  v11 = *(_DWORD *)(this + 3668);
  if ( !v11 )
  {
    sub_1005C620(
      (_BYTE *)(*(_DWORD *)(this + 3720) + 116),
      255,
      0,
      0,
      HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3720) + 116)));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = sub_10243040("sprites/redglow1.vmt", (float *)(this + 580), 0);
    goto LABEL_33;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    sub_1005C620(
      (_BYTE *)(*(_DWORD *)(this + 3720) + 116),
      255,
      50,
      0,
      HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3720) + 116)));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = sub_10243040("sprites/orangeglow1.vmt", (float *)(this + 580), 0);
    goto LABEL_33;
  }
  if ( v12 == 1 )
  {
    sub_1005C620(
      (_BYTE *)(*(_DWORD *)(this + 3720) + 116),
      255,
      150,
      0,
      HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3720) + 116)));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = sub_10243040("sprites/yellowglow1.vmt", (float *)(this + 580), 0);
LABEL_33:
    *(_DWORD *)(this + 3724) = v13;
  }
  sub_10128950(*(_DWORD *)(this + 3724), 3, 255, 200, 200, 0, 14);
  sub_10126B10(*(_DWORD *)(this + 3724), this, 1);
  sub_10242820(*(_DWORD *)(this + 3724), 255, 0.0);
  sub_102428B0(*(_DWORD *)(this + 3724), 0.64999998, 0.0);
LABEL_35:
  sub_100EC3F0((_DWORD *)this, (int)sub_103AD800, 0.0, 0);
  *(float *)(this + 3664) = sub_100E9200((_DWORD *)this, 0);
  v14 = *(float *)(dword_106B31C8 + 12) + flt_106EAC20;
  result = sub_100EC4A0((int *)this, v14, 0);
  *(float *)(this + 3696) = *(float *)(dword_106B31C8 + 12) + 99999.0;
  return result;
}
