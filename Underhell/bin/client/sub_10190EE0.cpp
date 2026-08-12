void __thiscall sub_10190EE0(float *this, float a2)
{
  int v3; // esi
  float *v4; // eax
  double i; // st7
  int v6; // esi
  int v7; // eax
  float *v8; // eax
  float *v9; // esi
  char v10; // al
  unsigned __int8 v11; // al
  float *v12; // [esp-8h] [ebp-1Ch]
  float v13; // [esp+4h] [ebp-10h]
  float v14; // [esp+8h] [ebp-Ch]

  if ( sub_10190E10(this) && a2 > 0.0 )
  {
    v3 = *((_DWORD *)this + 303);
    v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
    sub_100F3060(v3, v4);
    for ( i = *((float *)off_103DC81C + 4); i >= this[302]; i = v13 )
    {
      v13 = i - this[302];
      this[302] = this[301];
      v6 = *((_DWORD *)this + 303);
      v12 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
      v7 = sub_100F29B0(v6, (int)this, v6, "effects/ar2_altfire1b");
      v8 = sub_100F2B60(v6, v6, 60, v7, v12);
      v9 = v8;
      if ( !v8 )
        return;
      v8[6] = flt_10459240;
      *(_QWORD *)(v8 + 7) = qword_10459244;
      v8[10] = 0.1;
      v8[11] = 0.0;
      v8[9] = (float)sub_100EB330(0, 360);
      v9[14] = 0.0;
      v10 = (int)(a2 * 255.0);
      *((_BYTE *)v9 + 48) = v10;
      *((_BYTE *)v9 + 49) = v10;
      *((_BYTE *)v9 + 50) = v10;
      *((_BYTE *)v9 + 51) = v10;
      *((_BYTE *)v9 + 52) = 0;
      v14 = a2 + a2;
      v11 = (int)v14;
      *((_BYTE *)v9 + 53) = v11;
      *((_BYTE *)v9 + 54) = (int)((double)v11 + (double)v11);
    }
    this[302] = this[302] - i;
  }
}
