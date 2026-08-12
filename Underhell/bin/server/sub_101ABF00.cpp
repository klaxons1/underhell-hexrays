void __thiscall sub_101ABF00(int this)
{
  const char *v2; // eax
  int v3; // ebx
  int *v4; // ecx

  sub_100E38F0((float *)this);
  v2 = *(const char **)(this + 804);
  if ( !v2 )
    v2 = String;
  v3 = sub_10154400(v2);
  if ( *(_DWORD *)(this + 812) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 812);
    }
    *(_DWORD *)(this + 812) = v3;
  }
  if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    sub_101ABD90(this);
  }
}
