int __thiscall sub_10277D70(int this, int a2, int a3)
{
  int v4; // edi
  int result; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int i; // ebp
  int v11; // edx
  char v12; // [esp+Ah] [ebp-16h] BYREF
  char v13; // [esp+Bh] [ebp-15h] BYREF
  int v14[3]; // [esp+Ch] [ebp-14h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 244))(dword_1047CA68);
  result = (**(int (__thiscall ***)(int))this)(this);
  if ( v4 == result )
  {
    sub_10236F10((int (__thiscall ***)(void *, int *, int *))this, &a2, &a3);
    sub_10236F60(*(int (__thiscall ****)(void *, int *, int *))(this + 268), &a2, &a3);
    result = sub_10274C40(*(_DWORD *)(this + 268), a2, a3);
    if ( result != -1 )
    {
      v6 = *(_DWORD *)(this + 272);
      if ( v6 > result )
      {
        v6 = result;
        result = *(_DWORD *)(this + 272);
      }
      v7 = *(_DWORD *)(this + 268);
      v15 = 0;
      memset(v14, 0, sizeof(v14));
      v16 = 0;
      v8 = *(_DWORD *)(v7 + 264);
      v13 = 0;
      v12 = 0;
      sub_10276410(v8, (int)v14, v14, &v13, &v12, v6, result);
      v9 = 0;
      for ( i = v15; v9 < i; ++v9 )
      {
        v11 = **(_DWORD **)(this + 268);
        if ( *(_BYTE *)(this + 276) )
          (*(void (__stdcall **)(_DWORD, _DWORD, int, int))(v11 + 820))(
            *(_DWORD *)(*(_DWORD *)(v14[0] + 4 * v9) + 208),
            0,
            1,
            1);
        else
          (*(void (__stdcall **)(_DWORD))(v11 + 824))(*(_DWORD *)(*(_DWORD *)(v14[0] + 4 * v9) + 208));
      }
      return sub_1011A810(v14);
    }
  }
  return result;
}
