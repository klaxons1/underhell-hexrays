void __fastcall sub_100F5510(_DWORD *a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  _BYTE *v8; // esi
  float v9; // [esp+4h] [ebp-40h]
  float v10[3]; // [esp+10h] [ebp-34h] BYREF
  _DWORD v11[3]; // [esp+1Ch] [ebp-28h] BYREF
  float v12[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v13[3]; // [esp+34h] [ebp-10h] BYREF
  float v14; // [esp+40h] [ebp-4h]

  sub_100E0970((int)a1, a2, 5, 1);
  sub_10112C00(2);
  sub_100EBE30((int)a1, 13);
  (*(void (__thiscall **)(_DWORD *, const char *))(*a1 + 104))(a1, "models/Weapons/w_grenade.mdl");
  v13[0] = 4.0;
  v13[1] = 4.0;
  v13[2] = 4.0;
  v12[0] = -4.0;
  v12[1] = -4.0;
  v12[2] = -4.0;
  sub_1025F360(a1, v12, v13);
  if ( (a1[63] & 0x1000) != 0 )
    sub_100DAFD0((int)a1);
  v3 = a1[120];
  v4 = a1[121];
  v11[0] = a1[119];
  v11[1] = v3;
  v11[2] = v4;
  sub_10422540(v11, v10);
  sub_100E11A0((int)a1, v10);
  a1[49] = sub_100F4B90;
  sub_100EC3F0(a1, (int)sub_100F44B0, 0.0, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(a1, v9, 0);
  if ( *((float *)a1 + 530) - *(float *)(dword_106B31C8 + 12) < 0.1 )
  {
    sub_100EC4A0(a1, *(float *)(dword_106B31C8 + 12), 0);
    sub_100DD660((int)a1, &flt_106F1CA8);
  }
  *((float *)a1 + 138) = 1.0;
  v5 = a1[139];
  v14 = 0.80000001;
  if ( v5 != COERCE_INT(0.80000001) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 696))(a1, a1 + 139);
    *((float *)a1 + 139) = 0.80000001;
  }
  v6 = a1[532];
  v14 = 100.0;
  if ( v6 != COERCE_INT(100.0) )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v7 = (int *)a1[6];
      if ( v7 )
        sub_100194B0(v7, 2128);
    }
    *((float *)a1 + 532) = 100.0;
  }
  v8 = (char *)a1 + 225;
  if ( *v8 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v8 - 225) + 480))(v8 - 225, v8);
    *v8 = 0;
  }
}
