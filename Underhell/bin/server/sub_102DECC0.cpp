int __thiscall sub_102DECC0(void *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx
  float v6; // [esp+4h] [ebp-4h]

  v2 = *((_DWORD *)this + 545);
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (*((_DWORD *)this + 545) & 0xFFF) + 1], result = v2 >> 12, v3[1] != result)
    || !*v3 )
  {
    result = dword_106E06EC;
    v6 = *(float *)(dword_106E06EC + 44);
    if ( *((_DWORD *)this + 1033) != LODWORD(v6) )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v5 = (int *)*((_DWORD *)this + 6);
        if ( v5 )
          result = sub_100194B0(v5, 4132);
      }
      *((float *)this + 1033) = v6;
    }
    if ( *((_BYTE *)this + 5217) != 1 )
    {
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1696))(this, (int)this + 5217);
      *((_BYTE *)this + 5217) = 1;
    }
  }
  return result;
}
