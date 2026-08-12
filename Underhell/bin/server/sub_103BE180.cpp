int __thiscall sub_103BE180(unsigned int this, int a2)
{
  double v3; // st7
  int *v5; // edi
  int v6; // ebx
  int v7; // eax
  float v8; // [esp+14h] [ebp-64h]
  _DWORD v9[10]; // [esp+28h] [ebp-50h] BYREF
  unsigned int v10; // [esp+50h] [ebp-28h]
  float v11; // [esp+5Ch] [ebp-1Ch]

  if ( !*(_BYTE *)(this + 225) )
    return 0;
  sub_1001E4E0(v9, a2);
  v3 = v11;
  if ( !*(_BYTE *)(this + 3629) )
    v3 = v3 * 0.1;
  if ( (double)*(int *)(this + 3624) > v3 )
    return 0;
  v5 = (int *)(this + 220);
  v6 = *(_DWORD *)(this + 220) - (int)v3;
  if ( *(_DWORD *)(this + 220) != v6 )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 464))(this, this + 220);
    *v5 = v6;
  }
  if ( *v5 > 0 )
    return 1;
  if ( *v5 )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 464))(this, this + 220);
    *v5 = 0;
  }
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  sub_100EA9A0((int *)this, 0x2000);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1013D530((float *)(this + 580), (float *)(this + 728), this, 100, 100, 0, 0.0, 0, 0, -1);
  sub_100EC3F0((_DWORD *)this, (int)sub_103BDFA0, 0.0, 0);
  sub_1023B860((_DWORD *)this, (int)"NPC_CeilingTurret.Alert");
  if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(this + 2944), __SPAIR64__(this, v7), 0.0);
  v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v8, 0);
  return 0;
}
