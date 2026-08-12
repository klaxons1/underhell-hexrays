void __thiscall sub_103574F0(int this)
{
  int v1; // edi
  char v3; // al
  int (__stdcall *v4)(_DWORD, int); // eax
  int v5; // eax
  int v6; // eax
  float *v7; // eax
  float *v8; // eax
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  _DWORD *v14; // eax
  __int64 v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+20h] [ebp-24h] BYREF
  float v17; // [esp+24h] [ebp-20h]
  float v18; // [esp+28h] [ebp-1Ch]
  int v19[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v20; // [esp+38h] [ebp-Ch] BYREF
  float v21; // [esp+3Ch] [ebp-8h]
  float v22; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  v1 = dword_106B31C8;
  *(float *)(this + 4160) = *(float *)(v1 + 12) - sub_100E92C0((_DWORD *)this, 0);
  if ( 0.0 != *(float *)(this + 4124) && *(float *)(this + 4124) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_10355CF0(this);
    return;
  }
  v3 = *(_BYTE *)(this + 224);
  if ( !v3 )
  {
    if ( (*(_DWORD *)(this + 248) & 0x2000) == 0 )
      sub_10350840(this);
    sub_10355830((int *)this, v1);
    sub_10353CF0(this);
LABEL_8:
    sub_10041D00((_DWORD *)this);
    return;
  }
  if ( v3 != 1 )
    goto LABEL_8;
  v4 = *(int (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_106B31E4 + 8);
  if ( *(float *)(this + 4124) - *(float *)(dword_106B31C8 + 12) <= 1.5 )
    v5 = v4(0, 2);
  else
    v5 = v4(0, 3);
  if ( !v5 )
  {
    if ( sub_1026A890((unsigned int *)(this + 4224)) )
    {
      v20 = 0.75;
      v21 = 0.75;
      v22 = 0.75;
      *(float *)&v16 = 0.25;
      v17 = 0.25;
      v18 = 0.25;
      v6 = sub_1026A890((unsigned int *)(this + 4224));
      sub_10111860(v6 + 320, (float *)&v16, &v20, (float *)v19);
    }
    else
    {
      *(float *)&v16 = 0.75;
      v17 = 0.75;
      v18 = 0.75;
      v20 = 0.25;
      v21 = 0.25;
      v22 = 0.25;
      sub_10111860(this + 320, &v20, (float *)&v16, (float *)v19);
      if ( sub_102DC130((unsigned int *)(this + 4228)) )
      {
        v7 = (float *)sub_10019640((_DWORD *)this);
        v20 = *v7 - *(float *)v19;
        v21 = v7[1] - *(float *)&v19[1];
        v22 = v7[2] - *(float *)&v19[2];
        off_10689714();
        *(float *)&v16 = v20 * 128.0;
        v17 = v21 * 128.0;
        v18 = 128.0 * v22;
        sub_100EA150(this, (float *)&v16);
      }
    }
    *(float *)&v16 = 0.0;
    v17 = 0.0;
    v18 = 1.0;
    sub_1013D530((float *)v19, (float *)&v16, this, 100, 128, 0, 0.0, 0, 0, -1);
  }
  if ( 0.0 == *(float *)(this + 4232) || !sub_102DC130((unsigned int *)(this + 4224)) )
    goto LABEL_8;
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4232) )
    sub_103546F0(this, (int)&savedregs);
  if ( !sub_1026A890((unsigned int *)(this + 4228)) )
    goto LABEL_8;
  sub_10353CF0(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2320))(this);
  v8 = (float *)sub_10019640((_DWORD *)this);
  v9 = *(float *)(this + 3624) - v8[1];
  v10 = v9 * v9;
  v11 = *(float *)(this + 3620) - *v8;
  v12 = v10;
  v13 = *(float *)(this + 3628) - v8[2];
  if ( v11 * v11 + v12 + v13 * v13 >= 147456.0 )
    goto LABEL_8;
  sub_10357140(this);
  HIDWORD(v15) = this;
  LODWORD(v15) = this;
  sub_1010DD80((_DWORD *)(this + 3952), v15, 0.0);
  v14 = (_DWORD *)sub_1026A890((unsigned int *)(this + 4228));
  sub_103507C0(v14);
}
