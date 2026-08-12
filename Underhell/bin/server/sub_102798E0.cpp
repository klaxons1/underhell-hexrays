void __thiscall sub_102798E0(__int16 *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  float v14; // [esp+1Ch] [ebp-30h]
  float v15; // [esp+1Ch] [ebp-30h]
  float v16; // [esp+1Ch] [ebp-30h]
  float v17; // [esp+1Ch] [ebp-30h]
  float v18[3]; // [esp+2Ch] [ebp-20h] BYREF
  float v19; // [esp+38h] [ebp-14h] BYREF
  float v20; // [esp+3Ch] [ebp-10h]
  int v21; // [esp+40h] [ebp-Ch]
  float v22; // [esp+44h] [ebp-8h]
  float v23; // [esp+48h] [ebp-4h]

  v2 = sub_100D1940(this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
  {
    v3 = *(_DWORD *)dword_106B31E4;
    v14 = *(float *)(sub_100D0CC0(this) + 12);
    v4 = sub_100D0CC0(this);
    v18[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v3 + 4))(
               dword_106B31E4,
               *(float *)(v4 + 8),
               LODWORD(v14));
    v5 = *(_DWORD *)dword_106B31E4;
    v15 = *(float *)(sub_100D0CC0(this) + 20);
    v6 = sub_100D0CC0(this);
    v18[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v5 + 4))(
               dword_106B31E4,
               *(float *)(v6 + 16),
               LODWORD(v15));
    v18[2] = 0.0;
    sub_100F7A60((float *)v2, v18);
    v19 = *(float *)(v2 + 728);
    v20 = *(float *)(v2 + 732);
    v21 = *(_DWORD *)(v2 + 736);
    v7 = *(_DWORD *)dword_106B31E4;
    v16 = *(float *)(sub_100D0CC0(this) + 28);
    v8 = sub_100D0CC0(this);
    v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v7 + 4))(
            dword_106B31E4,
            *(float *)(v8 + 24),
            LODWORD(v16));
    v9 = *(_DWORD *)dword_106B31E4;
    v17 = *(float *)(sub_100D0CC0(this) + 36);
    v10 = sub_100D0CC0(this);
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v9 + 4))(
            dword_106B31E4,
            *(float *)(v10 + 32),
            LODWORD(v17));
    v22 = v11;
    if ( *(_BYTE *)(v2 + 2272) )
    {
      v12 = sub_100D0CC0(this);
      v23 = *(float *)(v12 + 40) * v23;
      v13 = sub_100D0CC0(this);
      v11 = *(float *)(v13 + 40) * v22;
    }
    v19 = v19 + v23;
    v20 = v20 + v11;
    if ( 0.0 != v23 || 0.0 != v11 )
      sub_101E1CC0(v2, &v19, 0);
  }
}
