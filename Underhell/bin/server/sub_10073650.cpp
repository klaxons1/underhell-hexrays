_DWORD *__thiscall sub_10073650(__int16 *this, _DWORD *a2, __int16 *a3)
{
  _DWORD *result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // [esp+8h] [ebp-18h] BYREF
  _DWORD v8[5]; // [esp+Ch] [ebp-14h] BYREF

  if ( (_BYTE)a3 || (result = (_DWORD *)this[408], a2 != result) )
  {
    v5 = this[408];
    v8[0] = 0;
    v8[1] = 0;
    v8[3] = 0;
    v8[4] = 0;
    a3 = this;
    v8[2] = 1;
    v7 = v5;
    v6 = (unsigned __int16)sub_10071DB0(&off_10607418, (int)&v7);
    sub_102375F0(v8);
    if ( v6 != 0xFFFF )
      sub_1023E0F0(&a3);
    this[408] = (__int16)a2;
    return sub_100734E0((int)this);
  }
  return result;
}
