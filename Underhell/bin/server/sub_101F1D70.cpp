int __thiscall sub_101F1D70(float *this, int a2)
{
  int result; // eax
  int v4; // edi
  double v5; // st6
  double v6; // st5
  double v7; // st5
  double v8; // rt1
  double v9; // st7
  double v10; // rt2
  double v11; // st6
  double v12; // rtt
  int (__thiscall *v13)(float *); // eax
  float *v14; // eax
  double v15; // st7
  int (__thiscall *v16)(float *); // edx
  double v17; // st6
  double v18; // st7
  float *v19; // eax
  double v20; // st6
  double v21; // st5
  float *v22; // eax
  float v23[3]; // [esp+4h] [ebp-30h] BYREF
  float v24[3]; // [esp+10h] [ebp-24h] BYREF
  float v25[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v26; // [esp+28h] [ebp-Ch] BYREF
  float v27; // [esp+2Ch] [ebp-8h]
  float v28; // [esp+30h] [ebp-4h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)((*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(
                                 cvar,
                                 "cam_ots_freeaim_enable")
                             + 28)
                 + 48) )
  {
    result = a2;
    *(float *)a2 = this[526];
    *(float *)(result + 4) = this[527];
    *(float *)(result + 8) = this[528];
  }
  else
  {
    v4 = a2;
    *(_BYTE *)(a2 + 28) = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1512))(this) || 0.0 == *(float *)(v4 + 32) )
    {
      v22 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 508))(this);
      v26 = this[576] + *v22;
      v27 = this[577] + v22[1];
      v28 = this[578] + v22[2];
      result = sub_10422220(&v26, v24);
      *(float *)v4 = v24[0];
      *(float *)(v4 + 4) = v24[1];
      *(float *)(v4 + 8) = v24[2];
      *(_DWORD *)(v4 + 24) = -1;
      *(float *)(v4 + 12) = flt_10689730;
      *(float *)(v4 + 16) = flt_10689734;
      *(float *)(v4 + 20) = flt_10689738;
      *(_BYTE *)(v4 + 28) = 0;
    }
    else
    {
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 968))(this, v23);
      this[993] = 0.0;
      this[994] = 0.0;
      this[995] = 0.0;
      sub_101ED890((int)this, (float *)&savedregs, v4, (int)this, &v26, v23, v4);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 284))(dword_106B3CDC) )
      {
        HIBYTE(a2) = 0;
        sub_101EA070((_BYTE *)this + 3316, (_BYTE *)&a2 + 3);
      }
      v5 = v26;
      v6 = 360.0;
      if ( v26 > 180.0 )
      {
        v7 = v5 - 360.0;
        v26 = v7;
        v8 = v7;
        v6 = 360.0;
        v5 = v8;
      }
      if ( v5 < -180.0 )
      {
        v26 = v5 + v6;
        v5 = v5 + v6;
      }
      v9 = v27;
      if ( v27 > 180.0 )
      {
        v27 = v9 - v6;
        v9 = v9 - v6;
      }
      if ( v9 < -180.0 )
      {
        v10 = v5;
        v11 = v9 + v6;
        v27 = v11;
        v12 = v11;
        v5 = v10;
        v9 = v12;
      }
      if ( v5 <= 25.0 )
      {
        if ( v5 < -25.0 )
          v26 = -25.0;
      }
      else
      {
        v26 = 25.0;
      }
      if ( v9 <= 12.0 )
      {
        if ( v9 < -12.0 )
          v27 = -12.0;
      }
      else
      {
        v27 = 12.0;
      }
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1088))(this)
        && (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2 )
      {
        v13 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 508);
        this[993] = v26;
        this[994] = v27;
        this[995] = v28;
        v14 = (float *)v13(this);
        v26 = this[993] + *v14;
        v27 = v14[1] + this[994];
        v15 = v14[2] + this[995];
      }
      else
      {
        v16 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 508);
        v17 = 0.89999998 * v28;
        v18 = v27 * 0.89999998;
        this[993] = v26 * 0.89999998;
        this[994] = v18;
        this[995] = v17;
        v19 = (float *)v16(this);
        v20 = this[577] + v19[1];
        v21 = this[578] + v19[2];
        v26 = *v19 + this[576] + this[993];
        v27 = v20 + this[994];
        v15 = v21 + this[995];
      }
      v28 = v15;
      result = sub_10422220(&v26, v25);
      *(float *)v4 = v25[0];
      *(float *)(v4 + 4) = v25[1];
      *(float *)(v4 + 8) = v25[2];
    }
  }
  return result;
}
