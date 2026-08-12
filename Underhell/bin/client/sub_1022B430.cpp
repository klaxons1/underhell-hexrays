_DWORD *__thiscall sub_1022B430(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *result; // eax
  int v8; // ecx

  v3 = KeyValuesSystem();
  v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 32);
  v5 = v4;
  if ( v4 )
  {
    *v4 = -1;
    v4[6] = 0;
    v4[5] = 0;
    v4[7] = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
    v6 = KeyValuesSystem();
    *v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 12))(v6, a2, 1);
    result = v5;
  }
  else
  {
    result = 0;
  }
  *((_BYTE *)result + 17) = *(_BYTE *)(this + 17) != 0;
  v8 = *(_DWORD *)(this + 24);
  if ( v8 )
  {
    for ( ; *(_DWORD *)(v8 + 20); v8 = *(_DWORD *)(v8 + 20) )
      ;
    *(_DWORD *)(v8 + 20) = result;
  }
  else
  {
    *(_DWORD *)(this + 24) = result;
  }
  return result;
}
