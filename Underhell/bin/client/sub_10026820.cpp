char __thiscall sub_10026820(_DWORD *this, int a2, float *a3, int a4)
{
  _BYTE v6[48]; // [esp+4h] [ebp-90h] BYREF
  _BYTE v7[48]; // [esp+34h] [ebp-60h] BYREF
  _BYTE v8[12]; // [esp+64h] [ebp-30h] BYREF
  float v9; // [esp+70h] [ebp-24h]
  float v10; // [esp+80h] [ebp-14h]
  float v11; // [esp+90h] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _BYTE *))(this[1] + 144))(this + 1, a2, v7) )
    return 0;
  sub_10037F50(this);
  sub_101F0AB0(this + 165, v6);
  sub_101EDC00(v6, v7, v8);
  *a3 = v9;
  a3[1] = v10;
  a3[2] = v11;
  sub_101ED7B0(v8, a4);
  return 1;
}
