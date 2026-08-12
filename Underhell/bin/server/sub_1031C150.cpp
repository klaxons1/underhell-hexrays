int __thiscall sub_1031C150(int this)
{
  int *v2; // ecx
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // edx
  float v7; // edx
  float v8; // eax
  int v9; // edx
  int v10; // edx
  int *v11; // ecx
  _BYTE *v12; // edi
  int v13; // ecx
  int *v14; // ecx
  int result; // eax
  float v16[3]; // [esp+2Ch] [ebp-34h] BYREF
  float v17[3]; // [esp+38h] [ebp-28h] BYREF
  float v18[3]; // [esp+44h] [ebp-1Ch] BYREF
  float v19; // [esp+50h] [ebp-10h] BYREF
  float v20; // [esp+54h] [ebp-Ch]
  float v21; // [esp+58h] [ebp-8h]
  float v22; // [esp+5Ch] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_100EBE30(this, 13);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(
    this,
    "models/combine_helicopter/helicopter_bomb01.mdl");
  if ( (*(_BYTE *)(this + 250) & 1) != 0 && *(_DWORD *)(this + 848) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 848);
    }
    *(_DWORD *)(this + 848) = 1;
  }
  v3 = this + 320;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    sub_10112C00(v3, 2);
    v19 = 12.5;
    v20 = 12.5;
    v21 = 12.5;
    v18[0] = -12.5;
    v18[1] = -12.5;
    v18[2] = -12.5;
    sub_100D5D10((int)v18, (int)&v19);
    sub_100E9630((float *)this, 0, 0, 0);
    sub_100E0970(this, v9, 5, 2);
    v10 = *(_DWORD *)(this + 560);
    v22 = 0.5;
    if ( v10 != COERCE_INT(0.5) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          sub_100194B0(v11, 560);
      }
      *(float *)(this + 560) = 0.5;
    }
    sub_100EAB80((_DWORD *)this, 16);
  }
  else
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 48))(v3);
    v5 = sub_100E9550((_DWORD *)this, 6, v4, 0, 0);
    sub_100E0970(this, v6, 6, 0);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v7 = *(float *)(this + 480);
    v8 = *(float *)(this + 484);
    v19 = *(float *)(this + 476);
    v20 = v7;
    v21 = v8;
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 208))(v5, &v19, 0);
  }
  *(_DWORD *)(this + 252) |= 0x200000u;
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_10422540(this + 476, v16);
  sub_100E11A0(this, v16);
  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v17[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -100.0,
             -500.0);
  v17[1] = 0.0;
  v17[2] = 0.0;
  sub_100D7260((float *)this, v17);
  *(_DWORD *)(this + 196) = sub_10318670;
  *(float *)(this + 552) = sub_10260720(400.0);
  *(_BYTE *)(this + 2168) = 0;
  *(float *)(this + 2160) = 5.0;
  v12 = (_BYTE *)(this + 225);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( *v12 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *v12 = 0;
    }
  }
  else if ( *v12 != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *v12 = 2;
  }
  *(_DWORD *)(this + 2148) = 0;
  *(_WORD *)(this + 2144) = 0;
  v13 = *(_DWORD *)(this + 2128);
  v22 = *(float *)(dword_106E35CC + 44);
  if ( v13 != LODWORD(v22) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 2128);
    }
    *(float *)(this + 2128) = v22;
  }
  ((void (__thiscall *)(int (__stdcall ***)(int, int), int, int))**off_1061BE1C)(off_1061BE1C, this, this);
  result = dword_10698344;
  if ( *(_DWORD *)(dword_10698344 + 48) )
    return sub_100EC3F0((_DWORD *)this, (int)sub_10313D70, *(float *)(dword_106B31C8 + 12), off_1066C8E0);
  return result;
}
