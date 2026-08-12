void __fastcall sub_100F3670(int a1, int a2)
{
  int v3; // eax
  int *v4; // ecx
  int *v5; // ecx
  _BYTE *v6; // esi
  float v7[3]; // [esp+14h] [ebp-1Ch] BYREF
  float v8[4]; // [esp+20h] [ebp-10h] BYREF

  sub_100E0970(a1, a2, 5, 1);
  sub_10112C00(2);
  sub_100EBE30(a1, 13);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, "models/weapons/w_grenade.mdl");
  sub_1025F360(a1, &flt_106F1CA8, &flt_106F1CA8);
  sub_10260720(400.0);
  v3 = *(_DWORD *)(a1 + 252);
  *(float *)(a1 + 552) = 400.0;
  if ( (v3 & 0x1000) != 0 )
    sub_100DAFD0(a1);
  sub_10422540(a1 + 476, v7);
  sub_100E11A0(a1, v7);
  if ( *(_BYTE *)(a1 + 112) != 18 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 112);
    }
    *(_BYTE *)(a1 + 112) = 18;
  }
  sub_1005C620((_BYTE *)(a1 + 116), 200, 200, 20, 255);
  sub_100EC3F0((_DWORD *)a1, (int)sub_100F2F50, 0.0, 0);
  sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
  v8[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -100.0,
            -500.0);
  v8[1] = 0.0;
  v8[2] = 0.0;
  sub_100D7260((float *)a1, v8);
  *(_DWORD *)(a1 + 196) = sub_100F3260;
  v8[3] = 80.0;
  if ( *(_DWORD *)(a1 + 2128) != COERCE_INT(80.0) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
        sub_100194B0(v5, 2128);
    }
    *(float *)(a1 + 2128) = 80.0;
  }
  v6 = (_BYTE *)(a1 + 225);
  if ( *v6 != 2 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v6 - 225) + 480))(v6 - 225, v6);
    *v6 = 2;
  }
}
