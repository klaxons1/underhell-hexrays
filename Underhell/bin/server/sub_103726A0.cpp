void __thiscall sub_103726A0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // esi
  double v6; // st7
  int v7; // eax
  void (__thiscall *v8)(int, _BYTE *, _BYTE *, float *); // edx
  _BYTE v9[12]; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v10[12]; // [esp+30h] [ebp-30h] BYREF
  float v11[3]; // [esp+3Ch] [ebp-24h] BYREF
  float v12[3]; // [esp+48h] [ebp-18h] BYREF
  float v13; // [esp+54h] [ebp-Ch] BYREF
  float v14; // [esp+58h] [ebp-8h]
  float v15; // [esp+5Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 1704);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v5 + 520))(v5, v12, this + 580, 1);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_10424670(this + 580, this + 1692, v12, v9, 0);
        v13 = v12[0] - *(float *)(this + 1692);
        v14 = v12[1] - *(float *)(this + 1696);
        v15 = v12[2] - *(float *)(this + 1700);
        off_10689714();
        sub_10422540(&v13, v10);
        v6 = *(float *)(dword_106E8724 + 44);
        if ( 0.0 == v6 )
          v6 = 2500.0;
        v7 = *(_DWORD *)this;
        v11[0] = v13 * v6;
        v8 = *(void (__thiscall **)(int, _BYTE *, _BYTE *, float *))(v7 + 416);
        v11[1] = v14 * v6;
        v11[2] = v6 * v15;
        v8(this, v9, v10, v11);
        sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), off_10674260);
      }
    }
  }
}
