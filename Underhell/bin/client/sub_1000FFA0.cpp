void __thiscall sub_1000FFA0(void *this, float a2, float *a3, float *a4, int a5)
{
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  float *v11; // esi
  double (__stdcall *v12)(int, _DWORD); // edx
  double v13; // st7
  double (__thiscall *v14)(int, int, _DWORD); // edx
  double v15; // st7
  double (__thiscall *v16)(int, int, _DWORD); // edx
  double v17; // st7
  int v18; // eax
  float v19; // [esp+14h] [ebp-8Ch]
  _BYTE v20[44]; // [esp+24h] [ebp-7Ch] BYREF
  float v21; // [esp+50h] [ebp-50h]
  float v22[3]; // [esp+78h] [ebp-28h] BYREF
  float v23; // [esp+84h] [ebp-1Ch]
  float v24; // [esp+88h] [ebp-18h]
  float v25; // [esp+90h] [ebp-10h]
  float v26; // [esp+94h] [ebp-Ch]
  float v27; // [esp+98h] [ebp-8h]
  float v28; // [esp+9Ch] [ebp-4h]
  int savedregs; // [esp+A0h] [ebp+0h] BYREF
  float v30; // [esp+A8h] [ebp+8h]
  int v31; // [esp+ACh] [ebp+Ch]
  int v32; // [esp+B4h] [ebp+14h]

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this) != -1 )
  {
    v6 = a2;
    if ( 0.0 != a2 && (a5 & 0x20000C7) != 0 )
    {
      if ( v6 >= 10.0 )
      {
        if ( v6 >= 25.0 )
        {
          v8 = 0.30000001;
          v7 = 4;
        }
        else
        {
          v8 = 0.2;
          v7 = 2;
        }
      }
      else
      {
        v7 = 1;
        v8 = 0.1;
      }
      v30 = v8;
      v9 = (a5 & 0x2000000) != 0 ? 384 : 172;
      *(float *)&v32 = -v8;
      v11 = a4 + 3;
      v28 = -(double)v9;
      v31 = v7;
      while ( 1 )
      {
        v12 = *(double (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v25 = *a3 * -1.0;
        v26 = a3[1] * -1.0;
        v27 = -1.0 * a3[2];
        v19 = v8;
        v13 = v12(v32, LODWORD(v19));
        v14 = *(double (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v23 = v13 + v25;
        v15 = v14(dword_10413198, v32, LODWORD(v30));
        v16 = *(double (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v24 = v15 + v26;
        v17 = v16(dword_10413198, v32, LODWORD(v30));
        v22[0] = v23 * v28 + *v11;
        v22[1] = v28 * v24 + a4[4];
        v22[2] = (v17 + v27) * v28 + a4[5];
        sub_1000FCE0((int)&savedregs, (int)v11, v11, v22, 1174421507, (int)this, 0, (int)v20);
        if ( 1.0 != v21 )
        {
          v18 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
          sub_1012D5F0(v20, v18);
        }
        if ( !--v31 )
          break;
        v8 = v30;
      }
    }
  }
}
