void __thiscall sub_10107B50(char *this, _DWORD *a2)
{
  float v3; // edx
  float v4; // eax
  int v5; // ecx
  int v6; // edx
  double v7; // st7
  double v8; // st6
  double v9; // st5
  _DWORD *v10; // edi
  char v11; // al
  void (__thiscall *v12)(char *, char *); // edx
  _BYTE v13[36]; // [esp+14h] [ebp-90h] BYREF
  float v14; // [esp+38h] [ebp-6Ch]
  _DWORD *v15; // [esp+60h] [ebp-44h]
  float v16[3]; // [esp+68h] [ebp-3Ch] BYREF
  float v17; // [esp+74h] [ebp-30h]
  float v18; // [esp+78h] [ebp-2Ch]
  float v19; // [esp+7Ch] [ebp-28h]
  float v20; // [esp+80h] [ebp-24h]
  float v21; // [esp+84h] [ebp-20h]
  float v22; // [esp+88h] [ebp-1Ch]
  float v23; // [esp+8Ch] [ebp-18h] BYREF
  float v24; // [esp+90h] [ebp-14h]
  float v25; // [esp+94h] [ebp-10h]
  float v26; // [esp+98h] [ebp-Ch]
  float v27; // [esp+9Ch] [ebp-8h]
  float v28; // [esp+A0h] [ebp-4h]
  int savedregs; // [esp+A4h] [ebp+0h] BYREF

  if ( (*((_DWORD *)this + 63) & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v3 = *((float *)this + 120);
  v4 = *((float *)this + 121);
  v20 = *((float *)this + 119);
  v21 = v3;
  v22 = v4;
  off_10689714();
  v5 = *((_DWORD *)this + 63) >> 11;
  v26 = v20 * 8.0;
  v27 = v21 * 8.0;
  v28 = 8.0 * v22;
  if ( (v5 & 1) != 0 )
    sub_100DAE60((int)this);
  v6 = *((_DWORD *)this + 63) >> 11;
  v23 = *((float *)this + 145) - v26;
  v24 = *((float *)this + 146) - v27;
  v25 = *((float *)this + 147) - v28;
  v26 = v20 * 4.0;
  v27 = v21 * 4.0;
  v28 = 4.0 * v22;
  if ( (v6 & 1) != 0 )
    sub_100DAE60((int)this);
  v7 = *((float *)this + 145) + v26;
  v16[0] = v7;
  v8 = v27 + *((float *)this + 146);
  v16[1] = v8;
  v9 = v28 + *((float *)this + 147);
  v16[2] = v9;
  v17 = v7 - v23;
  v18 = v8 - v24;
  v19 = v9 - v25;
  off_10689714();
  *((float *)this + 281) = v23;
  *((float *)this + 282) = v24;
  *((float *)this + 283) = v25;
  *((float *)this + 284) = v17;
  *((float *)this + 285) = v18;
  *((float *)this + 286) = v19;
  if ( a2 != *((_DWORD **)this + 302) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    {
      sub_1002A5F0((int)&savedregs, (int)this, &v23, v16, 1174421507, (int)this, 0, (int)v13);
      v10 = v15;
      if ( v15
        && (v11 = (*(int (__thiscall **)(_DWORD *))(*v15 + 488))(v15), v10 = v15, v11)
        && (_DWORD *)sub_10019AD0(v15) == a2 )
      {
        Msg("tr.plane.dist is %f\n", v14);
      }
      else if ( v10 != a2 )
      {
        return;
      }
    }
    v12 = *(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 432);
    *((_DWORD *)this + 298) = 0;
    v12(this, this + 1120);
    sub_1025FAC0(this);
  }
}
