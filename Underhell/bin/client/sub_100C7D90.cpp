const unsigned __int16 *__thiscall sub_100C7D90(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  void (__thiscall *v5)(int, int); // eax
  const unsigned __int16 *v6; // eax
  const unsigned __int16 *v7; // edi
  unsigned __int16 v8; // ax
  int v9; // eax
  int v10; // ebx
  double v11; // st7
  const unsigned __int16 *result; // eax
  const unsigned __int16 *v13; // edi
  unsigned __int16 v14; // ax
  int v15; // eax
  int v16; // ebx
  int v17; // edi
  double v18; // st7
  int v19; // [esp+A0h] [ebp-2Ch]
  int v20; // [esp+A0h] [ebp-2Ch]
  _BYTE v21[4]; // [esp+B0h] [ebp-1Ch] BYREF
  _BYTE v22[4]; // [esp+B4h] [ebp-18h] BYREF
  int v23; // [esp+B8h] [ebp-14h]
  int v24; // [esp+BCh] [ebp-10h]
  int i; // [esp+C0h] [ebp-Ch]
  int v26; // [esp+C4h] [ebp-8h] BYREF
  int v27; // [esp+C8h] [ebp-4h] BYREF

  sub_10236250(v21, v22, &v27, &v26);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(
    dword_1047CA6C,
    *(_DWORD *)((char *)this + 209));
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    0,
    0,
    this[55],
    v26);
  (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(v27 - this[57], 0, v27, v26);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    this[55],
    0,
    v27 - this[57],
    this[59]);
  (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    this[55],
    v26 - this[61],
    v27 - this[57],
    v26);
  (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    (v27 - this[63]) / 2,
    this[59],
    (this[63] + v27) / 2,
    v26 - this[61]);
  v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, "ClientScheme");
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v2);
  v4 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v3 + 12))(v3, "HDRDemoText", 0);
  v5 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68);
  v23 = v4;
  v5(dword_1047CA6C, v4);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(
    dword_1047CA6C,
    *(_DWORD *)((char *)this + 214));
  v6 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                                   dword_1047CA78,
                                   "#Valve_HDRDEMO_LeftTitle");
  v7 = v6;
  if ( v6 )
  {
    v8 = *v6;
    i = 0;
    v24 = (int)v7;
    if ( v8 )
    {
      do
      {
        v9 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, v4, v8);
        i += v9;
        v24 += 2;
        v8 = *(_WORD *)v24;
      }
      while ( *(_WORD *)v24 );
    }
    v10 = *(_DWORD *)dword_1047CA6C;
    v19 = this[65];
    v11 = floor((double)v27 * 0.25);
    v24 = i / 2;
    (*(void (__thiscall **)(int, int, int))(v10 + 80))(dword_1047CA6C, (int)(v11 - (double)(i / 2)), v19);
    (*(void (__thiscall **)(int, const unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
      dword_1047CA6C,
      v7,
      wcslen(v7),
      0);
    v4 = v23;
  }
  result = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                                       dword_1047CA78,
                                       "#Valve_HDRDEMO_RightTitle");
  v24 = (int)result;
  if ( result )
  {
    v13 = result;
    v14 = *result;
    for ( i = 0; v14; ++v13 )
    {
      v15 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, v4, v14);
      i += v15;
      v14 = v13[1];
    }
    v16 = dword_1047CA6C;
    v17 = *(_DWORD *)dword_1047CA6C;
    v20 = this[67];
    v18 = ceil((double)v27 * 0.75);
    v23 = i / 2;
    (*(void (__thiscall **)(int, int, int))(v17 + 80))(v16, (int)(v18 - (double)(i / 2)), v20);
    return (const unsigned __int16 *)(*(int (__thiscall **)(int, int, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C
                                                                                           + 88))(
                                       dword_1047CA6C,
                                       v24,
                                       wcslen((const unsigned __int16 *)v24),
                                       0);
  }
  return result;
}
