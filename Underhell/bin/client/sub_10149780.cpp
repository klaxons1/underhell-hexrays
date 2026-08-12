int __thiscall sub_10149780(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // esi
  int result; // eax
  _DWORD v14[6]; // [esp+20h] [ebp-20h] BYREF
  _BYTE v15[7]; // [esp+38h] [ebp-8h] BYREF
  char v16; // [esp+3Fh] [ebp-1h] BYREF
  char v17; // [esp+58h] [ebp+18h]

  dword_1043A1C8 = *((_DWORD *)off_103DC81C + 1) - 1;
  (*(void (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 52))(off_103DD080);
  if ( *(_DWORD *)(dword_1042C2A4 + 48) && !a6 )
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DD080 + 160))(off_103DD080, a4);
  this[111] = a8;
  sub_10144510((float *)(a4 + 44), (float *)(a4 + 56), a6);
  sub_100D3280();
  sub_101423A0(this, a4, (int)v15, a9);
  if ( !a2 && !a3 && (v15[0] & 1) != 0 )
  {
    a5 |= 1u;
    sub_101443F0();
  }
  v17 = *(_DWORD *)(dword_1043BFAC + 48) != 0;
  if ( a2 || !a3 )
    v17 = 0;
  v10 = sub_100F0920();
  sub_100ED9B0((int)v10);
  sub_10148AC0((int)this, v17, (void *)a4, a5, (int)a9);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 40))(dword_10413168, a4 + 44);
  sub_10143510((float *)this, (int)v14, &v16);
  sub_1011DB70((int)off_103E524C, (int)&dword_103E7E94, v14, &v16);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v12 = v11;
  if ( v11 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 172))(v12, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
  sub_100B0B50(v12, *(unsigned __int8 *)(a4 + 113));
  if ( !dword_103E7E94 )
    sub_1005B2D0();
  sub_101537B0();
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 136))(dword_1041315C);
  sub_1013C760();
  (*off_103DD168)[2](COERCE_UNSIGNED_INT64(*((float *)off_103DC81C + 4)));
  sub_1008D9B0(0);
  sub_100D32F0();
  result = dword_1042C2A4;
  byte_1043BD08 = 0;
  if ( *(_DWORD *)(dword_1042C2A4 + 48) )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 108))(off_103DD080);
  return result;
}
