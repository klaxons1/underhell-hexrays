void __thiscall sub_102F4C60(float *this, int a2, int a3)
{
  double v5; // st7
  double v6; // st4
  double v7; // st5
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp+24h] [ebp-20h]
  float v15; // [esp+34h] [ebp-10h]
  float v16; // [esp+4Ch] [ebp+8h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
    (*(void (__thiscall **)(float *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
      this,
      "TLK_ALYX_ENEMY_DEAD",
      0,
      0,
      0,
      0);
  if ( (*(_BYTE *)(a2 + 256) & 1) != 0 && *(_BYTE *)(a2 + 306) == 3 )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v5 = *(float *)(a2 + 580) - this[145];
    v6 = *(float *)(a2 + 584) - this[146];
    v7 = *(float *)(a2 + 588) - this[147];
    v15 = v7 * v7 + v6 * v6 + v5 * v5;
    if ( off_10689708(v15) >= 96.0 && *((_DWORD *)this + 1458) != 3 )
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      v8 = (*(int (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 1508))(this, a2 + 580, 2.0);
      v16 = *this;
      v9 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1084))(this, a2);
      v10 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)this + 1080))(this, a2, v9);
      (*(void (__thiscall **)(float *, int, int))(LODWORD(v16) + 1120))(this, v8, v10);
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      v14 = *(_DWORD *)(*((_DWORD *)this + 647) + 32);
      v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this);
      sub_10077EC0(v11, v14, v8, (float *)(v8 + 580), 0.0, 1);
      v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this);
      v13 = sub_100773C0(v12, v8, 0);
      if ( v13 )
        *(float *)(v13 + 32) = *(float *)(dword_106B31C8 + 12) - 10.0;
    }
  }
}
