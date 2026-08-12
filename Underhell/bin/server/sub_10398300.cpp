int __thiscall sub_10398300(int this, int a2)
{
  int v2; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  v2 = a2;
  if ( a2 == 61 )
    return 5;
  if ( a2 == 11
    && (sub_100697A0((_DWORD *)this, 28, 1) || sub_100697A0((_DWORD *)this, 29, 1))
    && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1)
    && sub_10022CA0((_DWORD *)this, 15) )
  {
    v2 = 15;
  }
  v5 = *(_DWORD *)(this + 3624);
  if ( v5 )
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 136))(v5, v2);
  else
    v6 = sub_1002CC40((_DWORD *)this, v2);
  v7 = v6;
  if ( v6 == 1 )
  {
    v8 = *(_DWORD *)(this + 2324);
    if ( (v8 == 3 || v8 == 2) && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2740) < 3.0 )
      v7 = 76;
  }
  return sub_103981B0(this, v7);
}
