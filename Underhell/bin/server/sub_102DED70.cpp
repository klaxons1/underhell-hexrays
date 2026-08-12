int __thiscall sub_102DED70(void *this)
{
  int result; // eax
  int *v3; // ecx
  float v4; // [esp+Ch] [ebp-4h]

  result = dword_106984AC;
  if ( *(_DWORD *)(dword_106984AC + 48) )
  {
    v4 = *(float *)(dword_106985CC + 44);
    if ( *((_DWORD *)this + 1033) != LODWORD(v4) )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((float *)this + 1033) = v4;
      }
      else
      {
        v3 = (int *)*((_DWORD *)this + 6);
        if ( v3 )
          result = sub_100194B0(v3, 4132);
        *((float *)this + 1033) = v4;
      }
    }
  }
  else
  {
    if ( *((_BYTE *)this + 2137) )
      return result;
    result = sub_100EA7B0((int)this, *(float *)(dword_106E0734 + 44));
  }
  if ( *((_BYTE *)this + 5217) )
  {
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1696))(this, (int)this + 5217);
    *((_BYTE *)this + 5217) = 0;
  }
  return result;
}
