void __thiscall sub_10048430(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  double v5; // st7
  double v6; // st6
  float v7; // ecx
  float v8; // edx
  double v9; // st7
  double v10; // st6
  float v11; // [esp+0h] [ebp-20h]
  float v12[3]; // [esp+8h] [ebp-18h] BYREF
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 1468);
  if ( v2 )
  {
    if ( *(_DWORD *)(dword_104092EC + 48) || !*(_BYTE *)(this + 1464) && 0.0 == *(float *)(this + 1200) )
    {
      sub_10091FC0(v2, 0.0);
    }
    else
    {
      v3 = sub_1012D2F0(1);
      if ( v3 )
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
        v5 = 0.0;
        v6 = *(float *)(this + 1192);
        v7 = *(float *)v4;
        v8 = *(float *)(v4 + 4);
        v15 = *(float *)(v4 + 8);
        v13 = v7;
        v14 = v8;
        if ( -1.0 != v6 && *(float *)(this + 1196) != -1.0 && *(float *)(this + 1196) != *(float *)(this + 1192) )
        {
          v12[0] = v13 - *(float *)(this + 1180);
          v12[1] = v14 - *(float *)(this + 1184);
          v9 = v15 - *(float *)(this + 1188);
          v12[2] = v9;
          sub_10011670(v12);
          v5 = (v9 - *(float *)(this + 1192)) / (*(float *)(this + 1196) - *(float *)(this + 1192));
          v10 = 0.0;
          if ( v5 < 0.0 || (v10 = 1.0, v5 > 1.0) )
            v5 = v10;
        }
        v11 = (1.0 - v5) * *(float *)(this + 1200);
        sub_10091FC0(*(_DWORD *)(this + 1468), v11);
        nullsub_4();
      }
    }
  }
}
