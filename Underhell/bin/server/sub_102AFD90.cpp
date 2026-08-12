int __thiscall sub_102AFD90(__int16 *this, int a2, int a3, int a4)
{
  int v5; // edi
  char v6; // al
  void *v7; // edi
  int v8; // eax
  int v9; // eax
  const char *v10; // eax
  int v11; // eax
  int v13; // [esp+10h] [ebp-80h]
  float v14; // [esp+14h] [ebp-7Ch]
  int v15[20]; // [esp+2Ch] [ebp-64h] BYREF
  int v16[3]; // [esp+7Ch] [ebp-14h] BYREF
  int v17; // [esp+88h] [ebp-8h]
  int v18; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  v5 = sub_100D1940(this);
  if ( !v5 || (v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5), v18 = v5, !v6) )
    v18 = 0;
  v17 = sub_100D1940(this);
  (*(void (__thiscall **)(__int16 *))(*(_DWORD *)this + 1168))(this);
  (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 944))(this, 189);
  sub_101E3110((void *)v18, 4u, 0, 4u);
  v7 = *(void **)(a2 + 76);
  if ( v7 )
  {
    if ( v18 && v17 )
    {
      v8 = sub_100D0CC0(this);
      sub_102DEF10(*(float *)(v8 + 100));
    }
    sub_100F5A30((_DWORD *)v18, (int)v16, 0, 0);
    off_10689714();
    v14 = ((double (__thiscall *)(__int16 *, int))*(_DWORD *)(*(_DWORD *)this + 1452))(this, a3);
    v13 = sub_100D1940(this);
    v9 = sub_100D1940(this);
    sub_10248110((int)v15, v9, v13, v14, 128, 0);
    if ( v18 && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v7 + 284))(v7) )
      sub_10247F80((float *)v15);
    else
      sub_1023D4B0(16, (float *)(a2 + 12), 400, 0.2, v18, 0, 0);
    sub_10248690((float *)v15, (float *)v16, (float *)(a2 + 12), 1.0);
    sub_100E8760(v7, (int)v15, (int)v16, a2);
    sub_10248230();
    sub_10023860((int)&savedregs, (int)v15, (float *)a2, (float *)(a2 + 12), v16);
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 288))(v7) )
    {
      v10 = (const char *)*((_DWORD *)this + 23);
      if ( !v10 )
        v10 = String;
      (*(void (__thiscall **)(int, int, bool, const char *, int *))(*(_DWORD *)off_10627F88 + 120))(
        off_10627F88,
        v18,
        (_BYTE)a4 == 0,
        v10,
        v15);
    }
  }
  LOBYTE(a4) = 1;
  v11 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(*(__int16 *)(a2 + 64));
  if ( v11 )
  {
    switch ( *(_WORD *)(v11 + 72) )
    {
      case 'D':
      case 'G':
      case 'M':
      case 'W':
      case 'Y':
        (*(void (__thiscall **)(__int16 *, int, _DWORD))(*(_DWORD *)this + 1132))(this, 11, 0.0);
        break;
      case 'F':
        (*(void (__thiscall **)(__int16 *, int, _DWORD))(*(_DWORD *)this + 1132))(this, 10, 0.0);
        break;
      default:
        (*(void (__thiscall **)(__int16 *, int, _DWORD))(*(_DWORD *)this + 1132))(this, 11, 0.0);
        LOBYTE(a4) = 0;
        break;
    }
  }
  return (*(int (__thiscall **)(__int16 *, int, int))(*(_DWORD *)this + 1456))(this, a2, a4);
}
