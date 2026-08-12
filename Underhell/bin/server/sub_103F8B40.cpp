char __thiscall sub_103F8B40(int this)
{
  _BYTE *v2; // edi
  int v3; // eax
  void (__stdcall *v4)(int); // edx
  char result; // al

  if ( *(_BYTE *)(this + 1400) )
  {
    v2 = (_BYTE *)sub_100D1940((_DWORD *)this);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 320))(v2) )
      {
        if ( *(_DWORD *)(this + 1396) == 1 )
        {
          if ( (v2[3292] & 1) != 0 )
            goto LABEL_13;
          (*(void (__stdcall **)(int))(*(_DWORD *)this + 944))(179);
          goto LABEL_12;
        }
        if ( *(_DWORD *)(this + 1396) == 2 )
        {
          v3 = *((_DWORD *)v2 + 823);
          if ( (v3 & 0x800) == 0 )
          {
            v4 = *(void (__stdcall **)(int))(*(_DWORD *)this + 944);
            if ( (v3 & 4) != 0 )
              v4(182);
            else
              v4(197);
LABEL_12:
            *(_BYTE *)(this + 1400) = 0;
          }
        }
      }
    }
  }
LABEL_13:
  result = sub_100D3C30((int *)this);
  if ( *(_BYTE *)(this + 1392) )
  {
    result = sub_100D1EB0((_DWORD *)this);
    if ( result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1064))(this);
  }
  return result;
}
