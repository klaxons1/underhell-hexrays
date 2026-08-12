int __thiscall sub_10120D80(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int result; // eax
  int v7; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2) == -1 )
  {
    v3 = sub_10035AA0(this);
    v4 = a2;
    v5 = v3;
    result = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)dword_104131AC + 28))(dword_104131AC, a2);
    a2 = result;
    if ( (_WORD)result == 0xFFFF )
      return result;
  }
  else
  {
    v7 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
    v4 = a2;
    v5 = v7;
    result = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)dword_104131AC + 28))(dword_104131AC, a2);
    a2 = result;
    if ( (_WORD)result == 0xFFFF )
      return result;
  }
  return sub_10120830(&off_103E56F0, v5, v4, (__int16 *)&a2);
}
