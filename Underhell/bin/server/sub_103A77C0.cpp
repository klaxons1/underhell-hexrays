int __thiscall sub_103A77C0(int *this)
{
  int *v2; // eax
  double v3; // st7
  int *v4; // ecx
  int result; // eax
  float v6; // [esp+10h] [ebp-4h]

  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v2 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
    sub_103A6EB0((int)this, v2);
  }
  sub_10242820(this[972], 0, 0.0);
  v3 = 8.0;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 8.0, 12.0);
  if ( (this[62] & 0x20000) != 0 )
    v3 = 8.0 * 0.5;
  v6 = v3 + *(float *)(dword_106B31C8 + 12);
  if ( this[418] != LODWORD(v6) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)this[6];
      if ( v4 )
        sub_100194B0(v4, 1672);
    }
    *((float *)this + 418) = v6;
  }
  result = dword_106B31C8;
  *((float *)this + 990) = *(float *)(dword_106B31C8 + 12) + 1.0;
  return result;
}
