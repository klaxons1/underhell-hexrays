void __usercall sub_103FA070(int a1@<esi>, int a2)
{
  float *v2; // eax
  void (__thiscall *v3)(int, _BYTE *); // edx
  int v4; // eax
  double v5; // st7
  double v6; // st5
  double v7; // st7
  double v8; // st5
  double v9; // st4
  _BYTE v10[8]; // [esp+0h] [ebp-18h] BYREF
  float v11; // [esp+8h] [ebp-10h]
  float v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a1 )
  {
    v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 508))(a1);
    v12[0] = *v2;
    v12[1] = v2[1];
    v3 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504);
    v12[2] = v2[2];
    v3(a1, v10);
    v4 = *(_DWORD *)(a1 + 252);
    v12[0] = 0.0;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(a1);
    v5 = *(float *)(a1 + 588) + *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320) + 8);
    v6 = v12[0];
    if ( v12[0] >= 0.0 )
    {
      v9 = v5 - v11;
      v7 = v11;
      v8 = v6 * (v9 + 2.0 - -8.0) * 0.033333335 - 8.0;
    }
    else
    {
      v7 = v11;
      v8 = -8.0 - v6 * 32.0 * 0.033333335;
    }
    v11 = v7 + v8;
    v12[0] = 0.0;
    sub_10425040(v12, v10, a2);
  }
}
