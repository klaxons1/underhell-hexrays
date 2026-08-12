int __thiscall sub_101270D0(int *this)
{
  int v2; // edx
  const char *v3; // eax
  int result; // eax
  bool v5; // zf
  int *v6; // ecx
  int *v7; // ecx
  _BYTE v8[4]; // [esp+4h] [ebp-4h] BYREF

  sub_10154360("effects/fleck_ash1");
  sub_10154360("effects/fleck_ash2");
  sub_10154360("effects/fleck_ash3");
  sub_10154360("effects/ember_swirling001");
  (*(void (__thiscall **)(int *))(*this + 100))(this);
  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*this + 28))(this, v8);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int *, const char *))(*this + 104))(this, v3);
  result = this[200];
  v5 = result == 0;
  if ( result >= 0 )
  {
    if ( result <= 4 )
      goto LABEL_12;
    v5 = result == 0;
  }
  if ( !v5 )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v6 = (int *)this[6];
      if ( v6 )
        result = sub_100194B0(v6, 800);
    }
    this[200] = 0;
  }
LABEL_12:
  if ( *((_BYTE *)this + 113) != 6 )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 113) = 6;
    }
    else
    {
      v7 = (int *)this[6];
      if ( v7 )
        result = sub_100194B0(v7, 113);
      *((_BYTE *)this + 113) = 6;
    }
  }
  return result;
}
