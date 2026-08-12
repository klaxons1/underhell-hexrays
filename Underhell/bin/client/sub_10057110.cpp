int __thiscall sub_10057110(_DWORD *this, int a2)
{
  int v4; // edi
  int v5; // ecx
  float *v6; // edi
  int v7; // [esp-10h] [ebp-278h]
  _DWORD v8[50]; // [esp+8h] [ebp-260h] BYREF
  char v9; // [esp+D0h] [ebp-198h]
  int v10; // [esp+E4h] [ebp-184h]
  int v11; // [esp+E8h] [ebp-180h]
  int v12; // [esp+ECh] [ebp-17Ch]
  int v13; // [esp+F4h] [ebp-174h]
  int v14; // [esp+F8h] [ebp-170h]
  int v15; // [esp+FCh] [ebp-16Ch]
  int v16; // [esp+100h] [ebp-168h]
  int v17; // [esp+154h] [ebp-114h]
  int v18; // [esp+1ACh] [ebp-BCh]
  int v19; // [esp+1B4h] [ebp-B4h]
  int v20; // [esp+1B8h] [ebp-B0h]
  int v21; // [esp+1BCh] [ebp-ACh]
  int v22; // [esp+1ECh] [ebp-7Ch]
  int v23; // [esp+1F0h] [ebp-78h]
  int v24; // [esp+1F4h] [ebp-74h]
  int v25; // [esp+234h] [ebp-34h]
  float v26[9]; // [esp+238h] [ebp-30h] BYREF
  int i; // [esp+25Ch] [ebp-Ch]
  int v28; // [esp+260h] [ebp-8h]
  int v29; // [esp+264h] [ebp-4h]

  if ( !this[325] )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
  v28 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v29 = 0;
  if ( (int)this[298] > 0 )
  {
    do
    {
      v5 = this[299];
      v6 = (float *)(this[301] + 36 * v29 * v5 + 32);
      v15 = -1;
      v23 = -1;
      v17 = -1;
      v7 = this[325];
      v8[0] = &CBeamSegDraw::`vftable';
      v8[48] = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v16 = 0;
      v18 = 0;
      v24 = 0;
      v20 = 0;
      v21 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      sub_10233F90(v28, v5 - 1, v7, 0, 0);
      for ( i = 0; i < this[299]; ++i )
      {
        v26[0] = *(v6 - 2);
        v26[1] = *(v6 - 1);
        v26[2] = *v6;
        v26[3] = 0.0;
        v26[4] = 0.0;
        v26[5] = 0.0;
        v26[6] = 0.0;
        v26[7] = flt_103DB328;
        v26[8] = 0.0;
        sub_10234090(v26);
        v6 += 9;
      }
      sub_10233EF0(v8);
      if ( v18 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 16))(v18);
      if ( v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 16))(v10);
      ++v29;
    }
    while ( v29 < this[298] );
    v4 = v28;
  }
  if ( v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  return 1;
}
