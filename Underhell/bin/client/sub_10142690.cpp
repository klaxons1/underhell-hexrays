char __thiscall sub_10142690(int this, float a2)
{
  int v3; // eax
  int v4; // edi
  char result; // al
  int v6; // edi
  double v7; // st7

  v3 = *(_DWORD *)(this + 132);
  if ( (v3 & 1) != 0 )
  {
    v4 = sub_101164B0();
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 16) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(this + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
    return 1;
  }
  else if ( (v3 & 2) != 0 )
  {
    v6 = sub_10116450();
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 16) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
    *(_DWORD *)(this + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
    *(float *)(this + 64) = -*(float *)(this + 64);
    result = 1;
    *(float *)(this + 72) = -*(float *)(this + 72);
    v7 = *(float *)(this + 60) - a2;
    *(float *)(this + 60) = *(float *)(this + 60) - (v7 + v7);
  }
  else
  {
    return 0;
  }
  return result;
}
