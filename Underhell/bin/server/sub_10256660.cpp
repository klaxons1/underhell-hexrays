int __thiscall sub_10256660(int this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    if ( 0.0 != *(float *)(this + 1096)
      && flt_10627D1C != 0.0
      && flt_10627D1C >= (double)*(float *)(dword_106B31C8 + 12) )
    {
      v4 = sub_1025FB50(1);
      if ( 0.0 == *(float *)(v4 + 3472) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v4 + 3472) )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
          dword_106B31D0,
          "autosavedangerousissafe\n");
    }
    if ( *(_BYTE *)(this + 1092) )
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 276))(dword_106B31D0);
    sub_1025FAC0(this);
    if ( 0.0 == *(float *)(this + 1096) )
    {
      return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "autosave\n");
    }
    else
    {
      result = sub_1025FB50(1);
      if ( result )
      {
        result = *(_DWORD *)(result + 220);
        if ( result >= *(_DWORD *)(this + 1100) )
        {
          result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
                     dword_106B31D0,
                     "autosavedangerous\n");
          flt_10627D1C = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 1096);
        }
      }
    }
  }
  return result;
}
