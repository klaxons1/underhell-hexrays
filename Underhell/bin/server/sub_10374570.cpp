char __thiscall sub_10374570(_DWORD *this, _DWORD *a2, char a3)
{
  int v4; // ecx
  _DWORD *v5; // esi

  if ( a3 )
  {
    v4 = a2[106];
    if ( (!v4 || ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4) & 4) == 0)
      && !sub_1040ABE0(a2)
      && !(unsigned __int8)sub_1040B950(a2, 0)
      && *(float *)(dword_106E93CC + 44) > 0.0 )
    {
      v5 = (_DWORD *)sub_10050FC0(this + 1073);
      if ( v5 )
      {
        sub_10019640(a2);
        sub_10019640(v5);
      }
    }
  }
  return 0;
}
