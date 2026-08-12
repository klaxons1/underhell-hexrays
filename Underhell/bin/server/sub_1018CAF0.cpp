// bad sp value at call has been detected, the output may be wrong!
char __usercall sub_1018CAF0@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  float v5; // edx
  float v6; // eax
  float v7; // ecx
  double v8; // st7
  double v9; // st3
  double v10; // st7
  double v11; // st5
  int (__thiscall *v12)(int, int, int); // edx
  double v13; // st7
  char v14; // al
  int v15; // eax
  int v16; // esi
  float v19[20]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v20[12]; // [esp+74h] [ebp-9Ch] BYREF
  int v21; // [esp+80h] [ebp-90h] BYREF
  char v22; // [esp+ABh] [ebp-65h]
  _DWORD v23[4]; // [esp+CCh] [ebp-44h] BYREF
  float v24[3]; // [esp+DCh] [ebp-34h] BYREF
  float v25[3]; // [esp+E8h] [ebp-28h] BYREF
  float v26[3]; // [esp+F4h] [ebp-1Ch] BYREF
  char v27; // [esp+103h] [ebp-Dh]
  int v28; // [esp+104h] [ebp-Ch]
  void *v29; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v28 = a2;
  v29 = retaddr;
  v5 = *(float *)(a1 + 36);
  v6 = *(float *)(a1 + 28);
  v7 = *(float *)(a1 + 32);
  v26[0] = v6;
  v26[1] = v7;
  v26[2] = v5 + 36.0;
  v8 = (*(float *)(a1 + 16) - *(float *)(a1 + 4)) * 0.5 - 5.0;
  v9 = 1.0;
  if ( v8 >= 16.0 || v8 >= 1.0 )
  {
    v9 = v8;
    v10 = 1.0;
    if ( v9 >= 16.0 )
      v9 = 16.0;
  }
  else
  {
    v10 = 1.0;
  }
  v11 = 0.5 * (*(float *)(a1 + 20) - *(float *)(a1 + 8)) - 5.0;
  if ( v11 >= 16.0 || v11 >= v10 )
  {
    v10 = 16.0;
    if ( v11 < 16.0 )
      v10 = v11;
  }
  v12 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3CDC + 120);
  v25[0] = -v9;
  v25[1] = -v10;
  v24[0] = v9;
  v24[1] = v10;
  v13 = *(float *)(v12(dword_106B3CDC, a3, a4) + 56);
  v14 = *(_BYTE *)(a1 + 48);
  v24[2] = v13 - 36.0;
  v27 = v14;
  sub_10265570(0, 8);
  v23[0] = &CTraceFilterWalkableEntities::`vftable';
  v23[3] = 3;
  sub_1001F200(v19, v26, v26, v25, v24);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v19,
    81931,
    v23,
    v20);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v20, (int)&v21, 255, 255, 0, 1, -1.0);
  LOBYTE(v15) = v22;
  *(_BYTE *)(a1 + 48) = v22;
  if ( v27 != (_BYTE)v15 )
  {
    v15 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
            dword_106B31F8,
            "nav_blocked",
            0);
    v16 = v15;
    if ( v15 )
    {
      (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v15 + 40))(v15, "area", *(_DWORD *)a1);
      (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v16 + 40))(
        v16,
        "blocked",
        *(unsigned __int8 *)(a1 + 48));
      LOBYTE(v15) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v16, 0);
    }
  }
  return v15;
}
