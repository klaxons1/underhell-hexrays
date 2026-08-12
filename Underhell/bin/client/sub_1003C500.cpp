int __thiscall sub_1003C500(unsigned __int16 *this, int a2)
{
  int result; // eax
  unsigned __int16 *v4; // esi
  int v5; // edi

  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 36))(this);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      result = a2 - 1;
      if ( a2 == 1 )
      {
        sub_1003B730((_DWORD *)this - 2);
        (*(void (__thiscall **)(unsigned __int16 *, int))(*((_DWORD *)this - 2) + 192))(this - 4, 1);
        return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_10413184 + 20))(140, this[191]);
      }
    }
    else
    {
      v4 = this - 4;
      (*(void (__thiscall **)(unsigned __int16 *, _DWORD))(*((_DWORD *)this - 2) + 192))(this - 4, 0);
      sub_10035E20(this - 4);
      result = sub_101079E0(this + 70);
      if ( (_BYTE)result )
      {
        sub_10107A00(1);
        result = sub_10033FA0();
        v5 = result;
        if ( result )
        {
          sub_10107A00(1);
          result = (*(int (__thiscall **)(unsigned __int16 *, _DWORD, int))(*(_DWORD *)v4 + 564))(v4, 0, v5);
          if ( (_BYTE)result )
            return (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 4))(v5 + 8);
        }
      }
    }
  }
  return result;
}
