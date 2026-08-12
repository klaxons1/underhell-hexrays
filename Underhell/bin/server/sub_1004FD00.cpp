int __thiscall sub_1004FD00(_DWORD *this)
{
  int v2; // edi
  bool v3; // cc
  int v4; // esi
  int v5; // esi
  _BYTE v7[76]; // [esp+Ch] [ebp-50h] BYREF
  float v8; // [esp+58h] [ebp-4h]

  sub_10072560(v7);
  v2 = this[1];
  sub_10072690(951);
  sub_1042C170(2080);
  v3 = *(_DWORD *)(dword_106B31C8 + 20) <= 1;
  v8 = *(float *)(dword_10691FF4 + 44);
  if ( v3 )
    v4 = sub_10261B20();
  else
    v4 = 0;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_10072770(v4 + 580, v8);
  v5 = sub_10072EE0(v2, v7);
  if ( v5 )
    sub_10070510(4.0);
  sub_100725D0(v7);
  return v5;
}
