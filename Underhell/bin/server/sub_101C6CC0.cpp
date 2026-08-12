void __thiscall sub_101C6CC0(float *this)
{
  _BYTE *v2; // esi
  __int16 v3; // ax
  float v4[3]; // [esp+8h] [ebp-18h] BYREF
  float v5[2]; // [esp+14h] [ebp-Ch] BYREF
  float v6; // [esp+1Ch] [ebp-4h]

  v4[0] = 0.5;
  v4[1] = 0.5;
  v4[2] = 0.0;
  sub_101117D0((int)(this + 80), v4, v5);
  v2 = (char *)this + 447;
  if ( *((_BYTE *)this + 447) )
  {
    (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 672))(this, (_BYTE *)this + 447);
    *v2 = 0;
  }
  sub_100E8800(this, 0);
  v3 = (**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, v5, 0);
  if ( (v3 & 0x4030) != 0 )
  {
    sub_100E8800(this, v3);
    if ( *v2 != 1 )
    {
      (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 672))(this, (_BYTE *)this + 447);
      *v2 = 1;
    }
    if ( 0.0 == this[88] )
    {
      if ( *v2 == 3 )
        return;
      goto LABEL_14;
    }
    v6 = *(float *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this) + 8);
    if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, v5, 0) & 0x4030) != 0 )
    {
      if ( *v2 != 2 )
      {
        (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 672))(this, (_BYTE *)this + 447);
        *v2 = 2;
      }
      v6 = *(float *)((*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, v4) + 8);
      if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, v5, 0) & 0x4030) != 0
        && *v2 != 3 )
      {
LABEL_14:
        (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 672))(this, (_BYTE *)this + 447);
        *v2 = 3;
      }
    }
  }
}
