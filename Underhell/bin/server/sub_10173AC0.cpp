int __thiscall sub_10173AC0(_BYTE *this, int a2)
{
  int v3; // edi
  _DWORD v5[3]; // [esp+8h] [ebp-10h] BYREF
  __int16 v6; // [esp+14h] [ebp-4h]
  __int16 v7; // [esp+16h] [ebp-2h]

  if ( !this[1233] )
  {
    this[1233] = 1;
    this[1233] = 1;
    qmemcpy(v5, "Radio.Track.", sizeof(v5));
    v6 = (unsigned __int8)(this[1236] + 49);
    v7 = 0;
    sub_1023B860(v5);
    sub_10173A20((int)this);
  }
  v3 = sub_10173710(this, a2);
  sub_1025FAC0(this);
  return v3;
}
