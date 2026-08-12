int __thiscall sub_10085470(int this, int a2, float *a3, float *a4)
{
  unsigned __int16 v5; // ax
  int v6; // edi
  __int16 v7; // ax
  int result; // eax
  int v9; // eax
  _BYTE v10[48]; // [esp+Ch] [ebp-30h] BYREF

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v5 == 0xFFFF )
  {
    v6 = 0;
  }
  else
  {
    v7 = *(_WORD *)(168 * v5 + *(_DWORD *)(this + 36) + 8);
    if ( (v7 & 4) != 0 )
      v6 = (*(_BYTE *)(this + 208) != 0) + 1;
    else
      v6 = (v7 & 0x10) != 0 ? 4 : 1;
  }
  (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)a2 + 88))(a2, a3, a4, v6);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
  if ( result )
  {
    if ( v6 != 1 )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2);
      sub_101F0AB0(v9, v10);
      return sub_10085310(this, (int)v10, a2, a3, a4);
    }
  }
  return result;
}
