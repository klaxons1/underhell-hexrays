char __usercall sub_10353FA0@<al>(int a1@<ecx>, int a2@<edi>)
{
  double v4; // st7
  bool v5; // bl
  _DWORD *v6; // eax
  float *v7; // eax
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  _DWORD v11[3]; // [esp+10h] [ebp-30h] BYREF
  int v12[3]; // [esp+1Ch] [ebp-24h] BYREF
  int v13[3]; // [esp+28h] [ebp-18h] BYREF
  float v14; // [esp+34h] [ebp-Ch]
  float v15; // [esp+38h] [ebp-8h]
  float v16; // [esp+3Ch] [ebp-4h]

  if ( *(_BYTE *)(a1 + 224)
    || *(_BYTE *)(a1 + 4080)
    || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || *(_BYTE *)(a1 + 4142)
    || *(float *)(a1 + 4164) >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    return 0;
  }
  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 2332))(a1);
  if ( v4 < *(float *)(a1 + 3840) )
  {
    v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 2332))(a1);
    *(float *)(a1 + 3840) = v4;
  }
  v5 = sub_103516C0((void *)a1);
  if ( !v5 && !*(_BYTE *)(a1 + 4148) )
  {
    *(_BYTE *)(a1 + 4148) = 1;
    *(float *)(a1 + 4164) = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_1023C380((_DWORD *)a1, (int)"NPC_CombineGunship.CannonStartSound", 0.0, 0);
    return 0;
  }
  if ( sub_10023D10((_DWORD *)a1, 13) && !*(_BYTE *)(a1 + 4140) )
    return 0;
  if ( !v5 )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v7 = (float *)sub_10019640(v6);
    sub_10350900(a1, v7);
    if ( v4 < 512.0 )
      return 0;
  }
  sub_100BF1B0((void *)a1, "muzzle", (int)v12, (float *)v13, 0, 0);
  v8 = (float *)sub_10352A60((_DWORD *)a1, v11);
  v9 = v8[1];
  v10 = v8[2];
  v14 = *v8 - *(float *)v12;
  v15 = v9 - *(float *)&v12[1];
  v16 = v10 - *(float *)&v12[2];
  off_10689714();
  off_10689714();
  if ( *(float *)&v13[1] * v15 + v14 * *(float *)v13 + *(float *)&v13[2] * v16 <= 0.9 )
    return 0;
  sub_10351320(a1, v5, a2, *(_DWORD *)(dword_106E68F4 + 48));
  return 1;
}
