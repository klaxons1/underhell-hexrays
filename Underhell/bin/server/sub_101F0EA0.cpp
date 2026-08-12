void __usercall sub_101F0EA0(int a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int (__thiscall *v10)(int, _BYTE *); // edx
  float *v11; // eax
  int (__thiscall *v12)(int); // edx
  float *v13; // eax
  int *v14; // eax
  double v15; // st7
  float v16; // [esp+34h] [ebp-68h]
  float v17[3]; // [esp+5Ch] [ebp-40h] BYREF
  _BYTE v18[12]; // [esp+68h] [ebp-34h] BYREF
  _BYTE v19[4]; // [esp+74h] [ebp-28h] BYREF
  float v20[3]; // [esp+78h] [ebp-24h] BYREF
  float v21[3]; // [esp+84h] [ebp-18h] BYREF
  float v22; // [esp+90h] [ebp-Ch]
  float v23; // [esp+94h] [ebp-8h]
  float v24; // [esp+98h] [ebp-4h]
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 4152);
  switch ( v3 )
  {
    case 100:
      if ( *(_BYTE *)(a1 + 5040) )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1264))(a1) == 0;
        v7 = *(_DWORD *)a1;
        if ( v6 )
          (*(void (__thiscall **)(int))(v7 + 1268))(a1);
        else
          (*(void (__thiscall **)(int))(v7 + 1272))(a1);
        *(_DWORD *)(a1 + 4152) = 0;
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 2329) )
          goto LABEL_25;
        if ( *(_BYTE *)(a1 + 5064) )
          goto LABEL_25;
        v4 = sub_100CF460((_DWORD *)a1);
        v5 = sub_101E7EA0((_DWORD *)a1, 1);
        if ( *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 28))(v5, v19) )
        {
          if ( *(_DWORD *)(sub_101E7EA0((_DWORD *)a1, 1) + 908) == 3 )
            goto LABEL_25;
        }
        if ( v4 && *(_DWORD *)(v4 + 1160) == 183 )
          goto LABEL_25;
        sub_101F0C60(a1, a2);
        *(_DWORD *)(a1 + 4152) = 0;
      }
      break;
    case 200:
      if ( !*(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
        goto LABEL_25;
      v8 = (int *)sub_100CF460((_DWORD *)a1);
      v9 = *v8;
      if ( (v8[48] & 0x20) != 0 )
        (*(void (**)(void))(v9 + 992))();
      else
        (*(void (__stdcall **)(_DWORD))(v9 + 996))(0);
      *(_DWORD *)(a1 + 4152) = 0;
      break;
    case 201:
      if ( *(float *)(a1 + 4000) > (double)*(float *)(dword_106B31C8 + 12) )
        goto LABEL_25;
      sub_100F5A30((_DWORD *)a1, (int)v20, 0, 0);
      v10 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504);
      v22 = v20[0] * 128.0;
      v23 = v20[1] * 128.0;
      v24 = 128.0 * v20[2];
      v11 = (float *)v10(a1, v18);
      v12 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 504);
      v21[0] = *v11 + v22;
      v21[1] = v11[1] + v23;
      v21[2] = v11[2] + v24;
      v13 = (float *)v12(a1);
      sub_1002A5F0((int)&savedregs, a1, v13, v17, (int)v21, 16395, a1, 0);
      if ( 1.0 == v16 )
        goto LABEL_25;
      *(float *)(a1 + 4000) = *(float *)(dword_106B300C + 44) + *(float *)(dword_106B31C8 + 12);
      v14 = (int *)sub_101E9F00(0, (int)"spraycan");
      sub_101E2940(v14, a1);
      *(_DWORD *)(a1 + 4152) = 0;
      break;
    case 202:
      if ( *(float *)(a1 + 4000) > (double)*(float *)(dword_106B31C8 + 12) )
        goto LABEL_25;
      sub_10154AF0((_DWORD *)a1, 0);
      sub_10154BB0(1);
      sub_10154B90();
      v15 = *(float *)(dword_106B300C + 44) + *(float *)(dword_106B31C8 + 12);
      *(_DWORD *)(a1 + 4152) = 0;
      *(float *)(a1 + 4000) = v15;
      break;
    default:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1308))(a1, v3);
LABEL_25:
      *(_DWORD *)(a1 + 4152) = 0;
      break;
  }
}
