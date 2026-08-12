void __thiscall sub_103381B0(int this)
{
  int v2; // edi
  int v3; // eax
  void *v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edi
  const char *v8; // ebx
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  float v18; // edx
  int v19; // ebx
  int (__thiscall *v20)(int); // eax
  int v21; // eax
  float v22; // edx
  double v23; // st7
  unsigned __int8 (__thiscall *v24)(int); // eax
  float v25; // [esp+Ch] [ebp-14h] BYREF
  float v26; // [esp+10h] [ebp-10h]
  float v27; // [esp+14h] [ebp-Ch]
  float v28; // [esp+18h] [ebp-8h]
  float v29; // [esp+1Ch] [ebp-4h]

  sub_10397340();
  if ( sub_100296A0((_DWORD *)this) )
  {
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      v2 = *(_DWORD *)this;
      v3 = sub_10261B20();
      if ( (*(int (__thiscall **)(int, int))(v2 + 1080))(this, v3) == 4 )
        sub_10337C80((_DWORD *)this);
    }
  }
  v4 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
  if ( !sub_100AFBB0(v4, (int)"TLK_JOINPLAYER") )
  {
    if ( sub_10227410(this, 1) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
      sub_100B0060(v5, "TLK_JOINPLAYER", 0, 1);
      v6 = 0;
      v29 = 0.0;
      if ( sub_1016BFB0(&dword_10690DF8) > 0 )
      {
        do
        {
          v7 = *(_DWORD *)(sub_1002A680(&dword_10690DF8) + 4 * v6);
          if ( v7 != this )
          {
            v8 = *(const char **)(v7 + 92);
            if ( !v8 )
              v8 = String;
            if ( v8 == sub_10019630((_DWORD *)this) )
            {
              if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
                sub_100DAE60(this);
              if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
                sub_100DAE60(v7);
              v9 = *(float *)(v7 + 584) - *(float *)(this + 584);
              v10 = v9 * v9;
              v11 = *(float *)(v7 + 580) - *(float *)(this + 580);
              v12 = v10;
              v13 = *(float *)(v7 + 588) - *(float *)(this + 588);
              if ( v11 * v11 + v12 + v13 * v13 < 32400.0
                && (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 548))(
                     this,
                     v7,
                     16449,
                     0) )
              {
                v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1656))(v7);
                sub_100B0060(v14, "TLK_JOINPLAYER", 0, 1);
              }
            }
          }
          v6 = ++LODWORD(v29);
        }
        while ( SLODWORD(v29) < sub_1016BFB0(&dword_10690DF8) );
      }
    }
  }
  if ( sub_10336A60(this) )
  {
    v15 = *(_DWORD *)(this + 252);
    v25 = 240.0;
    v26 = 240.0;
    v27 = 240.0;
    if ( (v15 & 0x800) != 0 )
      sub_100DAE60(this);
    if ( sub_100C80F0((void *)this, (float *)(this + 580), &v25) )
      sub_10023CB0((char *)this, 47);
    else
      sub_10023E00((char *)this, 47);
    *(float *)(this + 5708) = *(float *)(dword_106B31C8 + 12) + 4.0;
  }
  if ( ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this)
     || (*(_DWORD *)(this + 248) & 0x80000) != 0)
    && (*(_DWORD *)(dword_10698344 + 48)
     || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this)
     || sub_100CF460((_DWORD *)this))
    && !*(_BYTE *)(this + 2680)
    && *(_DWORD *)(this + 2324) != 4 )
  {
    if ( *(int *)(dword_106B31C8 + 20) > 1 )
      goto LABEL_56;
    v16 = sub_10261B20();
    v17 = v16;
    if ( !v16 )
      goto LABEL_56;
    if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
      sub_100DAE60(v16);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v18 = *(float *)v17;
    v19 = *(_DWORD *)(v17 + 220);
    v25 = *(float *)(this + 580) - *(float *)(v17 + 580);
    v26 = *(float *)(this + 584) - *(float *)(v17 + 584);
    v20 = *(int (__thiscall **)(int))(LODWORD(v18) + 448);
    v28 = *(float *)(dword_106E5E6C + 44);
    v21 = v20(v17);
    v22 = *(float *)v17;
    LODWORD(v29) = v21 - v19;
    v23 = (double)(v21 - v19);
    v24 = *(unsigned __int8 (__thiscall **)(int))(LODWORD(v22) + 264);
    v29 = v23;
    if ( !v24(v17) )
      goto LABEL_56;
    if ( v29 > 0.0
      && v28 * v28 >= v26 * v26 + v25 * v25
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v17 + 876))(v17, this)
      && (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v17 + 548))(v17, this, 16449, 0) )
    {
      if ( 3.4028235e38 == *(float *)(this + 5780) )
        *(float *)(this + 5780) = *(float *)(dword_106B31C8 + 12);
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5780) >= *(float *)(dword_106E5E24 + 44)
        && *(float *)(this + 5784) < (double)*(float *)(dword_106B31C8 + 12)
        && !sub_100697A0((_DWORD *)this, 99, 1) )
      {
        if ( sub_10336540(this, (float *)v17, 1) )
        {
          sub_10023CB0((char *)this, 79);
        }
        else
        {
          *(float *)(this + 5784) = *(float *)(dword_106E5EB4 + 44) * 0.5 + *(float *)(dword_106B31C8 + 12);
          sub_10023E00((char *)this, 79);
        }
      }
      if ( sub_1004BD10((_DWORD **)(this + 4456)) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 296))(this) )
          sub_10023CB0((char *)this, 79);
      }
    }
    else
    {
LABEL_56:
      *(float *)(this + 5780) = 3.4028235e38;
    }
  }
}
