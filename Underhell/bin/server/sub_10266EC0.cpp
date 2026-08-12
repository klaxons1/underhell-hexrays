void __userpurge sub_10266EC0(int a1@<ecx>, int *a2@<esi>, int a3, int a4)
{
  int v4; // eax
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // eax
  bool v10; // c0
  bool v11; // c3
  int v12; // edx
  unsigned int v13; // eax
  int *v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  double v17; // st7
  double v18; // st7
  int (__thiscall **v19)(int); // edx
  int v20; // eax
  int *v21; // eax
  int v22; // [esp+14h] [ebp-8Ch]
  _DWORD v23[20]; // [esp+2Ch] [ebp-74h] BYREF
  int v24[3]; // [esp+7Ch] [ebp-24h] BYREF
  int v25[3]; // [esp+88h] [ebp-18h] BYREF
  BOOL v26; // [esp+94h] [ebp-Ch]
  int v27; // [esp+98h] [ebp-8h] BYREF
  int v28; // [esp+9Ch] [ebp-4h]
  int v29; // [esp+ACh] [ebp+Ch]
  int v30; // [esp+ACh] [ebp+Ch]

  v4 = 0;
  v28 = 0;
  if ( *(int *)(a1 + 1456) > 0 )
  {
    a2 = off_1061BE18;
    do
    {
      v7 = (_DWORD *)(*(_DWORD *)(a1 + 1444) + 4 * v4);
      if ( *v7 != -1 && a2[4 * (*v7 & 0xFFF) + 2] == *v7 >> 12 && a2[4 * (*v7 & 0xFFF) + 1] )
      {
        if ( *v7 == -1 || a2[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
          v8 = 0;
        else
          v8 = a2[4 * (*v7 & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 612))(v8, a3, a4);
        a2 = off_1061BE18;
      }
      v4 = v28 + 1;
      v28 = v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 1456) );
  }
  if ( (**(int (__thiscall ***)(int))(a1 + 1484))(a1 + 1484) )
  {
    v9 = (**(int (__thiscall ***)(int))(a1 + 1484))(a1 + 1484);
    v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 288))(v9);
    if ( v28 )
    {
      v10 = *(float *)(a4 + 20) > 0.5;
      v11 = 0.5 == *(float *)(a4 + 20);
      v12 = *(_DWORD *)(a4 + 4 * (a3 == 0) + 104);
      v26 = a3 == 0;
      v29 = v12;
      if ( v10 || v11 || v12 != a1 )
      {
        if ( (sub_100DA500((_BYTE *)a1, a3, a4), v13 = *(_DWORD *)(v29 + 412), v13 == -1)
          || (v14 = &off_1061BE18[4 * (*(_DWORD *)(v29 + 412) & 0xFFF) + 1],
              v15 = v13 >> 12,
              off_1061BE18[4 * (*(_DWORD *)(v29 + 412) & 0xFFF) + 2] != v15)
          || !*v14
          || (*(_BYTE *)(v29 + 192) & 0x20) == 0
          || (off_1061BE18[4 * (*(_DWORD *)(v29 + 412) & 0xFFF) + 2] != v15 ? (v16 = 0) : (v16 = *v14),
              (*(int (__thiscall **)(int, int))(*(_DWORD *)v28 + 1080))(v28, v16) != 3) )
        {
          if ( !sub_100D7680(v29)
            && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a4 + 4 * v26) + 76))(*(_DWORD *)(a4 + 4 * v26)) & 8) == 0
            && !__RTDynamicCast(
                  v29,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CBreakable `RTTI Type Descriptor',
                  0) )
          {
            v27 = 0;
            v17 = sub_101C01F0(a3, a4, (int)&off_106384F4, 1.0, 1, &v27, 0);
            *(float *)&v30 = v17;
            if ( v17 > 0.0 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 1720) )
            {
              (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a4 + 28) + 4))(*(_DWORD *)(a4 + 28), v24);
              v18 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a4 + 4 * a3) + 116))(*(_DWORD *)(a4 + 4 * a3));
              *(float *)v25 = *(float *)(a4 + 12 * a3 + 56) * v18;
              v22 = v27 | 0x10;
              v19 = *(int (__thiscall ***)(int))(a1 + 1484);
              *(float *)&v25[1] = *(float *)(a4 + 12 * a3 + 60) * v18;
              *(float *)&v25[2] = v18 * *(float *)(a4 + 12 * a3 + 64);
              v20 = (*v19)(a1 + 1484);
              sub_102487B0((int)v23, a1, v20, (float *)v25, (float *)v24, *(float *)&v30, v22, 0, 0);
              v21 = (int *)(**(int (__thiscall ***)(int))(a1 + 1484))(a1 + 1484);
              sub_100D9E70(v21, (int)a2, v23);
            }
          }
        }
      }
    }
  }
}
