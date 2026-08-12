int __thiscall sub_100FC7C0(float *this)
{
  int v2; // edx
  const char *v3; // eax
  int result; // eax
  double v5; // st7
  int *v6; // ecx
  float v7[3]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+10h] [ebp-4h] BYREF

  v7[0] = this[201];
  v7[1] = this[202];
  v7[2] = this[203];
  sub_10422220(v7, this + 201);
  sub_100E11A0((int)this, &flt_106F1CB4);
  sub_100E0970((int)this, v2, 7, 0);
  v3 = *(const char **)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 28))(this, &v8);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, v3);
  sub_100EA940((int *)this, 0x1000000);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 584))(this);
  if ( ((_BYTE)this[62] & 1) == 0 )
    sub_100EA940((int *)this, 4096);
  if ( ((_DWORD)this[62] & 2) != 0 )
    sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
  if ( 0.0 == this[27] )
    this[27] = 100.0;
  result = *((_DWORD *)this + 204);
  v8 = this[27];
  if ( result != LODWORD(v8) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      v5 = v8;
      *((_BYTE *)this + 88) |= 1u;
      this[204] = v5;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
        result = sub_100194B0(v6, 816);
      this[204] = v8;
    }
  }
  return result;
}
