void __thiscall sub_102DD7E0(float *this, int a2)
{
  float *v3; // eax
  int (__thiscall *v4)(float *, _BYTE *); // edx
  float *v5; // eax
  int (__thiscall *v6)(float *); // edx
  float *v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  double v12; // st6
  double v13; // st7
  float v14; // [esp+38h] [ebp-B4h]
  float v15; // [esp+38h] [ebp-B4h]
  _BYTE v16[12]; // [esp+40h] [ebp-ACh] BYREF
  float v17[3]; // [esp+4Ch] [ebp-A0h] BYREF
  _BYTE v18[12]; // [esp+58h] [ebp-94h] BYREF
  float v19; // [esp+64h] [ebp-88h]
  float v20; // [esp+68h] [ebp-84h]
  float v21; // [esp+6Ch] [ebp-80h]
  float v22; // [esp+70h] [ebp-7Ch]
  float v23; // [esp+74h] [ebp-78h]
  float v24; // [esp+78h] [ebp-74h]
  float v25; // [esp+90h] [ebp-5Ch]
  float v26[3]; // [esp+B8h] [ebp-34h] BYREF
  float v27[3]; // [esp+C4h] [ebp-28h] BYREF
  float v28; // [esp+D0h] [ebp-1Ch]
  float v29; // [esp+D4h] [ebp-18h] BYREF
  float v30; // [esp+D8h] [ebp-14h]
  float v31; // [esp+DCh] [ebp-10h]
  float v32; // [esp+E0h] [ebp-Ch]
  float v33; // [esp+E4h] [ebp-8h]
  float v34; // [esp+E8h] [ebp-4h]
  int savedregs; // [esp+ECh] [ebp+0h] BYREF
  float v36; // [esp+F4h] [ebp+8h]

  switch ( a2 )
  {
    case '2':
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1652))(this);
      break;
    case '3':
      v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 508))(this);
      sub_10422220(v8, &v29);
      v9 = sub_101811E0("item_dynamic_resupply", -1);
      if ( v9 )
      {
        v10 = *((_DWORD *)this + 63) >> 11;
        v32 = v29 * 256.0;
        v33 = v30 * 256.0;
        v34 = 256.0 * v31;
        if ( (v10 & 1) != 0 )
          sub_100DAE60((int)this);
        v11 = *((_DWORD *)this + 63) >> 11;
        v12 = this[146] + v33;
        v13 = this[147] + v34;
        v26[0] = v32 + this[145];
        v26[1] = v12;
        v26[2] = v13 + 64.0;
        if ( (v11 & 1) != 0 )
          sub_100DAE60((int)this);
        v27[0] = 0.0;
        v27[1] = this[177] - 90.0;
        v27[2] = 0.0;
        sub_100E0D20(v9, v26);
        sub_100E0EA0(v9, v27);
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v9 + 128))(v9, "targetname", "resupply");
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 136))(v9);
      }
      break;
    case '4':
      v3 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 924))(this, v16);
      v32 = *v3 * 16384.0;
      v33 = v3[1] * 16384.0;
      v4 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504);
      v34 = 16384.0 * v3[2];
      v5 = (float *)v4(this, v18);
      v6 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 504);
      v29 = *v5 + v32;
      v30 = v5[1] + v33;
      v31 = v5[2] + v34;
      v7 = (float *)v6(this);
      sub_1002A5F0((int)&savedregs, (int)this, v7, v17, (int)&v29, 1174421507, (int)this, 0);
      if ( 1.0 != v25 )
      {
        v14 = (v19 - v22) * (v19 - v22) + (v20 - v23) * (v20 - v23) + (v21 - v24) * (v21 - v24);
        v28 = off_10689708(v14);
        v15 = (v19 - v22) * (v19 - v22) + (v20 - v23) * (v20 - v23);
        v36 = off_10689708(v15);
        DevMsg(1, "\nStartPos: %.4f %.4f %.4f --- EndPos: %.4f %.4f %.4f\n", v19, v20, v21, v22, v23, v24);
        DevMsg(
          1,
          "3D Distance: %.4f units  (%.2f feet) --- 2D Distance: %.4f units  (%.2f feet)\n",
          v28,
          0.083333336 * v28,
          v36,
          v36 * 0.083333336);
      }
      break;
    default:
      sub_101EC700(this, (int)this, a2);
      break;
  }
}
