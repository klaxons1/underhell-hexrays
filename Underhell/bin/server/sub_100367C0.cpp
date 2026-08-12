int __thiscall sub_100367C0(char *this)
{
  bool v2; // bl
  int v3; // eax
  int v4; // edx
  double v5; // st7
  int (__thiscall *v6)(char *); // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  float *v10; // eax
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int (__thiscall *v14)(int); // eax
  float *v15; // ebx
  int v16; // edx
  int v17; // eax
  char v18; // bl
  int *v19; // ecx
  int result; // eax
  int v21; // [esp-4h] [ebp-70h]
  float v22[3]; // [esp+10h] [ebp-5Ch] BYREF
  float v23[3]; // [esp+1Ch] [ebp-50h] BYREF
  float v24[3]; // [esp+28h] [ebp-44h] BYREF
  float v25[3]; // [esp+34h] [ebp-38h] BYREF
  float v26[3]; // [esp+40h] [ebp-2Ch] BYREF
  int v27; // [esp+4Ch] [ebp-20h] BYREF
  float v28; // [esp+50h] [ebp-1Ch]
  float v29; // [esp+54h] [ebp-18h]
  int v30; // [esp+58h] [ebp-14h] BYREF
  float v31; // [esp+5Ch] [ebp-10h]
  float v32; // [esp+60h] [ebp-Ch]
  float *v33; // [esp+64h] [ebp-8h]
  char v34; // [esp+6Bh] [ebp-1h]

  v21 = *((_DWORD *)this + 227);
  v34 = 0;
  sub_100BE180(v21, v26);
  v2 = (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 296))(this)
    || v26[0] != flt_106F1CA8
    || v26[1] != flt_106F1CAC
    || v26[2] != flt_106F1CB0;
  if ( this[3596] || (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 1276))(this) && v2 )
  {
    v3 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 80) + 4))(this + 320);
    v4 = *((_DWORD *)this + 80);
    v27 = *(int *)v3;
    v28 = *(float *)(v3 + 4);
    v5 = *(float *)(v3 + 8);
    v6 = *(int (__thiscall **)(char *))(v4 + 8);
    v29 = v5;
    v7 = v6(this + 320);
    v30 = *(int *)v7;
    v31 = *(float *)(v7 + 4);
    v32 = *(float *)(v7 + 8);
    if ( *(int *)(dword_106B31C8 + 20) <= 1 && (v8 = sub_10261B20(), (v9 = v8) != 0) )
    {
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 320) + 8))(v8 + 320);
      v11 = *(_DWORD *)(v9 + 252) >> 11;
      v33 = v10;
      if ( (v11 & 1) != 0 )
      {
        sub_100DAE60(v9);
        v10 = v33;
      }
      v12 = *(_DWORD *)(v9 + 320);
      v25[0] = *v10 + *(float *)(v9 + 580);
      v25[1] = v10[1] + *(float *)(v9 + 584);
      v13 = v10[2];
      v14 = *(int (__thiscall **)(int))(v12 + 4);
      v25[2] = v13 + *(float *)(v9 + 588);
      v15 = (float *)v14(v9 + 320);
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      v16 = *((_DWORD *)this + 63) >> 11;
      v24[0] = *(float *)(v9 + 580) + *v15;
      v24[1] = v15[1] + *(float *)(v9 + 584);
      v24[2] = v15[2] + *(float *)(v9 + 588);
      if ( (v16 & 1) != 0 )
        sub_100DAE60(this);
      v17 = *((_DWORD *)this + 63) >> 11;
      v23[0] = *(float *)&v30 + *((float *)this + 145);
      v23[1] = v31 + *((float *)this + 146);
      v23[2] = v32 + *((float *)this + 147);
      if ( (v17 & 1) != 0 )
        sub_100DAE60(this);
      v22[0] = *(float *)&v27 + *((float *)this + 145);
      v22[1] = v28 + *((float *)this + 146);
      v22[2] = v29 + *((float *)this + 147);
      v18 = sub_101133F0(v22, v23, v24, v25);
    }
    else
    {
      v18 = v34;
    }
    if ( *(_DWORD *)(dword_10690EF4 + 48) )
    {
      if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011BB20((int)(this + 580), (int)&v27, (int)&v30, (unsigned __int8)((v18 != 1) - 1), 0, 255, 64, 0.1);
    }
  }
  else
  {
    v18 = v34;
  }
  this[3616] = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1276))(this);
  if ( v18 != this[3596] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v19 = (int *)*((_DWORD *)this + 6);
      if ( v19 )
        sub_100194B0(v19, 3596);
    }
    this[3596] = v18;
  }
  result = *((_DWORD *)this + 105);
  if ( result == 9 || result == 18 )
  {
    if ( this[3596] == 1 )
      return sub_100EBE30(18);
    else
      return sub_100EBE30(9);
  }
  return result;
}
