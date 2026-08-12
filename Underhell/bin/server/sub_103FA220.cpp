int __thiscall sub_103FA220(_BYTE *this, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  float v5; // eax
  _BYTE v7[48]; // [esp+4h] [ebp-3Ch] BYREF
  float v8[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( this[73] )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*a4 + 508))(a4);
    v8[0] = *(float *)v4;
    v8[1] = *(float *)(v4 + 4);
    v5 = *(float *)(v4 + 8);
    v8[0] = 0.0;
    v8[2] = v5;
    sub_104227F0(v8);
    sub_10424EE0(a2, a3, v7);
    return a2;
  }
  else
  {
    if ( (a4[63] & 0x800) != 0 )
      sub_100DAE60((int)a4);
    sub_10424EE0(a2, a3, a4 + 125);
    return a2;
  }
}
