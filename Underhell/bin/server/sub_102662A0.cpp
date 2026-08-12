void __thiscall sub_102662A0(_DWORD *this, int a2, int a3, int a4)
{
  _BYTE v5[48]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v6[48]; // [esp+38h] [ebp-30h] BYREF

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10424F80(this + 125, v6);
  sub_100BD660((int)this, a2, a3, a4);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10421E30(this + 125, v6, v5);
  sub_101450A0(this + 281, (int)v5);
}
