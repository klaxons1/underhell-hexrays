int __thiscall sub_100CB580(char *this, int a2)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  float *v8; // eax
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st6
  int v14; // ebx
  _DWORD *v15; // edi
  float v16; // [esp+10h] [ebp-18h]
  float v17; // [esp+14h] [ebp-14h]
  float v18; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+24h] [ebp-4h]
  float v22; // [esp+30h] [ebp+8h]

  v20 = flt_106F1CAC;
  v4 = *(_DWORD *)(a2 + 40);
  v19 = flt_106F1CA8;
  v21 = flt_106F1CB0;
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v6 )
    {
      if ( *v5 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
        v16 = *v8;
        v17 = v8[1];
        v18 = v8[2] - 10.0;
        v9 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 576))(this);
        v19 = v16 - *v9;
        v20 = v17 - v9[1];
        v21 = v18 - v9[2];
        off_10689714();
      }
    }
  }
  flt_106B4F40 = v19;
  flt_106B4F44 = v20;
  flt_106B4F48 = v21;
  if ( this[225] != 1 )
  {
    v22 = *(float *)(a2 + 52);
    v10 = v22 - floor(*(float *)(a2 + 52));
    v11 = *(float *)(a2 + 52) - v10;
    v12 = v10 + *((float *)this + 437);
    *((float *)this + 437) = v12;
    if ( v12 >= 1.0 )
    {
      v11 = v11 + 1.0;
      *((float *)this + 437) = v12 - 1.0;
    }
    if ( v11 <= 0.0 )
      return 0;
    v14 = *((_DWORD *)this + 55);
    v15 = this + 220;
    if ( v14 != v14 - (int)v11 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*(v15 - 55) + 464))(v15 - 55, v15);
      *v15 = v14 - (int)v11;
    }
  }
  return 1;
}
