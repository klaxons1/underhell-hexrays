int __thiscall sub_101E34F0(int this, int a2, int a3, int a4)
{
  int result; // eax

  *(_DWORD *)(this + 3544) = a4;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      (*(void (__thiscall **)(_DWORD, int, float *, int))(**(_DWORD **)(this + 3596) + 180))(
        *(_DWORD *)(this + 3596),
        a2,
        &flt_106F1CB4,
        1);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3596) + 196))(*(_DWORD *)(this + 3596), a3, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3592) + 48))(*(_DWORD *)(this + 3592), 0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3588) + 20))(
        *(_DWORD *)(this + 3588),
        *(_DWORD *)(this + 3596));
      sub_100D6020((_DWORD *)this, *(_DWORD *)(this + 3596));
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3596) + 48))(*(_DWORD *)(this + 3596), 1);
    }
    else
    {
      result = a4 - 2;
      if ( a4 == 2 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3596) + 48))(*(_DWORD *)(this + 3596), 0);
        return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3592) + 48))(*(_DWORD *)(this + 3592), 0);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, float *, int))(**(_DWORD **)(this + 3592) + 180))(
      *(_DWORD *)(this + 3592),
      a2,
      &flt_106F1CB4,
      1);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3592) + 196))(*(_DWORD *)(this + 3592), a3, 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3596) + 48))(*(_DWORD *)(this + 3596), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3588) + 20))(
      *(_DWORD *)(this + 3588),
      *(_DWORD *)(this + 3592));
    sub_100D6020((_DWORD *)this, *(_DWORD *)(this + 3592));
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3592) + 48))(*(_DWORD *)(this + 3592), 1);
  }
  return result;
}
