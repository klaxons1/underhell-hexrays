void __thiscall sub_100F7730(float *this)
{
  float *v2; // eax
  float v3; // edx
  float v4; // eax
  int v5; // ebx
  char v6; // cl
  char *v7; // eax
  char *v8; // eax
  double v9; // st7
  float v10[3]; // [esp+Ch] [ebp-1Ch] BYREF
  float v11[3]; // [esp+18h] [ebp-10h] BYREF
  unsigned int i; // [esp+24h] [ebp-4h]

  v2 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  v10[0] = *v2;
  v10[1] = v2[1];
  v10[2] = v2[2];
  sub_10038150((int)this);
  v3 = this[62];
  v4 = this[63];
  v5 = dword_10434B0C;
  v11[0] = this[61];
  v11[1] = v3;
  v11[2] = v4;
  v6 = 0;
  for ( i = 0; (int)i < 12; i += 4 )
  {
    if ( (LODWORD(v11[i / 4]) & 0x7F800000) == 0x7F800000 )
    {
      v7 = sub_10034D90(this);
      Msg("Got a NaN velocity on %s\n", v7);
      v11[i / 4] = 0.0;
      v5 = dword_10434B0C;
      v6 = 1;
    }
    if ( (LODWORD(v10[i / 4]) & 0x7F800000) == 0x7F800000 )
    {
      v8 = sub_10034D90(this);
      Msg("Got a NaN origin on %s\n", v8);
      v10[i / 4] = 0.0;
      v5 = dword_10434B0C;
      v6 = 1;
    }
    if ( *(float *)(v5 + 44) >= (double)v11[i / 4] )
    {
      v9 = -*(float *)(v5 + 44);
      if ( v9 > v11[i / 4] )
      {
        v11[i / 4] = v9;
        v6 = 1;
      }
    }
    else
    {
      v11[i / 4] = *(float *)(v5 + 44);
      v6 = 1;
    }
  }
  if ( v6 )
  {
    sub_10037BA0((int)this, v10);
    sub_100399E0((int)this, v11);
  }
}
