char __thiscall sub_101EAE40(int this, int a2)
{
  float *v3; // eax
  int v4; // eax
  unsigned __int8 v6; // al
  int v7; // esi
  float v9[3]; // [esp+4h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp+8h]

  if ( (*(_DWORD *)(this + 3416) & 8) == 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 532))(this);
    v9[0] = *v3 + *(float *)(this + 580);
    v9[1] = v3[1] + *(float *)(this + 584);
    v9[2] = v3[2] + *(float *)(this + 588);
    sub_100E0D20(this, v9);
    sub_100DC4E0((float *)this, &flt_106F1CA8);
  }
  *(_DWORD *)(this + 3416) |= 8u;
  if ( sub_100CF460((_DWORD *)this) )
  {
    v4 = sub_100CF460((_DWORD *)this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 996))(v4, 0);
  }
  if ( *(_BYTE *)(this + 2329)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
  {
    *(_DWORD *)(this + 3672) = 0;
    *(_DWORD *)(this + 3676) = 0;
    *(_DWORD *)(this + 3680) = 0;
    *(_DWORD *)(this + 3684) = 0;
  }
  sub_101C73D0((unsigned int *)this, 0);
  sub_100EA9A0((int *)this, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1328))(this, a2);
  if ( *(_DWORD *)(dword_106B31C8 + 72) != 3 )
  {
    v10 = *(float *)this;
    v6 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1324))(this, a2, 0);
    (*(void (__thiscall **)(int, const char *, _DWORD))(LODWORD(v10) + 1176))(this, "specgui", v6);
  }
  if ( *(_DWORD *)(this + 2252) != 8 )
  {
    (**(void (__thiscall ***)(int, int))(this + 2192))(this + 2192, this + 2252);
    *(_DWORD *)(this + 2252) = 8;
  }
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  sub_100EAB80((_DWORD *)this, 32);
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  if ( *(_BYTE *)(this + 224) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 2;
  }
  v7 = this + 3244;
  *(float *)(v7 + 232) = *(float *)(dword_106B31C8 + 12);
  if ( *(_BYTE *)v7 != 1 )
  {
    (**(void (__thiscall ***)(int, int))(v7 - 4))(v7 - 4, v7);
    *(_BYTE *)v7 = 1;
  }
  return 1;
}
