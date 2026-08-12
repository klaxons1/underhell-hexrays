void __thiscall sub_102E4C20(int this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  float *v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ecx
  float *v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Fh] [ebp-1h]

  v2 = *(_DWORD **)(this + 5376);
  if ( v2 && (v3 = sub_100B1560(v2, 0, 1)) != 0 )
  {
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1568))(v3);
    v8 = v4;
  }
  else
  {
    v8 = 0;
    v4 = 0;
  }
  v9 = 0;
  if ( v4 )
  {
    if ( v4[614] != flt_10689730 || v4[615] != flt_10689734 || (v9 = 1, v4[616] != flt_10689738) )
      v9 = 0;
    v5 = sub_102DAC40((_DWORD **)this);
    if ( *(_DWORD *)(this + 5096) != v5 )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5096);
      *(_DWORD *)(this + 5096) = v5;
    }
    v6 = sub_102DAC90((_DWORD **)this);
    if ( *(_DWORD *)(this + 5100) != v6 )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5100);
      *(_DWORD *)(this + 5100) = v6;
    }
    if ( v9 != *(_BYTE *)(this + 5104) )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5104);
      *(_BYTE *)(this + 5104) = v9;
    }
    v4 = v8;
  }
  else
  {
    if ( *(_DWORD *)(this + 5096) )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5096);
      *(_DWORD *)(this + 5096) = 0;
    }
    if ( *(_DWORD *)(this + 5100) )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5100);
      *(_DWORD *)(this + 5100) = 0;
    }
    if ( *(_BYTE *)(this + 5104) != 1 )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5104);
      *(_BYTE *)(this + 5104) = 1;
    }
  }
  v7 = *(_DWORD *)(this + 5388);
  if ( v7 && (v7 == 2 || *(float *)dword_106B31C8 - *(float *)(this + 5384) >= *(float *)(dword_106E089C + 44)) )
  {
    sub_102E3B10((_DWORD *)this, *(_DWORD *)(this + 5388));
    *(_DWORD *)(this + 5388) = 0;
  }
  else if ( !v9
         && v4
         && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5380) > -0.001
         && *(_DWORD *)(dword_106E0854 + 48) )
  {
    *(float *)(this + 5380) = *(float *)(dword_106B31C8 + 12) + 2.5;
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v4 + 1540))(v4) )
      sub_102E3B10((_DWORD *)this, 2);
  }
}
