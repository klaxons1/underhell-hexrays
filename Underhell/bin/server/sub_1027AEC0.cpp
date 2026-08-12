int __thiscall sub_1027AEC0(void *this)
{
  double v2; // st7
  int result; // eax
  int *v4; // ecx
  float v5; // [esp+8h] [ebp-4h]

  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this + 1132))(0, 0.0);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 944))(this, 184);
  v2 = *(float *)(dword_106B31C8 + 12) + 0.2;
  *((float *)this + 348) = v2;
  result = sub_100D18C0((int)this);
  v5 = v2 + *(float *)(dword_106B31C8 + 12);
  if ( *((_DWORD *)this + 283) != LODWORD(v5) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((float *)this + 283) = v5;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        result = sub_100194B0(v4, 1132);
      *((float *)this + 283) = v5;
    }
  }
  return result;
}
