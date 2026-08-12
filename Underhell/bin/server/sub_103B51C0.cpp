void __thiscall sub_103B51C0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int (__thiscall *v4)(_DWORD *); // eax
  int v5; // eax
  unsigned int v6; // eax
  int **v7; // ecx
  unsigned int v8; // eax
  int *v9; // ecx
  float v10; // [esp+8h] [ebp-54h]
  _DWORD v11[7]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v12[12]; // [esp+34h] [ebp-28h] BYREF
  float v13[3]; // [esp+40h] [ebp-1Ch] BYREF
  _DWORD v14[3]; // [esp+4Ch] [ebp-10h] BYREF
  int v15; // [esp+58h] [ebp-4h]

  *(float *)v14 = flt_106F1CA8;
  *(float *)&v14[1] = flt_106F1CAC;
  *(float *)&v14[2] = flt_106F1CB0;
  v13[0] = (double)sub_10219A30() * 0.000030518509 * 300.0 - 150.0;
  v13[1] = (double)sub_10219A30() * 0.000030518509 * 300.0 - 150.0;
  v15 = sub_10219A30();
  v2 = this[63] >> 11;
  v13[2] = (double)v15 * 0.000030518509 * 300.0 - 150.0;
  if ( (v2 & 1) != 0 )
    sub_100DAE60((int)this);
  v3 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 504))(this, v12);
  *(float *)&v11[4] = 1.0;
  v11[0] = v3;
  *(float *)&v11[5] = 600.0;
  v11[1] = this + 176;
  v11[3] = v13;
  v4 = *(int (__thiscall **)(_DWORD *))(*this + 24);
  v11[2] = v14;
  v11[6] = 9;
  v5 = v4(this);
  sub_10216B90(v5, 0, (int)v11, this, -1, 1, 1);
  if ( *((_BYTE *)this + 224) != 2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 472))(this, this + 56);
    *((_BYTE *)this + 224) = 2;
  }
  sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
  v10 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v10, 0);
  sub_100EAB80(this, 32);
  v6 = this[982];
  if ( v6 != -1 )
  {
    v7 = (int **)&off_1061BE18[4 * (this[982] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[982] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[982] & 0xFFF) + 2] == v8 )
          v9 = *v7;
        else
          v9 = 0;
        sub_100F5880(v9, 0.1);
      }
    }
  }
  sub_101BD250(this + 955);
}
