void __thiscall sub_10367A30(int this, _DWORD *a2)
{
  float *v3; // eax
  int v4; // ecx
  double v5; // st6
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  double v11; // st7
  float v12[3]; // [esp+Ch] [ebp-54h] BYREF
  int v13; // [esp+18h] [ebp-48h] BYREF
  float v14; // [esp+1Ch] [ebp-44h]
  float v15; // [esp+20h] [ebp-40h]
  float v16[3]; // [esp+24h] [ebp-3Ch] BYREF
  float v17[3]; // [esp+30h] [ebp-30h] BYREF
  float v18[3]; // [esp+3Ch] [ebp-24h] BYREF
  float v19[3]; // [esp+48h] [ebp-18h] BYREF
  float v20; // [esp+54h] [ebp-Ch] BYREF
  float v21; // [esp+58h] [ebp-8h]
  float v22; // [esp+5Ch] [ebp-4h]

  switch ( *a2 )
  {
    case 0x42:
      v7 = sub_100217F0((void *)this);
      v13 = *(int *)v7;
      v14 = *(float *)(v7 + 4);
      v8 = *(_DWORD *)(this + 2604);
      v15 = *(float *)(v7 + 8);
      sub_10078690(v8, (int)&v13, 0.0, 0.0);
      break;
    case 0x4A:
      v11 = *(float *)(dword_106B31C8 + 12);
      *(_DWORD *)(this + 196) = sub_10367520;
      *(float *)(this + 4000) = v11 + 60.0;
      break;
    case 0x81:
      *(_BYTE *)(this + 4004) = 0;
      goto LABEL_13;
    case 0xFA:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E7F34);
      break;
    case 0xFB:
      v9 = sub_100217F0((void *)this);
      v13 = *(int *)v9;
      v14 = *(float *)(v9 + 4);
      v10 = *(_DWORD *)(this + 2604);
      v15 = *(float *)(v9 + 8);
      sub_10078690(v10, (int)&v13, 0.0, 0.0);
      if ( sub_10078F10(*(_DWORD *)(this + 2604)) >= 0.0 )
        sub_10039F40((int *)this, dword_106E7F28);
      else
        sub_10039F40((int *)this, dword_106E7F2C);
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0xFC:
      sub_101C73D0((unsigned int *)this, 0);
      *(float *)(this + 4008) = *(float *)(this + 724);
      *(_BYTE *)(this + 4004) = 1;
      v17[0] = *(float *)(this + 716);
      v17[1] = *(float *)(this + 720);
      v17[2] = *(float *)(this + 724) + 1.0;
      sub_1025F370((void *)this, v17, 0);
      v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v4 = *(_DWORD *)(this + 2372);
      if ( v4 == 34 || v4 == 35 )
      {
        (*(void (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v13, 0, 0);
        v12[0] = *(float *)&v13 * -200.0;
        v12[1] = v14 * -200.0;
        v12[2] = -200.0 * v15;
        sub_100EA150(this, v12);
      }
      else if ( v3 )
      {
        v5 = v3[180] - *(float *)(this + 720);
        v6 = v3[181] - *(float *)(this + 724);
        v20 = v3[179] - *(float *)(this + 716);
        v21 = v5;
        v22 = v6;
        off_10689714();
        v22 = 0.0;
        v16[0] = v20 * 300.0;
        v16[1] = 300.0 * v21;
        v16[2] = 200.0;
        sub_100EA150(this, v16);
      }
      else
      {
        DevMsg("UNHANDLED CASE! Stuck Fast Zombie with no enemy!\n");
      }
      break;
    case 0xFD:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
      sub_101C73D0((unsigned int *)this, 0);
      *(float *)(this + 4008) = *(float *)(this + 724);
      *(_BYTE *)(this + 4004) = 1;
      sub_10422220(this + 728, &v20);
      v19[0] = *(float *)(this + 716);
      v19[1] = *(float *)(this + 720);
      v19[2] = *(float *)(this + 724) + 1.0;
      sub_1025F370((void *)this, v19, 0);
      v18[0] = v20 * -200.0;
      v18[1] = v21 * -200.0;
      v18[2] = -200.0 * v22 + 200.0;
      sub_100EA150(this, v18);
      break;
    case 0xFE:
      if ( sub_10023D10((_DWORD *)this, 23) )
        sub_10027CD0((_DWORD *)this, 0);
      else
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, String);
      break;
    default:
LABEL_13:
      sub_10332690(this, (int)a2);
      break;
  }
}
