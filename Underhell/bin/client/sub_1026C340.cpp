int __thiscall sub_1026C340(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // edi
  int result; // eax
  int v8; // edx
  int v9; // ecx

  sub_1026BAB0((_DWORD *)this, a2);
  v3 = *(_DWORD *)(this + 300);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    v6 = -1;
  }
  else
  {
    v5 = *(_DWORD **)(this + 288);
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v6 = v4;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 128))(*(_DWORD *)(this + 228))
    && (v6 > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 772))(*(_DWORD *)(this + 228))
           + *(_DWORD *)(this + 224)
           - 1
     || v6 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 772))(*(_DWORD *)(this + 228))) )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 128))(*(_DWORD *)(this + 228));
    if ( !(_BYTE)result )
      return result;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 228) + 768))(*(_DWORD *)(this + 228), v6);
  }
  result = *(_DWORD *)(this + 356);
  if ( result >= 0 && result < *(_DWORD *)(this + 236) && result <= *(_DWORD *)(this + 260) )
  {
    v8 = *(_DWORD *)(this + 232);
    if ( *(_DWORD *)(v8 + 12 * result + 4) != result || *(_DWORD *)(v8 + 12 * result + 8) == result )
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 12 * result) + 912))(*(_DWORD *)(v8 + 12 * result));
      if ( !(_BYTE)result )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(this + 232) + 12 * *(_DWORD *)(this + 356));
        return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1052))(v9);
      }
    }
  }
  return result;
}
