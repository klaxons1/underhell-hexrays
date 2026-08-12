_BYTE *__thiscall sub_100F8950(_BYTE *this)
{
  _BYTE *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edi
  char v6; // [esp+7h] [ebp-1h] BYREF

  sub_100C1080((int)this);
  result = (_BYTE *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 856))(this);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 856))(this);
    result = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
    if ( (_BYTE)result )
    {
      if ( !*((_DWORD *)this + 285) )
      {
        v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 856))(this);
        v5 = v4;
        if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
          v5 = 0;
        v6 = *(_BYTE *)(v5 + 2137);
        return sub_100F8900(this + 1120, &v6);
      }
    }
  }
  return result;
}
