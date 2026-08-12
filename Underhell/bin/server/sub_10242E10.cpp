void __thiscall sub_10242E10(_BYTE *this)
{
  int v2; // edx
  int v3; // eax
  int *v4; // ecx
  const char *v5; // eax
  int v6; // edi
  int v7; // eax
  double v8; // st7
  int v9; // eax
  double v10; // st6
  const char *v11; // eax
  __int128 v12; // [esp+8h] [ebp-28h]
  float v13; // [esp+10h] [ebp-20h]
  int v14; // [esp+20h] [ebp-10h] BYREF
  float v15; // [esp+24h] [ebp-Ch]
  float v16; // [esp+28h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp-4h] BYREF

  sub_10112C00((int)(this + 320), 0);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = *((_DWORD *)this + 203);
  v17 = 0.0;
  if ( v3 != COERCE_INT(0.0) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 812);
    }
    *((float *)this + 203) = 0.0;
  }
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 100))(this);
  v5 = *(const char **)(*(int (__thiscall **)(_BYTE *, float *))(*(_DWORD *)this + 28))(this, &v17);
  if ( !v5 )
    v5 = String;
  (*(void (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 104))(this, v5);
  sub_10112B00(this + 320, 4, 0, 0);
  v6 = *(_DWORD *)dword_106B31F0;
  v7 = sub_100D7240(this);
  v17 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(v6 + 32))(dword_106B31F0, v7));
  *((float *)this + 213) = (double)SLODWORD(v17) - 1.0;
  sub_100EAB80(this, 80);
  if ( !*((_DWORD *)this + 65) || (this[248] & 1) != 0 )
  {
    sub_10242BA0((int)this);
  }
  else
  {
    sub_100EAB80(this, 32);
    sub_100EC4A0((int *)this, -1.0, 0);
  }
  v8 = 0.0;
  if ( 0.0 != *((float *)this + 183) && 0.0 == *((float *)this + 184) )
  {
    v9 = *((_DWORD *)this + 182);
    v15 = *((float *)this + 183);
    v14 = v9;
    v16 = v15;
    v15 = 0.0;
    sub_100E11A0((int)this, (float *)&v14);
    v8 = 0.0;
  }
  v10 = *((float *)this + 207);
  v17 = *((float *)this + 207);
  if ( v10 < v8 || v10 > 64.0 )
  {
    *(double *)((char *)&v12 + 4) = 64.0;
    LODWORD(v12) = *((_DWORD *)this + 207);
    v11 = sub_100D6390(this);
    DevMsg("LEVEL DESIGN ERROR: Sprite %s with bad scale %f [0..%f]\n", v11, *(double *)&v12, *((double *)&v12 + 1));
    if ( *((float *)this + 207) <= 64.0 )
    {
      v8 = 0.0;
      if ( *((float *)this + 207) >= 0.0 )
        LODWORD(v17) = (int)*((float *)this + 207);
      else
        v17 = 0.0;
      v17 = (float)SLODWORD(v17);
    }
    else
    {
      v17 = 64.0;
      v8 = 0.0;
    }
  }
  v13 = v8;
  sub_10242820((int)this, (unsigned __int8)this[119], v13);
  sub_102428B0((int)this, v17, 0.0);
}
