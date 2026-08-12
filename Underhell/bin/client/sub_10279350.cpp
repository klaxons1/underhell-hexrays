void __thiscall sub_10279350(int this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax

  if ( sub_10237C80((_DWORD *)(this + 324)) )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
    {
      v4 = sub_1022B1A0(v3, (int)"MouseWheeled", "delta", a2);
      sub_10236860((void *)this, v4);
    }
    else
    {
      sub_10236860((void *)this, 0);
    }
  }
  else
  {
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 772))(*(_DWORD *)(this + 344));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 768))(*(_DWORD *)(this + 344), v5 - 60 * a2);
  }
}
