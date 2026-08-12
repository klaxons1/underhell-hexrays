char __thiscall sub_102A1370(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  char result; // al
  int v6; // edi
  char *v7; // eax
  int v8; // edx
  int v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v12[3]; // [esp+28h] [ebp-3Ch] BYREF
  float v13[3]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v14[3]; // [esp+40h] [ebp-24h] BYREF
  _DWORD v15[3]; // [esp+4Ch] [ebp-18h] BYREF
  float v16[3]; // [esp+58h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 68);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 868))(v4) )
    return 0;
  v6 = sub_102A0860((_DWORD *)this);
  if ( v6 == -1 )
    return 0;
  result = sub_1029F330((_DWORD *)this, v6, v16, (float *)(this + 88));
  if ( result )
  {
    sub_102A11F0((_DWORD *)this, v6);
    v7 = sub_10073710(*(_DWORD *)(*(_DWORD *)(this + 4) + 1676));
    v14[0] = *(_DWORD *)v7;
    v14[1] = *((_DWORD *)v7 + 1);
    v8 = *((_DWORD *)v7 + 2);
    v9 = *(_DWORD *)(this + 4);
    v14[2] = v8;
    v10 = sub_10073730(*(_DWORD *)(v9 + 1676));
    v15[0] = *(_DWORD *)v10;
    v15[1] = *((_DWORD *)v10 + 1);
    v15[2] = *((_DWORD *)v10 + 2);
    v11 = sub_10129A00(v16, (int)v14, (int)v15, *(_DWORD *)(this + 4), 1);
    if ( v11 )
      *(_DWORD *)(this + 72) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 8))(v11);
    else
      *(_DWORD *)(this + 72) = -1;
    *(float *)(this + 76) = v16[0];
    *(float *)(this + 80) = v16[1];
    *(float *)(this + 84) = v16[2];
    *(float *)(this + 96) = 0.0;
    *(float *)(this + 88) = 0.0;
    if ( *(_DWORD *)(dword_106DB4EC + 48) )
    {
      sub_104222B0(this + 88, v13, 0, 0);
      *(float *)v12 = v13[0] * 64.0 + *(float *)(this + 76);
      *(float *)&v12[1] = v13[1] * 64.0 + *(float *)(this + 80);
      *(float *)&v12[2] = 64.0 * v13[2] + *(float *)(this + 84);
      sub_1011C3A0((float *)(this + 76), (float *)v12, 8.0, 255, 255, 0, 64, 1, 4.0);
    }
    return 1;
  }
  return result;
}
