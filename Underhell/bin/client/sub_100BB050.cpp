int __thiscall sub_100BB050(float *this)
{
  double v1; // st7
  bool v3; // c0
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  double v7; // st7
  long double v8; // st6
  long double v9; // st5
  double v10; // st6
  long double v11; // st7
  int v12; // ebx
  double v13; // st7
  int v14; // eax
  char v15; // bl
  _BYTE v17[8192]; // [esp+8h] [ebp-2010h] BYREF
  int v18; // [esp+2008h] [ebp-10h]
  int v19; // [esp+200Ch] [ebp-Ch]
  float v20; // [esp+2010h] [ebp-8h]
  int v21; // [esp+2014h] [ebp-4h]

  v1 = *((float *)off_103DC81C + 3);
  v3 = v1 < this[116];
  v4 = *((unsigned __int8 *)this + 424);
  v5 = *((unsigned __int8 *)this + 425);
  v6 = *((unsigned __int8 *)this + 426);
  v21 = v4;
  v19 = v5;
  v18 = v6;
  if ( v3 || this[116] + 5.0 <= v1 )
  {
    if ( v1 > this[108] || this[108] - 1.0 >= v1 )
    {
      sub_102586A0(0, v17, 0x2000);
      sub_1025A8E0(Locale);
      BYTE2(v21) = v18;
      BYTE1(v21) = v19;
      LOBYTE(v21) = v4;
      HIBYTE(v21) = -1;
      sub_10259970(v21);
      sub_1025A7B0(v17);
    }
    else
    {
      v13 = this[108] - v1;
      v20 = v13;
      v14 = (int)(v13 * 255.0);
      if ( v14 <= 255 )
        v15 = v14 < 0 ? 0 : v14;
      else
        v15 = -1;
      sub_102586A0(0, v17, 0x2000);
      sub_1025A8E0(Locale);
      v21 = (int)((double)v21 * v20);
      HIBYTE(v21) = v15;
      v19 = (int)((double)v19 * v20);
      BYTE1(v21) = v19;
      v18 = (int)(v20 * (double)v18);
      BYTE2(v21) = v18;
      sub_10259970(v21);
      sub_1025A7B0(v17);
    }
  }
  else
  {
    v7 = (v1 - this[116]) * 0.2;
    v8 = cos(8.0 * v7 * 6.283185307179586);
    v9 = 1.0;
    if ( v8 <= 1.0 )
    {
      if ( v8 < 0.0 )
        v8 = 0.0;
      v9 = v8;
      v10 = 1.0;
    }
    else
    {
      v10 = 1.0;
    }
    LODWORD(v20) = 255 - v4;
    v11 = (v10 - v7) * v9;
    v12 = (int)((double)(255 - v4) * v11 + (double)v21);
    v21 = (int)((double)(255 - v19) * v11 + (double)v19);
    v19 = 255 - v18;
    v18 = (int)(v11 * (double)(255 - v18) + (double)v18);
    sub_102586A0(0, v17, 0x2000);
    sub_1025A8E0(Locale);
    BYTE1(v20) = v21;
    BYTE2(v20) = v18;
    LOBYTE(v20) = v12;
    HIBYTE(v20) = -1;
    sub_10259970(LODWORD(v20));
    sub_1025A7B0(v17);
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 380))(this);
}
