int __thiscall sub_101E2F50(int this)
{
  int result; // eax
  _BYTE *v3; // esi
  int v4; // edi
  char v5; // al

  result = sub_100CF460((_DWORD *)this);
  v3 = (_BYTE *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 872))(result);
    if ( (_BYTE)result )
    {
      if ( !v3[1145] && !v3[1144] )
      {
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 1248))(v3);
        if ( result != 1 || *(_BYTE *)(this + 3371) )
        {
          result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 1248))(v3);
          if ( result != 4 || *(_BYTE *)(this + 3372) )
          {
            v4 = *(_DWORD *)v3;
            v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 876))(v3);
            return (*(int (__thiscall **)(_BYTE *, bool))(v4 + 884))(v3, v5 == 0);
          }
        }
      }
    }
  }
  return result;
}
