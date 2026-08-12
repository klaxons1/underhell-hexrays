int __thiscall sub_10052F00(int this)
{
  int result; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st6
  float v6; // [esp+4h] [ebp-1Ch] BYREF
  float v7; // [esp+8h] [ebp-18h]
  float v8; // [esp+Ch] [ebp-14h]
  float v9; // [esp+10h] [ebp-10h] BYREF
  float v10; // [esp+14h] [ebp-Ch]
  float v11; // [esp+18h] [ebp-8h]
  float v12; // [esp+1Ch] [ebp-4h]

  result = *(_DWORD *)(this + 1216);
  if ( (result & 4) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      v3 = 0.1;
      if ( *((float *)off_103DC81C + 4) < 0.1 )
        v3 = *((float *)off_103DC81C + 4);
      while ( v3 >= *(float *)(this + 1484) )
      {
        v12 = v3 - *(float *)(this + 1484);
        *(float *)(this + 1484) = *(float *)(this + 1480);
        sub_100527A0((float *)(this - 12));
        v3 = v12;
      }
      *(float *)(this + 1484) = *(float *)(this + 1484) - v3;
    }
    sub_1008EA70(this + 348, this + 360, &v6, &v9);
    v4 = *(float *)(this + 1192);
    v6 = v6 - v4;
    v7 = v7 - v4;
    v8 = v8 - v4;
    v5 = *(float *)(this + 1192);
    v9 = v5 + v9;
    v10 = v5 + v10;
    v11 = v5 + v11;
    return sub_100EC3F0(&v6, &v9, 1);
  }
  return result;
}
