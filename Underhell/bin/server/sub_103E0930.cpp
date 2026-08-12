void __thiscall sub_103E0930(char *this)
{
  float v2; // ecx
  float v3; // edx
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st6
  int v10; // edi
  int v11[3]; // [esp+24h] [ebp-34h] BYREF
  float v12; // [esp+30h] [ebp-28h]
  float v13; // [esp+34h] [ebp-24h]
  float v14; // [esp+38h] [ebp-20h]
  float v15[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  float v16; // [esp+48h] [ebp-10h] BYREF
  float v17; // [esp+4Ch] [ebp-Ch]
  float v18; // [esp+50h] [ebp-8h]
  float v19; // [esp+54h] [ebp-4h]

  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v2 = *((float *)this + 145);
  v3 = *((float *)this + 146);
  v14 = *((float *)this + 147);
  v12 = v2;
  v13 = v3;
  (*(void (__thiscall **)(char *, float *, float *, _DWORD))(*(_DWORD *)this + 528))(this, &v16, v15, 0);
  v4 = sub_10144FB0((_DWORD **)this + 281);
  v19 = v4;
  if ( fabs(v4) > 120.0 )
  {
    v5 = sub_10418240(this + 1124);
    if ( 0.0 != v5 )
    {
      v6 = v15[0] * v5 * 0.5;
      v7 = v15[1] * v5 * 0.5;
      v8 = v5 * v15[2] * 0.5;
      if ( v19 <= 0.0 )
      {
        v16 = v16 - v6;
        v17 = v17 - v7;
        v18 = v18 - v8;
      }
      else
      {
        v16 = v6 + v16;
        v17 = v7 + v17;
        v18 = v8 + v18;
      }
      off_10689714();
    }
    v9 = v19 * 0.69999999;
    *(float *)v11 = v16 * v9 + v12;
    *(float *)&v11[1] = v17 * v9 + v13;
    *(float *)&v11[2] = v9 * v18 + v14;
    v10 = (int)(0.4 * v19);
    sub_1023D4B0(8, (float *)v11, v10, 0.25, (int)this, 2, 0);
    sub_1023D4B0(1024, (float *)v11, v10, 0.25, (int)this, 3, 0);
  }
}
