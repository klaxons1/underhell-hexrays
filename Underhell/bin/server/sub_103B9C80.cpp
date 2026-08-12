int __userpurge sub_103B9C80@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  unsigned int v4; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int *v17; // edi
  int v18; // esi
  int v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+24h] [ebp+8h]

  v4 = a3[10];
  v21 = a3[13];
  v20 = a2;
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
  if ( (unsigned __int8)sub_103D2120(v6) )
    v21 = *(int *)(dword_106EB564 + 44);
  else
    sub_103B84A0(a1);
  v7 = a3[11];
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (a3[11] & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (a3[11] & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        v10 = off_1061BE18[4 * (a3[11] & 0xFFF) + 2] == v9 ? *v8 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v10 + 320))(v10, v20) )
          *(float *)&v21 = ((double (__stdcall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 312))(v21);
      }
    }
  }
  v11 = a3[10];
  if ( v11 == -1 || off_1061BE18[4 * (a3[10] & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (a3[10] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
    sub_100DAE60(v12);
  v13 = a3[10];
  if ( v13 == -1 || off_1061BE18[4 * (a3[10] & 0xFFF) + 2] != v13 >> 12 )
    v14 = 0;
  else
    v14 = off_1061BE18[4 * (a3[10] & 0xFFF) + 1];
  (*(void (__thiscall **)(_DWORD *, int, int, _DWORD, _DWORD, _DWORD, int))(*a1 + 1704))(
    a1,
    v14,
    v12 + 580,
    0.5,
    2.0,
    0.0,
    v20);
  v15 = a3[10];
  if ( v15 == -1 || off_1061BE18[4 * (a3[10] & 0xFFF) + 2] != v15 >> 12 )
    v16 = 0;
  else
    v16 = off_1061BE18[4 * (a3[10] & 0xFFF) + 1];
  if ( (unsigned __int8)sub_103D2120(v16) )
    sub_100C7570(a1, 144, COERCE_FLOAT(1), 1);
  else
    sub_100C7570(a1, 145, COERCE_FLOAT(1), 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 1624))(a1, a3);
  v17 = a1 + 55;
  v18 = *v17 - (int)*(float *)&v21;
  if ( *v17 != v18 )
  {
    (*(void (__thiscall **)(int *, int *))(*(v17 - 55) + 464))(v17 - 55, v17);
    *v17 = v18;
  }
  return (int)*(float *)&v21;
}
