void __thiscall sub_101CCF20(int *this, int a2, float *a3)
{
  int (__thiscall *v4)(int *); // edx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // ecx
  double v8; // st6
  double v9; // rt0
  int v10; // eax
  int v11; // eax
  char v12; // bl
  double v13; // st6
  double v14; // rt2
  _BYTE v15[4]; // [esp+4h] [ebp-6Ch] BYREF
  _DWORD v16[20]; // [esp+8h] [ebp-68h] BYREF
  float v17; // [esp+58h] [ebp-18h] BYREF
  float v18; // [esp+5Ch] [ebp-14h]
  float v19; // [esp+60h] [ebp-10h]
  float v20; // [esp+64h] [ebp-Ch] BYREF
  float v21; // [esp+68h] [ebp-8h]
  float v22; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  if ( this[106] )
  {
    if ( sub_101CB160(this, "onfirstimpact", "break") )
    {
      sub_10247EC0(v16);
      v4 = *(int (__thiscall **)(int *))(*this + 8);
      *(float *)&v16[13] = (float)this[55];
      v5 = (_DWORD *)v4(this);
      v6 = *this;
      v16[11] = *v5;
      v16[10] = *(_DWORD *)(*(int (__thiscall **)(int *))(v6 + 8))(this);
      v7 = this[106];
      v16[16] = 0;
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 204))(v7, &v20, 0);
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[106] + 188))(this[106], &v17, 0);
      *(float *)&v16[1] = v20;
      *(float *)&v16[2] = v21;
      *(float *)&v16[3] = v22;
      *(float *)&v16[4] = v17;
      *(float *)&v16[5] = v18;
      *(float *)&v16[6] = v19;
      sub_100D9E70(this, (int)this, v16);
    }
    else
    {
      if ( sub_101CB160(this, "onfirstimpact", "paintsplat") )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[106] + 188))(this[106], &v20, 0);
        v8 = 1.5 * a3[10];
        v9 = a3[9] * 1.5;
        v17 = a3[8] * 1.5 + v20;
        v18 = v9 + v21;
        v19 = v8 + v22;
        sub_1002A5F0((int)&savedregs, (int)this, &v20, &v17, 1174421507, (int)this, 0, (int)v15);
        v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 3) - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 )
              sub_10264E40(v15, "PaintSplatPink");
          }
          else
          {
            sub_10264E40(v15, "PaintSplatGreen");
          }
        }
        else
        {
          sub_10264E40(v15, "PaintSplatBlue");
        }
      }
      v12 = sub_101CB160(this, "onfirstimpact", "alienbloodsplat");
      if ( v12 || sub_101CB160(this, "onfirstimpact", "bloodsplat") )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[106] + 188))(this[106], &v20, 0);
        v13 = 1.5 * a3[10];
        v14 = a3[9] * 1.5;
        v17 = a3[8] * 1.5 + v20;
        v18 = v14 + v21;
        v19 = v13 + v22;
        sub_1002A5F0((int)&savedregs, (int)this, &v20, &v17, 1174421507, (int)this, 0, (int)v15);
        sub_10265C30(v15, v12 != 0 ? 2 : 0);
      }
    }
  }
}
