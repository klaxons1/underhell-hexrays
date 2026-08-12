char __thiscall sub_1034BFE0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  char result; // al
  int v5; // ecx
  float v6; // eax
  double v7; // st7
  bool v8; // zf
  int v9; // edi
  int *v10; // eax
  int v11; // eax
  int v12; // ecx
  float v13; // [esp+34h] [ebp-4Ch]
  _BYTE v14[12]; // [esp+40h] [ebp-40h] BYREF
  int v15[3]; // [esp+4Ch] [ebp-34h] BYREF
  int v16[3]; // [esp+58h] [ebp-28h] BYREF
  int v17; // [esp+64h] [ebp-1Ch] BYREF
  float v18; // [esp+68h] [ebp-18h]
  float v19; // [esp+6Ch] [ebp-14h]
  int v20; // [esp+70h] [ebp-10h] BYREF
  float v21; // [esp+74h] [ebp-Ch]
  float v22; // [esp+78h] [ebp-8h]
  float v23; // [esp+7Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 4016);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return 0;
  if ( !*v3 )
    return 0;
  if ( *(int *)(this + 3988) < 0 )
    return 0;
  sub_1034BC50((_DWORD *)this, (float *)v15, (float *)&v17, (int)&v20, &v23);
  if ( *(float *)(this + 3996) < (double)v23 )
    return 0;
  if ( v21 * v18 + *(float *)&v20 * *(float *)&v17 + v19 * v22 < 0.9659258262891 )
  {
    *(float *)(this + 3936) = *(float *)(dword_106B31C8 + 12) + 0.1;
    return 0;
  }
  v5 = *(_DWORD *)(this + 3980);
  if ( v5 > 0 )
  {
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3936) )
    {
      v8 = *(_BYTE *)(this + 3977) == 0;
      *(_DWORD *)(this + 3980) = v5 - 1;
      if ( v8 )
        sub_10349240(this);
      sub_10422540(&v20, v14);
      v9 = (int)*off_1061B7A0;
      v13 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              5.0,
              7.0,
              2);
      (*(void (__thiscall **)(int (__stdcall ***)(char), int *, _BYTE *, _DWORD))(v9 + 20))(
        off_1061B7A0,
        v15,
        v14,
        LODWORD(v13));
      *(float *)(this + 3936) = *(float *)(dword_106B31C8 + 12) + 0.05;
      v20 = v17;
      v21 = v18;
      v22 = v19;
      v10 = sub_102D9B20();
      v11 = sub_100B9D10(v10, "CombineCannon");
      *(float *)v16 = 0.017449999;
      v12 = *(_DWORD *)(dword_106E67CC + 48);
      *(float *)&v16[1] = 0.017449999;
      *(float *)&v16[2] = 0.017449999;
      sub_10349370((void *)this, 1, (float *)v15, (float *)&v20, (float *)v16, 8192.0, v11, 1, -1, -1, v12, 0, 0);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v6 = COERCE_FLOAT(RandomInt(10, 20));
    v23 = v6;
    *(float *)(this + 3980) = v6;
    v7 = (double)SLODWORD(v6) * 0.1;
    result = 0;
    *(float *)(this + 3936) = v7 + *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
