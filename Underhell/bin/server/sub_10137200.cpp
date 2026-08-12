int __thiscall sub_10137200(int this)
{
  double v2; // st7
  int v3; // eax
  unsigned int v4; // edi
  int *v5; // ecx
  _DWORD *v6; // eax
  int result; // eax
  _DWORD *v8; // [esp+4h] [ebp-8h]

  v2 = *(float *)(this + 984);
  *(_DWORD *)(this + 968) = 1;
  if ( 0.0 != v2 || (*(_DWORD *)(this + 248) & 8) != 0 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10136C40, 0.0, 0);
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  else
  {
    v3 = *(_DWORD *)(this + 192);
    v4 = v3 & 0xFFFFFFDF;
    if ( v3 != (v3 & 0xFFFFFFDF) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 192);
      }
      *(_DWORD *)(this + 192) = v4;
    }
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    sub_100D8500((_DWORD *)this);
    v8 = sub_100F9A90((_DWORD *)this);
    v6 = sub_100F9650((_DWORD *)this);
    sub_100F9CD0((_DWORD *)this, (int)v6, (int)v8);
    sub_100EC3F0((_DWORD *)this, (int)sub_10136460, 0.0, 0);
    result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    *(float *)(this + 808) = *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
