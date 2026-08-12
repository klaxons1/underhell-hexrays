int __thiscall sub_1016A5B0(void *this)
{
  int result; // eax
  int *v3; // ecx
  float v4; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 32))(this, *((_DWORD *)this + 344));
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 32))(this, 0);
  sub_100C1170((int)this, 0);
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 944))(this, 0);
  result = dword_106B31C8;
  v4 = *(float *)(dword_106B31C8 + 12) + 0.3;
  if ( *((_DWORD *)this + 284) != LODWORD(v4) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((float *)this + 284) = v4;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        result = sub_100194B0(v3, 1136);
      *((float *)this + 284) = v4;
    }
  }
  return result;
}
