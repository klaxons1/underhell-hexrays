int __thiscall sub_102737A0(int this, _DWORD *a2, int *a3, _BYTE *a4)
{
  int result; // eax
  int v6; // [esp+4h] [ebp-8h] BYREF
  _BYTE v7[4]; // [esp+8h] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)v7, (int)&v6);
  *a3 = v6 / *(_DWORD *)(this + 256);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 128))(*(_DWORD *)(this + 252)) )
    *a2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 252) + 772))(*(_DWORD *)(this + 252));
  else
    *a2 = 0;
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 248) + 128))(*(_DWORD *)(this + 248));
  *a4 = result;
  return result;
}
