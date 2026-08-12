int __thiscall sub_10079060(int this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  _BYTE v14[12]; // [esp+2Ch] [ebp-74h] BYREF
  float v15; // [esp+38h] [ebp-68h]
  float v16; // [esp+3Ch] [ebp-64h]
  float v17; // [esp+40h] [ebp-60h]
  float v18; // [esp+44h] [ebp-5Ch]
  float v19; // [esp+48h] [ebp-58h]
  float v20; // [esp+4Ch] [ebp-54h]
  int v21; // [esp+78h] [ebp-28h]
  float v22[3]; // [esp+80h] [ebp-20h] BYREF
  int v23; // [esp+8Ch] [ebp-14h] BYREF
  float v24; // [esp+90h] [ebp-10h]
  float v25; // [esp+94h] [ebp-Ch]
  char ArgList[4]; // [esp+98h] [ebp-8h]
  float v27; // [esp+9Ch] [ebp-4h]
  int savedregs; // [esp+A0h] [ebp+0h] BYREF

  *(float *)&v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  sub_100DD660(&v23);
  if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2372) == 28 )
  {
    v27 = sub_101C46E0();
    v2 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    v3 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    sub_100D9410(v27, v3 + 580, v2 + 704);
    v4 = *(_DWORD *)(this + 4);
    if ( *(_DWORD *)(v4 + 808) == 9 )
    {
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 4));
      v5 = *(_DWORD *)(this + 4);
      v6 = *(_DWORD *)(v5 + 252);
      v22[0] = *(float *)(v4 + 580);
      v22[1] = *(float *)(v4 + 584);
      v22[2] = *(float *)(v4 + 588) - 32.0;
      if ( (v6 & 0x800) != 0 )
        sub_100DAE60(v5);
      sub_1002A5F0((int)&savedregs, this, (float *)(v5 + 580), v22, 1174421507, v4, 0, (int)v14);
      if ( v21 )
        (*(void (__thiscall **)(_DWORD, _BYTE *, const char *))(**(_DWORD **)(this + 4) + 304))(
          *(_DWORD *)(this + 4),
          v14,
          "Rollermine.Crater");
      sub_1023C380((int)"Player.SuperJump.Land", 0.0, 0);
      v7 = *(_DWORD *)(this + 4);
      *(float *)&v23 = v18 * 24.0 + v15;
      v24 = v19 * 24.0 + v16;
      v25 = 24.0 * v20 + v17;
      v8 = *(_DWORD *)(dword_106B8DA4 + 48);
      v9 = *(_DWORD *)(v7 + 252);
      v10 = *(_DWORD *)(dword_106B8DEC + 48);
      v27 = *(float *)(dword_106B8E34 + 44);
      *(_DWORD *)ArgList = v10;
      if ( (v9 & 0x800) != 0 )
        sub_100DAE60(v7);
      sub_1013D350((int)&v23, v7 + 704, v7, ArgList[0], v8, 116, v27, v7, -1, 0, 9);
      sub_101AB000(
        "grenade_explosion_01h",
        v23,
        LODWORD(v24),
        LODWORD(v25),
        LODWORD(flt_106F1CB4),
        LODWORD(flt_106F1CB8),
        LODWORD(flt_106F1CBC),
        *(_DWORD *)(this + 4));
      sub_10261B70((int)&v23, 25.0, 150.0, 1.0, 128.0, 0, 0);
    }
    if ( sub_100BDCE0(33) == -1 )
      return 1;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 33);
  }
  v11 = *(_DWORD **)(this + 4);
  if ( v11[593] == 33 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 732))(v11) )
  {
    v12 = *(_DWORD *)(this + 4);
    *(float *)(this + 16) = 0.0;
    *(float *)(v12 + 552) = 1.0;
    return 0;
  }
  return 1;
}
