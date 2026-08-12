int __thiscall sub_102B1790(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int *v4; // ecx
  int result; // eax
  int v6; // edi
  const char *v7; // esi
  float v8; // [esp+Ch] [ebp-4h]

  if ( this[351] == 1 )
  {
    this[351] = 2;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, 13, 0.0);
  }
  else if ( this[351] == 2 )
  {
    this[351] = 1;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, 12, 0.0);
  }
  v2 = *this;
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 1080))(this);
  (*(void (__thiscall **)(_DWORD *, int))(v2 + 944))(this, v3);
  v8 = *(float *)(dword_106B31C8 + 12) + 0.3;
  if ( this[284] != LODWORD(v8) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)this[6];
      if ( v4 )
        sub_100194B0(v4, 1136);
    }
    *((float *)this + 284) = v8;
  }
  result = sub_100D1940(this);
  v6 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      ++this[344];
      v7 = (const char *)this[23];
      if ( !v7 )
        v7 = String;
      return (*(int (__thiscall **)(int, int, _DWORD, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v6,
               0,
               v7);
    }
  }
  return result;
}
