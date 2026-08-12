void __thiscall sub_101E8F80(int this, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  _DWORD *v8; // edx
  double v9; // st7

  v5 = -1;
  if ( *(_BYTE *)(this + 2329)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
  {
    if ( !a2 )
    {
      *(_DWORD *)(this + 3672) = 0;
      *(_DWORD *)(this + 3676) = 0;
      *(_DWORD *)(this + 3680) = 0;
      *(_DWORD *)(this + 3684) = 0;
      return;
    }
    if ( a3 )
    {
      v6 = -sub_10238300(a2);
    }
    else
    {
      v6 = sub_102382E0(a2);
      if ( v6 < 0 )
        return;
    }
    v7 = 0;
    v8 = (_DWORD *)(this + 3692);
    while ( v6 != *v8 )
    {
      if ( !*v8 )
        v5 = v7;
      ++v7;
      ++v8;
      if ( v7 >= 32 )
        goto LABEL_17;
    }
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 4 * v7 + 3820) )
      return;
    *(_DWORD *)(this + 4 * v7 + 3692) = 0;
    *(float *)(this + 4 * v7 + 3820) = 0.0;
    v5 = v7;
LABEL_17:
    if ( a4 )
    {
      if ( v5 < 0 )
        v5 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 31);
      *(_DWORD *)(this + 4 * v5 + 3692) = v6;
      *(float *)(this + 4 * v5 + 3820) = (double)a4 + *(float *)(dword_106B31C8 + 12);
    }
    *(_DWORD *)(this + 4 * (*(_DWORD *)(this + 3688))++ + 3672) = v6;
    if ( *(_DWORD *)(this + 3688) == 4 )
      *(_DWORD *)(this + 3688) = 0;
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3668) )
    {
      v9 = *(float *)(dword_106B31C8 + 12);
      if ( 0.0 == *(float *)(this + 3668) )
        *(float *)(this + 3668) = v9 + 0.1;
      else
        *(float *)(this + 3668) = v9 + 3.5;
    }
  }
}
