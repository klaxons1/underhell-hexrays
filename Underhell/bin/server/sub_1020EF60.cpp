int __thiscall sub_1020EF60(int this)
{
  int result; // eax
  int *v3; // ecx
  float v4; // [esp+4h] [ebp-4h]

  sub_100E38F0((float *)this);
  sub_100EBE30(this, 17);
  v4 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 424) + 116))(*(_DWORD *)(this + 424));
  result = *(_DWORD *)(this + 1216);
  if ( result != LODWORD(v4) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1216) = v4;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        result = sub_100194B0(v3, 1216);
      *(float *)(this + 1216) = v4;
    }
  }
  return result;
}
