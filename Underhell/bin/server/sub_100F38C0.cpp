int __fastcall sub_100F38C0(int a1, int a2)
{
  int v3; // eax
  int result; // eax
  int *v5; // ecx
  float v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  float v7[3]; // [esp+20h] [ebp-10h] BYREF
  float v8; // [esp+2Ch] [ebp-4h]

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
  sub_10422540(a1 + 476, v6);
  sub_100E11A0(a1, v6);
  sub_100EC3F0((_DWORD *)a1, (int)sub_100F3EC0, 0.0, 0);
  sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
  v7[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -100.0,
            -500.0);
  v7[1] = 0.0;
  v7[2] = 0.0;
  sub_100D7260((float *)a1, v7);
  *(_DWORD *)(a1 + 196) = sub_100F4320;
  result = *(_DWORD *)(a1 + 2128);
  v8 = *(float *)(dword_106DF5DC + 44);
  if ( result != LODWORD(v8) )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
        result = sub_100194B0(v5, 2128);
    }
    *(float *)(a1 + 2128) = v8;
  }
  if ( *(_BYTE *)(a1 + 225) != 2 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 2;
  }
  *(_DWORD *)(a1 + 2132) = 0;
  return result;
}
