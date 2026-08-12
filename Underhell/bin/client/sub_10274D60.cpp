void __thiscall sub_10274D60(int this, int a2)
{
  bool v3; // bl
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  char v9; // [esp+19h] [ebp-15h]
  int v10; // [esp+1Ah] [ebp-14h] BYREF
  int v11; // [esp+1Eh] [ebp-10h] BYREF
  int v12; // [esp+22h] [ebp-Ch] BYREF
  int v13; // [esp+26h] [ebp-8h] BYREF
  int v14; // [esp+2Ah] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
    || (v9 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84)) )
  {
    v9 = 1;
  }
  v3 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80);
  if ( a2 != 107 )
    goto LABEL_24;
  if ( !*(_DWORD *)(this + 264) )
    goto LABEL_24;
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v10, &v11);
  sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &v10, &v11);
  if ( v10 < 20 )
    goto LABEL_24;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 128))(*(_DWORD *)(this + 252)) )
    v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 772))(*(_DWORD *)(this + 252));
  else
    v12 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 248) + 128))(*(_DWORD *)(this + 248)) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 248) + 772))(*(_DWORD *)(this + 248));
  v4 = *(_DWORD *)(this + 264);
  v14 = sub_10273E60(v4);
  v13 = 0;
  v6 = sub_102743D0(v4, &v12, &v14, -v5, &v13, v10, v11);
  v7 = v6;
  if ( !v6 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 816))(this);
LABEL_24:
    nullsub_5(a2);
    return;
  }
  v8 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + 268) + 832))(
         *(_DWORD *)(v6 + 268),
         *(_DWORD *)(v6 + 208));
  if ( !(_BYTE)v8 )
  {
    LOBYTE(v8) = !v9 && !v3;
    (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)this + 820))(this, *(_DWORD *)(v7 + 208), v8, 1, 1);
  }
}
