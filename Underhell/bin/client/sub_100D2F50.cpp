int __thiscall sub_100D2F50(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // ecx

  result = sub_100422D0();
  v3 = result;
  if ( result )
  {
    v4 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 788))(v3);
    if ( v5 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 1252))(v5);
    }
    else
    {
      v6 = (_DWORD *)this[52];
      if ( v6 )
        sub_100C7020(v6);
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  return result;
}
