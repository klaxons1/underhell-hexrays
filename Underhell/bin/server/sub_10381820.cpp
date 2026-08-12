int __thiscall sub_10381820(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_100EC3F0((_DWORD *)this, (int)sub_103816A0, 0.0, 0);
  result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( *(_DWORD *)(this + 1672) != COERCE_INT(0.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1672) = 0.0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        result = sub_100194B0(v3, 1672);
      *(float *)(this + 1672) = 0.0;
    }
  }
  return result;
}
