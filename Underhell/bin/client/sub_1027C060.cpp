int __thiscall sub_1027C060(int this)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp-4h] [ebp-1Ch]
  int v6; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE v8[4]; // [esp+10h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+14h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 353) )
  {
    sub_1027BE70((int *)this);
    *(_BYTE *)(this + 353) = 0;
  }
  nullsub_4();
  sub_1027A660(this, (int *)(this + 336));
  sub_10236250((int (__thiscall ***)(void *, int, int))this, (int)v9, (int)v8, (int)&v7, (int)&v6);
  if ( *(_DWORD *)(this + 336) > v6 && *(_BYTE *)(this + 354) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 124))(*(_DWORD *)(this + 344), 1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 212))(*(_DWORD *)(this + 344));
    v2 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 344));
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 344), v7 - v2 - 2, 0);
    v5 = v6 - 2;
    v3 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 344));
    sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 344), v3, v5);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 784))(*(_DWORD *)(this + 344), v6);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 344) + 776))(
      *(_DWORD *)(this + 344),
      0,
      *(_DWORD *)(this + 336));
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 344) + 244))(*(_DWORD *)(this + 344), 0, 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 16))(*(_DWORD *)(this + 344));
    return sub_1027A660(this, (int *)(this + 336));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 344) + 768))(*(_DWORD *)(this + 344), 0);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 344) + 124))(*(_DWORD *)(this + 344), 0);
  }
}
