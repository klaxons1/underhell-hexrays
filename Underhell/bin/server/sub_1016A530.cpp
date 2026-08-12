int __thiscall sub_1016A530(void *this)
{
  int result; // eax
  int *v3; // ecx
  float v4; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 944))(this, *((_DWORD *)this + 227));
  result = dword_106B31C8;
  v4 = *(float *)(dword_106B31C8 + 12) + 0.3;
  if ( *((_DWORD *)this + 283) != LODWORD(v4) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((float *)this + 283) = v4;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 1132);
      *((float *)this + 283) = v4;
    }
  }
  return result;
}
