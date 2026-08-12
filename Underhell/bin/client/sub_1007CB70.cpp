int __thiscall sub_1007CB70(_DWORD *this, int a2)
{
  int (__thiscall *v2)(int); // edx
  int result; // eax
  int v5; // edi
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // bx
  int v8; // esi
  unsigned __int16 v9; // ax
  char *v10; // esi
  int v11; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v12; // [esp+10h] [ebp-4h]
  unsigned __int16 v13; // [esp+1Ch] [ebp+8h]

  v2 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 20);
  v12 = this;
  result = v2(a2);
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 76))(result);
    if ( result )
    {
      v5 = (int)(this + 24605);
      v11 = a2;
      v6 = sub_1007AED0((_WORD *)v5, (int)&v11);
      v7 = v6;
      v8 = v6;
      if ( v6 >= *(int *)(v5 + 8) || v6 > *(_WORD *)(v5 + 22) || sub_1007AA60((_DWORD *)v5, v6) == v6 )
      {
        return Warning("PVS notifier not in m_PVSNotifierMap\n");
      }
      else
      {
        v9 = *(_WORD *)(v12[24606] + 16 * v8 + 12);
        v10 = (char *)(v12 + 24598);
        v13 = v9;
        sub_1007B040(v12 + 24598, v9);
        *(_WORD *)(*(_DWORD *)v10 + 16 * v13 + 14) = *((_WORD *)v10 + 8);
        *((_WORD *)v10 + 8) = v13;
        return sub_1007CA90(v5, v7);
      }
    }
  }
  return result;
}
