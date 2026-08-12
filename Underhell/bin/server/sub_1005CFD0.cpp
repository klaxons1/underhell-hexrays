int __thiscall sub_1005CFD0(int this)
{
  int result; // eax

  if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2324) != 3 )
    return sub_1004B430((_DWORD **)this);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 284))(this);
  if ( !result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 288))(this);
    if ( !result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 292))(this);
      if ( !result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 296))(this);
        if ( !result )
          return sub_1004B430((_DWORD **)this);
      }
    }
  }
  return result;
}
