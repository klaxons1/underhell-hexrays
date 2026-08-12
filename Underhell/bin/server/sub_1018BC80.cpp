bool __thiscall sub_1018BC80(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( !(unsigned __int8)sub_102656A0(a2, a3) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    v4 = 0;
  else
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  return sub_1018BB50(v4, this[3]) == 0;
}
