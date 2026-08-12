void __thiscall sub_1040BF40(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // edx
  __int64 v6; // [esp+8h] [ebp-74h]
  _DWORD v7[20]; // [esp+1Ch] [ebp-60h] BYREF
  int v8[3]; // [esp+6Ch] [ebp-10h] BYREF
  int v9; // [esp+78h] [ebp-4h]

  if ( *(_BYTE *)(this + 1690) )
  {
    HIDWORD(v6) = this;
    LODWORD(v6) = this;
    sub_1010DD80((_DWORD *)(this + 1820), v6, 0.0);
  }
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  v3 = *(_DWORD *)(this + 412);
  if ( v3 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v3 >> 12
    || (v4 = off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1]) == 0
    || *(char **)(v4 + 92) != "npc_strider" && !sub_100D6240((_DWORD *)v4, "npc_strider") )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_101AB000(
      "striderbuster_break",
      *(float *)(this + 580),
      *(float *)(this + 584),
      *(float *)(this + 588),
      *(float *)(this + 704),
      *(float *)(this + 708),
      *(float *)(this + 712),
      0);
  }
  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v5 = off_10687804;
  *(_DWORD *)(this + 196) = 0;
  sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), v5);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)v8 = (double)sub_10219A30() * 0.000030518509 * 200.0 - 100.0;
  *(float *)&v8[1] = (double)sub_10219A30() * 0.000030518509 * 200.0 - 100.0;
  v9 = sub_10219A30();
  *(float *)&v8[2] = (double)v9 * 0.000030518509 * 200.0 - 100.0;
  sub_102487B0((int)v7, a2, a2, (float *)v8, (float *)(this + 580), 100.0, 1, 0, 0);
  sub_100D9E70((int *)this, this, v7);
}
