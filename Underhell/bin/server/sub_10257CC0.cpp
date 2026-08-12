unsigned int __thiscall sub_10257CC0(_DWORD **this, int a2)
{
  unsigned int result; // eax
  int v4; // eax
  int v5[3]; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+14h] [ebp-8h]

  result = ((int (__thiscall *)(_DWORD **, int))(*this)[180])(this, a2);
  if ( (_BYTE)result )
  {
    if ( a2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
      {
        sub_101E2830((_DWORD *)a2, 16, 1);
        if ( *(_BYTE *)(a2 + 2672) != 1 )
        {
          (**(void (__thiscall ***)(int, int))(a2 + 2192))(a2 + 2192, a2 + 2672);
          *(_BYTE *)(a2 + 2672) = 1;
        }
      }
    }
    sub_101B52D0(v5, (int)this);
    if ( v6 )
      (*(void (__thiscall **)(_DWORD *, int, int))(*this[204] + 8))(this[204], v6, 1);
    if ( this[206] )
      sub_1012E7A0(a2, this + 205, (int)this);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
    if ( result )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 760))(v4);
      if ( (_BYTE)result )
        return sub_10219370(a2);
    }
  }
  return result;
}
