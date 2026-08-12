int __thiscall sub_1016ED60(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  int v7; // esi

  result = sub_1016ECF0((_DWORD *)this, *(_DWORD *)(this + 24));
  LOWORD(v3) = result;
  if ( result == 0xFFFF )
  {
    *(_DWORD *)(this + 52) = *(_DWORD *)(this + 24) + 1;
  }
  else
  {
    *(_DWORD *)(this + 52) = *(_DWORD *)(this + 24) + (int)(4.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
    do
    {
      v4 = *(_DWORD *)(this + 404);
      v5 = v4 + 20 * (unsigned __int16)v3 + 8;
      if ( *(_DWORD *)v5 >= *(_DWORD *)(this + 52) )
        break;
      v6 = *(_DWORD *)(v4 + 20 * (unsigned __int16)v3 + 16);
      if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6), "hltv_cameraman")
        && !(*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(v5 + 8) + 24))(
              *(_DWORD *)(v5 + 8),
              "index",
              0) )
      {
        result = *(_DWORD *)v5 + 1;
        *(_DWORD *)(this + 52) = result;
        *(_DWORD *)(this + 44) = 0;
        return result;
      }
      v3 = (unsigned __int16)sub_1016DF30((_DWORD *)(this + 400), v3);
    }
    while ( v3 != 0xFFFF );
    result = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31F8 + 24))(
               dword_106B31F8,
               "hltv_cameraman",
               1);
    v7 = result;
    if ( result )
    {
      (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)result + 40))(
        result,
        "index",
        *(_DWORD *)(this + 44));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 16) + 40))(*(_DWORD *)(this + 16), v7);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 40))(dword_106B31F8, v7);
    }
  }
  return result;
}
