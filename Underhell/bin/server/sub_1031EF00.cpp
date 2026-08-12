int __thiscall sub_1031EF00(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100422B0((_DWORD *)this);
  *(_DWORD *)(this + 4196) = sub_100BEF30(this, "gun");
  *(_DWORD *)(this + 4192) = sub_100BEF30(this, "muzzle");
  *(_DWORD *)(this + 4200) = sub_100BEF30(this, "bomb");
  *(_DWORD *)(this + 4204) = sub_100BEF30(this, "spotlight");
  result = *(_DWORD *)(this + 248) >> 21;
  if ( (*(_DWORD *)(this + 248) & 0x200000) != 0 && *(_DWORD *)(this + 428) != COERCE_INT(2048.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 428) = 2048.0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        result = sub_100194B0(v3, 428);
      *(float *)(this + 428) = 2048.0;
    }
  }
  return result;
}
