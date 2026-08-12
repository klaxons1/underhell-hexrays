int __thiscall sub_10254180(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+10h] [ebp-8h] BYREF
  _BYTE v7[4]; // [esp+14h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1020))(this, 0);
  if ( *((_BYTE *)this + 284) )
  {
    result = sub_10254130((int)this) - 1;
    if ( !result )
    {
      *((_BYTE *)this + 285) = 1;
      return result;
    }
    --this[70];
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, int *, _BYTE *))(*this + 1004))(this, this[70], &v6, v7);
  v3 = *this;
  v5 = v6;
  v4 = sub_10254130((int)this);
  return (*(int (__stdcall **)(int, int))(v3 + 928))(v4 - 1, v5);
}
