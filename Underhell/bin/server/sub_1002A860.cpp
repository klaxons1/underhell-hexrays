int __thiscall sub_1002A860(_DWORD *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // edi
  int *v11; // esi
  int v12; // edi
  float v14; // [esp+4h] [ebp-18h]
  float v15; // [esp+8h] [ebp-14h]
  float v16; // [esp+Ch] [ebp-10h]
  float v17; // [esp+10h] [ebp-Ch]
  float v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+18h] [ebp-4h]

  v2 = a2;
  v4 = *(_DWORD *)(a2 + 40);
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
        v14 = *v8;
        v15 = v8[1];
        v16 = v8[2] - 10.0;
        v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
        v17 = v14 - *v9;
        v18 = v15 - v9[1];
        v19 = v16 - v9[2];
        off_10689714();
        flt_106B4F40 = v17;
        flt_106B4F44 = v18;
        flt_106B4F48 = v19;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3CDC + 68))(
         dword_106B3CDC,
         *(_DWORD *)(a2 + 64))
    && *((_BYTE *)this + 225) != 1 )
  {
    v10 = this[55] - (int)(*(float *)(a2 + 52) * 0.1);
    if ( this[55] != v10 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
      this[55] = v10;
    }
    v2 = a2;
  }
  if ( (*(_DWORD *)(v2 + 64) & 0x1000000) != 0 && *((_BYTE *)this + 225) != 1 )
  {
    v11 = this + 55;
    v12 = this[55] - (int)*(float *)(v2 + 52);
    if ( this[55] != v12 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
      *v11 = v12;
    }
    if ( *v11 < -500 )
      sub_1025FAC0(this);
  }
  return 1;
}
