int __thiscall sub_102EB100(int this)
{
  double v2; // st7
  int v3; // eax
  double v4; // st6
  double v5; // st5
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int result; // eax
  float v10; // [esp+24h] [ebp-34h]
  int v11[3]; // [esp+34h] [ebp-24h] BYREF
  int v12; // [esp+40h] [ebp-18h] BYREF
  float v13; // [esp+44h] [ebp-14h]
  float v14; // [esp+48h] [ebp-10h]
  int v15[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(float *)(this + 800);
  v3 = *(_DWORD *)(this + 252);
  v15[0] = *(int *)(this + 800);
  v4 = *(float *)(this + 800);
  v15[1] = *(int *)(this + 800);
  v5 = *(float *)(this + 800);
  v15[2] = *(int *)(this + 800);
  *(float *)&v12 = -v2;
  v13 = -v4;
  v14 = -v5;
  if ( (v3 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1011BB20(this + 580, (int)&v12, (int)v15, 255, 255, 255, 8, 0.1);
  v6 = *(_DWORD *)(this + 252);
  *(float *)&v12 = 5.0;
  v13 = 5.0;
  v14 = 5.0;
  *(float *)v11 = -5.0;
  *(float *)&v11[1] = -5.0;
  *(float *)&v11[2] = -5.0;
  if ( (v6 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1011BB20(this + 580, (int)v11, (int)&v12, 255, 0, 0, 8, 0.1);
  v10 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v10, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = sub_1025F440("Org: %.2f %.2f %.2f", *(float *)(this + 580), *(float *)(this + 584), *(float *)(this + 588));
  sub_100D5DE0((_DWORD *)this, 0, (int)v7, 0.1, 255, 255, 255, 255);
  v8 = sub_1025F440("Radius %.2f", *(float *)(this + 800));
  sub_100D5DE0((_DWORD *)this, 1, (int)v8, 0.1, 255, 255, 255, 255);
  result = 2;
  if ( *(_BYTE *)(this + 805) )
  {
    sub_100D5DE0((_DWORD *)this, 2, (int)"Ignoring LOS", 0.1, 255, 255, 255, 255);
    result = 3;
  }
  if ( *(_BYTE *)(this + 804) )
    return sub_100D5DE0((_DWORD *)this, result, (int)"DISABLED", 0.1, 255, 255, 255, 255);
  return result;
}
