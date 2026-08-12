void __thiscall sub_100EA500(int *this, float a2, float *a3, float *a4, int a5)
{
  int v6; // esi
  int v7; // eax
  double v8; // st7
  double v9; // st6
  float *v11; // esi
  double (__stdcall *v12)(int, _DWORD); // eax
  double v13; // st7
  double (__thiscall *v14)(int, int, _DWORD); // eax
  double v15; // st7
  double (__thiscall *v16)(int, int, _DWORD); // eax
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

  if ( (*(int (__thiscall **)(int *))(*this + 276))(this) != -1 && 0.0 != a2 )
  {
    v6 = a5;
    if ( (a5 & 0x20000C7) != 0 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
      {
        if ( (*(int (__thiscall **)(int *))(*this + 448))(this) <= 0 )
          return;
        a5 = 1;
        sub_1002A180(this + 54, &a5);
      }
      if ( a2 >= 10.0 )
      {
        if ( a2 >= 25.0 )
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
      a5 = (v6 & 0x2000000) != 0 ? 384 : 172;
      v9 = (double)a5;
      *(float *)&a5 = -v8;
      v11 = a4 + 3;
      v31 = v7;
      v28 = -v9;
      while ( 1 )
      {
        v12 = *(double (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v25 = *a3 * -1.0;
        v26 = a3[1] * -1.0;
        v27 = -1.0 * a3[2];
        v19 = v8;
        v13 = v12(a5, LODWORD(v19));
        v14 = *(double (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v23 = v13 + v25;
        v15 = v14(dword_106B31E4, a5, LODWORD(v30));
        v16 = *(double (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v24 = v15 + v26;
        v17 = v16(dword_106B31E4, a5, LODWORD(v30));
        v22[0] = v23 * v28 + *v11;
        v22[1] = v28 * v24 + a4[4];
        v22[2] = (v17 + v27) * v28 + a4[5];
        sub_1002A5F0((int)&savedregs, (int)v11, v11, v22, 1174421507, (int)this, 0, (int)v20);
        if ( 1.0 != v21 )
        {
          v18 = (*(int (__thiscall **)(int *))(*this + 276))(this);
          sub_10265C30(v20, v18);
        }
        if ( !--v31 )
          break;
        v8 = v30;
      }
    }
  }
}
