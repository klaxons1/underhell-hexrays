char __thiscall sub_10399800(_BYTE *this)
{
  int v3; // edi
  double v4; // st6
  double v5; // st5
  float v6; // [esp+0h] [ebp-60h]
  int v7[19]; // [esp+10h] [ebp-50h] BYREF
  int v8; // [esp+5Ch] [ebp-4h]
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this) || !this[5600] || !sub_103942C0((int)this) )
    return 0;
  sub_10072560(v7);
  v8 = sub_10394DA0(this);
  sub_10070FE0(v7, 13);
  sub_1042C170(1281);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10072770(v7, (float *)this + 145, 1800.0);
  v3 = sub_10072EE0((int)this, v7);
  if ( !v3 )
    goto LABEL_16;
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v4 = *(float *)(v3 + 584) - *((float *)this + 146);
  v5 = *(float *)(v3 + 580) - *((float *)this + 145);
  v6 = v5 * v5 + v4 * v4;
  if ( off_10689708(v6) >= 24.0 && sub_103989D0((int)this, (int)&savedregs, v3, (int)this, v3) && v3 != v8 )
  {
    sub_10395940((int *)this, v3);
    sub_100725D0(v7);
    return 1;
  }
  else
  {
LABEL_16:
    sub_100725D0(v7);
    return 0;
  }
}
