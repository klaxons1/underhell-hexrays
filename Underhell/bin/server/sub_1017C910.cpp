int __thiscall sub_1017C910(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  double v6; // st7

  v3 = sub_1025FB50(1);
  v4 = v3;
  if ( 0.0 != flt_10627D1C
    && *(float *)(dword_106B31C8 + 12) <= (double)flt_10627D1C
    && (*(float *)(v3 + 3472) == 0.0 || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v3 + 3472)) )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
      dword_106B31D0,
      "autosavedangerousissafe\n");
  }
  if ( *(_BYTE *)(this + 800) )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 276))(dword_106B31D0);
  result = *(_DWORD *)(v4 + 220);
  if ( result >= *(_DWORD *)(this + 804) )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "autosavedangerous\n");
    result = a2;
    if ( *(_DWORD *)(a2 + 24) == 1 )
      v6 = *(float *)(a2 + 8);
    else
      v6 = 0.0;
    flt_10627D1C = v6 + *(float *)(dword_106B31C8 + 12);
    flt_10627D20 = (float)*(int *)(this + 808);
  }
  return result;
}
