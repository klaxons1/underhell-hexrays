char __thiscall sub_100F17D0(float *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  _DWORD *v6; // edi
  int v8; // ecx
  int v9; // edi
  double v10; // st7
  int v11; // esi
  int v12; // eax
  int v14; // eax
  int v15; // esi
  int v16; // eax
  double v17; // st7
  float v18; // [esp+4h] [ebp-24h]
  float v19; // [esp+8h] [ebp-20h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+8h] [ebp-20h]
  float v22; // [esp+Ch] [ebp-1Ch]
  _BYTE v23[12]; // [esp+1Ch] [ebp-Ch] BYREF
  int v24; // [esp+30h] [ebp+8h]
  float v25; // [esp+34h] [ebp+Ch]

  v5 = *(_DWORD *)(a2 + 36);
  v6 = (_DWORD *)(a2 + 36);
  v24 = a2 + 36;
  if ( v5 != -1
    && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (v5 & 0xFFF) + 1]
    && sub_100EFD10(this, a3, a4, 1) )
  {
    if ( !*(_BYTE *)(a2 + 12) )
      *(float *)(a2 + 44) = this[183];
    if ( *v6 == -1 || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
    if ( (float *)v8 == this )
      return 1;
    v9 = sub_100D7680((int)this);
    if ( v9 )
    {
      if ( *(_BYTE *)(a2 + 40) != (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
        *(float *)(a2 + 44) = this[183];
      *(_BYTE *)(a2 + 40) = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 296))(this);
      v10 = sub_1041CA40(a3);
      v22 = v10;
      sub_1041A260(a4, v22);
      v25 = v10;
      if ( *(_BYTE *)(a2 + 40) )
      {
        v11 = *(_DWORD *)v9;
        v18 = v10;
        v12 = sub_1026A890(v24);
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(v11 + 1712))(v9, v12, LODWORD(v18), 0.2, 0.0);
        return 1;
      }
      v14 = sub_1026A890(v24);
      v15 = *(_DWORD *)v9;
      v16 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 504))(v14, v23);
      v17 = ((double (__thiscall *)(int, int))*(_DWORD *)(v15 + 1696))(v9, v16);
      v19 = v17;
      sub_10019610(v19, *(float *)(a2 + 44));
      v20 = v17 * v25 + *(float *)(a2 + 44);
      v21 = sub_100195E0(v20);
      sub_10078210(*(float **)(v9 + 2604), v21, -1.0);
      return 1;
    }
  }
  return 0;
}
