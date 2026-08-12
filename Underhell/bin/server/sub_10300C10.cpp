char __thiscall sub_10300C10(int this)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st5
  double v5; // st6
  int v6; // ebx
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  float *v12; // [esp-8h] [ebp-98h]
  _BYTE v13[44]; // [esp+18h] [ebp-78h] BYREF
  float v14; // [esp+44h] [ebp-4Ch]
  int v15; // [esp+6Ch] [ebp-24h] BYREF
  float v16; // [esp+70h] [ebp-20h]
  float v17; // [esp+74h] [ebp-1Ch]
  int v18[2]; // [esp+78h] [ebp-18h] BYREF
  float v19; // [esp+80h] [ebp-10h]
  int v20; // [esp+84h] [ebp-Ch] BYREF
  float v21; // [esp+88h] [ebp-8h]
  float v22; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(_DWORD *)(this + 252) >> 11;
  v3 = 0.1;
  *(float *)&v20 = *(float *)(this + 476) * 0.1;
  v21 = *(float *)(this + 480) * 0.1;
  v22 = *(float *)(this + 484) * 0.1;
  if ( (v2 & 1) != 0 )
  {
    sub_100DAE60(this);
    v3 = 0.1;
  }
  v4 = *(float *)(this + 584) + v21;
  v5 = *(float *)(this + 588) + v22;
  *(float *)v18 = *(float *)(this + 580) + *(float *)&v20;
  *(float *)&v18[1] = v4;
  v19 = v5;
  v19 = v5 - v3 * (*(float *)(dword_106B6F0C + 44) * 0.5 * *(float *)(this + 552) * v3);
  if ( *(_DWORD *)(dword_106E2A04 + 48) == 2 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BC50((float *)(this + 580), (float *)v18, 255, 0, 0, 0, 0.5);
    *(float *)&v20 = 2.0;
    v21 = 2.0;
    v22 = 2.0;
    *(float *)&v15 = -2.0;
    v16 = -2.0;
    v17 = -2.0;
    sub_1011C000((float *)(this + 4040), (float *)&v15, (float *)&v20, 0, 255, 0, 1, 0.5);
  }
  v6 = *(_DWORD *)(this + 1676);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v12 = (float *)sub_10073730(v6);
  v7 = (float *)sub_10073710(v6);
  sub_100231A0((int)&savedregs, this, (float *)(this + 580), (float *)v18, v7, v12, 33701899, this, 0, (int)v13);
  if ( 1.0 == v14 && (*(_BYTE *)(this + 256) & 1) == 0 )
    return 0;
  if ( *(_DWORD *)(this + 908) != sub_100BDCE0(this, dword_106E295C) )
  {
    if ( *(_BYTE *)(this + 4094) )
    {
      *(_BYTE *)(this + 4094) = 0;
      sub_1023B860((_DWORD *)this, (int)"NPC_Antlion.WingsOpen");
      sub_100C1600(this, 1, 0);
    }
    sub_1004AF00((_DWORD *)this);
    sub_10039F40((int *)this, dword_106E295C);
    sub_102FE8B0(this, (int)&savedregs, this, 0);
    sub_1023C380((_DWORD *)this, (int)"NPC_Antlion.Land", 0.0, 0);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
      {
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        v10 = v9;
        if ( v9 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9)
            && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 1088))(v10) )
          {
            *(float *)&v15 = -250.0;
            v16 = 1.0;
            v17 = 1.0;
            *(float *)&v20 = 4.0;
            v21 = 0.0;
            v22 = 0.0;
            sub_102FD170((float *)this, 100.0, *(float *)(dword_106E2A94 + 44), (float *)&v20, (float *)&v15);
          }
        }
      }
    }
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    *(float *)&v15 = *(float *)(this + 476) * 0.33000001;
    v16 = *(float *)(this + 480) * 0.33000001;
    v17 = 0.33000001 * *(float *)(this + 484);
    sub_100DD660(this, (float *)&v15);
    return 0;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 732))(this);
}
