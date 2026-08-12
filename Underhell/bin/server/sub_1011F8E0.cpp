int __thiscall sub_1011F8E0(int this, bool a2)
{
  bool v3; // bl
  int result; // eax
  int i; // esi
  int v6; // [esp+1Ch] [ebp+8h]

  sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), (int)"CloseAreaportalThink");
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 728))(this) && (*(_BYTE *)(this + 248) & 1) != 0 )
    v3 = !a2;
  else
    v3 = a2;
  result = *(_DWORD *)(this + 260);
  v6 = result;
  if ( result )
  {
    result = sub_1012BC90(0, "func_areaportal");
    for ( i = result; result; i = result )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)i + 316))(i, v6) )
        (*(void (__thiscall **)(int, int, int, bool, _DWORD))(*(_DWORD *)i + 372))(i, this, this, v3, 0.0);
      result = sub_1012BC90(i, "func_areaportal");
    }
  }
  return result;
}
