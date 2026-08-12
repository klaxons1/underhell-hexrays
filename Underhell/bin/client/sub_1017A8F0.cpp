void __thiscall sub_1017A8F0(int this, int a2)
{
  int v3; // eax
  char v4; // cl
  unsigned __int8 v5; // bl
  int v6; // eax
  char v7; // di
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  char v10; // al
  float v11[6]; // [esp+Ch] [ebp-1Ch] BYREF
  __int16 v12; // [esp+24h] [ebp-4h]

  v3 = sub_10142330();
  if ( v3 <= 7 )
    v4 = v3 < 0 ? 0 : v3;
  else
    v4 = 7;
  v5 = 1 << v4;
  v6 = sub_10142330();
  if ( v6 <= 7 )
    v7 = v6 < 0 ? 0 : v6;
  else
    v7 = 7;
  if ( ((unsigned __int8)(1 << v7) & *(_BYTE *)(this + 272)) == 0 )
  {
    v8 = *(int (__thiscall **)(int))(*(_DWORD *)this + 36);
    LOBYTE(v12) = 0;
    v9 = (float *)v8(this);
    v11[0] = *v9;
    v11[1] = v9[1];
    v11[2] = v9[2];
    v11[3] = 2.0;
    v12 = 1;
    v11[4] = 1.0;
    v11[5] = 0.0625;
    if ( 0.0 == sub_1005BF10(v11, (int *)(this + 268)) )
    {
      if ( *((float *)off_103DC81C + 3) - *(float *)(this + 264) <= 0.1 )
        return;
      v10 = ~v5;
      *(_BYTE *)(this + 273) &= ~v5;
    }
    else
    {
      v10 = ~v5;
      *(_BYTE *)(this + 273) = v5 | *(_BYTE *)(this + 273) & ~v5;
    }
    *(_BYTE *)(this + 272) = v5 | *(_BYTE *)(this + 272) & v10;
  }
  if ( (v5 & *(_BYTE *)(this + 273)) != 0 )
    sub_100F30D0((float *)this, a2);
}
