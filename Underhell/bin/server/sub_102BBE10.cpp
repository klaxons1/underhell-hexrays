char __thiscall sub_102BBE10(float *this)
{
  int v2; // edx
  char result; // al
  int *v4; // ecx

  sub_100E0D20((int)this, this + 315);
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(
    this,
    "models/props_combine/headcrabcannister01b.mdl");
  sub_100E0970((int)this, v2, 0, 0);
  sub_10112C00((int)(this + 80), 6);
  sub_100EA370(this);
  result = sub_100EAB80(this, 8);
  if ( *((_BYTE *)this + 1120) != 1 )
  {
    result = (char)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 1120) = 1;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        result = sub_100194B0(v4, 1120);
      *((_BYTE *)this + 1120) = 1;
    }
  }
  return result;
}
