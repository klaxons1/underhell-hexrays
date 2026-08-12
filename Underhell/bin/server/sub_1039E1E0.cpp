void __thiscall sub_1039E1E0(char *this)
{
  int v2; // ecx
  bool v3; // zf
  int (__thiscall *v4)(char *); // eax
  float *v5; // eax
  double v6; // st6
  double v7; // rt1
  float *v8; // eax
  double v9; // st6
  double v10; // rt2
  float v11; // [esp+14h] [ebp-2Ch]
  int v12; // [esp+1Ch] [ebp-24h] BYREF
  float v13; // [esp+20h] [ebp-20h]
  float v14; // [esp+24h] [ebp-1Ch]
  float v15; // [esp+28h] [ebp-18h]
  float v16; // [esp+2Ch] [ebp-14h]
  float v17; // [esp+30h] [ebp-10h]
  float v18; // [esp+34h] [ebp-Ch] BYREF
  float v19; // [esp+38h] [ebp-8h]
  float v20; // [esp+3Ch] [ebp-4h]

  if ( this[3836] )
  {
    v2 = *((_DWORD *)this + 106);
    if ( v2 )
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v2 + 204))(v2, &v18, 0);
    if ( !this[3808] )
    {
      v11 = v19 * v19 + v18 * v18 + v20 * v20;
      if ( off_10689708(v11) > 64.0 )
      {
        v3 = this[3829] == 0;
        v4 = *(int (__thiscall **)(char *))(*(_DWORD *)this + 576);
        v15 = v18 * 0.5;
        v16 = v19 * 0.5;
        v17 = 0.5 * v20;
        if ( !v3 )
        {
          v5 = (float *)v4(this);
          v6 = v5[1];
          v7 = v5[2] + 32.0;
          *(float *)&v12 = *v5 + v15;
          v13 = v6 + v16;
          v14 = v7 + v17;
          sub_1023D4B0(159383560, (float *)&v12, 120, 0.2, (int)this, 2, 0);
          sub_1002BA40(this);
          return;
        }
        v8 = (float *)v4(this);
        v9 = v8[1];
        v10 = v8[2] + 32.0;
        *(float *)&v12 = *v8 + v15;
        v13 = v9 + v16;
        v14 = v10 + v17;
        sub_1023D4B0(218103816, (float *)&v12, 120, 0.2, (int)this, 2, 0);
      }
    }
    sub_1002BA40(this);
  }
}
