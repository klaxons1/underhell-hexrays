int __thiscall sub_101E7300(int this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // esi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1092))(this);
  v3 = (_DWORD *)this;
  if ( !v2 )
    goto LABEL_4;
  sub_100F59C0((_DWORD *)this);
  if ( 0.0 == *(float *)(this + 4380) )
  {
    v3 = (_DWORD *)this;
LABEL_4:
    v4 = sub_100F5E70(v3);
    goto LABEL_5;
  }
  v4 = (int)*(float *)(this + 4380);
LABEL_5:
  v5 = *(_DWORD *)(this + 3484);
  if ( !v5 )
    v5 = v4;
  if ( 0.0 != *(float *)(this + 2256)
    && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3496) < *(float *)(this + 2256) )
  {
    v6 = *(_DWORD *)(this + 3492);
    if ( v5 >= v6 )
      return v6;
  }
  return v5;
}
