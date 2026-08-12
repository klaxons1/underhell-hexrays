float *__thiscall sub_10315310(_DWORD *this, float *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  float *result; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1096))(v5);
    }
    else
    {
      v3 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  result = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD *, _DWORD))(*(_DWORD *)v3 + 520))(v3, v7, this + 145, 0);
  *a2 = *result;
  a2[1] = result[1];
  a2[2] = result[2];
  return result;
}
