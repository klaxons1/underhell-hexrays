void __thiscall sub_10414830(_DWORD *this)
{
  _BYTE *v2; // esi
  char **v3; // ebx
  _DWORD *v4; // esi
  int v5; // edx
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // eax
  int v11; // ecx
  double v12; // st7
  float v13; // [esp+18h] [ebp-38h]
  float v14[3]; // [esp+34h] [ebp-1Ch] BYREF
  float v15; // [esp+40h] [ebp-10h] BYREF
  float v16; // [esp+44h] [ebp-Ch]
  float v17; // [esp+48h] [ebp-8h]
  int v18; // [esp+4Ch] [ebp-4h]

  v2 = this + 56;
  if ( *((_BYTE *)this + 224) != 2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 472))(this, this + 56);
    *v2 = 2;
  }
  v3 = off_10688A8C;
  do
  {
    v4 = (_DWORD *)sub_101811E0("prop_physics", -1);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_100E0D20((int)v4, (float *)this + 145);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_100E0EA0((int)v4, (float *)this + 176);
    if ( (this[63] & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    sub_100DD660((int)v4, (float *)this + 119);
    (*(void (__thiscall **)(_DWORD *, char *))(*v4 + 104))(v4, *v3);
    (*(void (__thiscall **)(_DWORD *))(*v4 + 96))(v4);
    sub_100E0970((int)v4, v5, 6, 0);
    v6 = sub_10206B90(v4);
    *(float *)&v18 = v6;
    if ( v6 < 200.0 )
    {
      sub_10206B20(v4, &v15);
      v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
      v15 = v15 - *v7;
      v16 = v16 - v7[1];
      v17 = fabs(v17 - v7[2]);
      off_10689714();
      v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             150.0,
             300.0);
      v9 = v8 * 100.0 / *(float *)&v18;
      v15 = v15 * v9;
      v16 = v16 * v9;
      v17 = v9 * v17 + 100.0;
      *(float *)&v18 = COERCE_FLOAT(sub_10219A30());
      v14[0] = (double)v18 * 0.000030518509 * 1000.0 - 500.0;
      *(float *)&v18 = COERCE_FLOAT(sub_10219A30());
      v14[1] = (double)v18 * 0.000030518509 * 1000.0 - 500.0;
      v10 = sub_10219A30();
      v11 = v4[106];
      v18 = v10;
      v14[2] = (double)v10 * 0.000030518509 * 1000.0 - 500.0;
      if ( v11 )
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v11 + 208))(v11, &v15, v14);
      sub_100EBE30((int)v4, 1);
    }
    if ( *(_DWORD *)(dword_10698344 + 48) )
      v12 = 6.0;
    else
      v12 = 60.0;
    v13 = v12;
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*v4 + 808))(LODWORD(v13), 0, 0.0, 0);
    ++v3;
  }
  while ( (int)v3 < (int)&dword_10688AA4 );
  sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 4);
  sub_100EAB80(this, 32);
  sub_1025FAC0((int)this);
}
