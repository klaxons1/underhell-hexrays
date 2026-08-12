char __thiscall sub_1036CCF0(_DWORD *this, _DWORD *a2)
{
  int v4; // [esp+1Ch] [ebp-Ch] BYREF
  float v5; // [esp+20h] [ebp-8h]
  float v6; // [esp+24h] [ebp-4h]

  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_101692F0((float *)&v4, (int)this, this[145], this[146], this[147], a2[145], a2[146], a2[147], 0.5, 1.0, 0, 0, 0);
  *(float *)&v4 = *(float *)&v4 * 0.89999998;
  v5 = v5 * 0.89999998;
  v6 = 0.89999998 * v6;
  sub_1036C2B0((int)this, (float *)&v4);
  sub_10044830(this, 0.0);
  sub_100448D0(this, (int)a2);
  return sub_10070B10(a2, (int)this);
}
