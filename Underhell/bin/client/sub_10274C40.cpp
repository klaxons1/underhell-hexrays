int __thiscall sub_10274C40(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // edi
  int v8; // esi
  int v9; // edx
  int v10; // eax
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v4 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  if ( a2 <= v4 - 1 )
    v5 = a2 < 0 ? 0 : a2;
  else
    v5 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this) - 1;
  v6 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) - 1;
  if ( a3 <= v6 )
    v7 = a3 < 0 ? 0 : a3;
  else
    v7 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) - 1;
  if ( v5 < 20 )
    return -1;
  a2 = (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 128))(*(_DWORD *)(this + 252))
     ? (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 772))(*(_DWORD *)(this + 252))
     : 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 248) + 128))(*(_DWORD *)(this + 248)) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 248) + 772))(*(_DWORD *)(this + 248));
  v8 = *(_DWORD *)(this + 264);
  v12 = sub_10273E60(v8);
  a3 = 0;
  v10 = sub_102743D0(v8, &a2, &v12, -v9, &a3, v5, v7);
  if ( v10 )
    return *(_DWORD *)(v10 + 208);
  else
    return -1;
}
