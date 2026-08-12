void __usercall sub_102D2420(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+0h] [ebp-18h]
  _BYTE v21[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 308);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5)
    && *v4
    && (v4[1] != v5 ? (v6 = 0) : (v6 = *v4),
        (v7 = *(_DWORD *)(v6 + 308), v7 != -1)
     && (v8 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 308) & 0xFFF) + 1], v8[1] == v7 >> 12)
     && *v8) )
  {
    v20 = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_100EC4A0((int *)a1, v20, 0);
  }
  else
  {
    sub_102D1850((_DWORD *)a1, a2);
    v9 = *(_DWORD *)(a1 + 1396);
    if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1396) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1396) & 0xFFF) + 1];
    sub_100E0D20(v10, (float *)(a1 + 900));
    v11 = *(_DWORD *)(a1 + 912);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 912) & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 912) & 0xFFF) + 1];
    v13 = *(_DWORD *)(a1 + 1396);
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1396) & 0xFFF) + 2] != v13 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1396) & 0xFFF) + 1];
    sub_104044B0(v14, v12);
    v15 = *(_DWORD *)(a1 + 912);
    if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 912) & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 912) & 0xFFF) + 1];
    v17 = *(_DWORD *)(a1 + 1396);
    if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1396) & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1396) & 0xFFF) + 1];
    sub_104044E0(v18, v16 != 0);
    if ( *(_BYTE *)(a1 + 1412) )
    {
      v19 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 744))(a1, v21);
      sub_102C95C0(a1, a2, v19);
    }
  }
}
