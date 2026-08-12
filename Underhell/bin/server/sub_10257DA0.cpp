void __thiscall sub_10257DA0(_DWORD **this, int a2)
{
  int v3; // eax
  int v4[3]; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+14h] [ebp-8h]

  if ( ((unsigned __int8 (__thiscall *)(_DWORD **, int))(*this)[180])(this, a2) )
  {
    if ( a2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
      {
        sub_101E2830((_DWORD *)a2, 16, 0);
        if ( *(_BYTE *)(a2 + 2672) )
        {
          (**(void (__thiscall ***)(int, int))(a2 + 2192))(a2 + 2192, a2 + 2672);
          *(_BYTE *)(a2 + 2672) = 0;
        }
      }
    }
    sub_101B52D0(v4, (int)this);
    if ( v5 && this[204] )
      (*(void (__thiscall **)(_DWORD *, int))(*this[204] + 12))(this[204], v5);
    if ( this[206] )
      sub_1012E5D0(a2, (int)(this + 205));
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 760))(v3) )
        sub_10219410(a2);
    }
  }
}
