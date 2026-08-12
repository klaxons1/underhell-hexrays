char __thiscall sub_102F3A00(int this, int a2, int a3, int a4)
{
  float *v7; // eax
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  float *v14; // eax
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  double v20; // st7
  float *v21; // eax
  float v22; // [esp+10h] [ebp-1Ch]
  float v23; // [esp+14h] [ebp-18h]
  _BYTE v24[12]; // [esp+20h] [ebp-Ch] BYREF
  int v25; // [esp+38h] [ebp+Ch]
  float v26; // [esp+3Ch] [ebp+10h]

  if ( a2 == dword_106E5708 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1356))(this) )
  {
    if ( sub_10024070((_DWORD *)this, 17) || sub_10024070((_DWORD *)this, 18) )
    {
      if ( a4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 876))(this, a4) )
          sub_100457E0((_DWORD *)this, 84);
      }
    }
    return 1;
  }
  else if ( a2 == dword_106C1B64 )
  {
    if ( !a3 )
      return 1;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 576))(a3);
    v8 = v7[1] - *(float *)(this + 584);
    v9 = v8 * v8;
    v10 = *v7 - *(float *)(this + 580);
    v11 = v9;
    v12 = v7[2] - *(float *)(this + 588);
    v23 = v10 * v10 + v11 + v12 * v12;
    *(float *)&v25 = off_10689708(v23);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 576))(a4);
    v15 = v14[1] - *(float *)(this + 584);
    v16 = v15 * v15;
    v17 = *v14 - *(float *)(this + 580);
    v18 = v16;
    v19 = v14[2] - *(float *)(this + 588);
    v22 = v17 * v17 + v18 + v19 * v19;
    v20 = off_10689708(v22);
    if ( *(float *)&v25 >= 720.0 )
      return 1;
    if ( *(float *)&v25 < v20
      && (v26 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 576))(a3) + 8),
          fabs(v26 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this) + 8)) <= 120.0)
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a4 + 876))(a4, this) )
    {
      v21 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 516))(this, v24);
      sub_1023D4B0(4096, v21, 16, 1.0, a3, 0, 0);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return sub_10394160(a2, a3, a4);
  }
}
