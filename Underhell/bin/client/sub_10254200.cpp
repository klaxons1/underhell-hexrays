int __thiscall sub_10254200(_DWORD *this)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+10h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+14h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1020))(this, 0);
  if ( *((_BYTE *)this + 284) )
  {
    if ( --this[70] < 0 )
      this[70] = 0;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, int *, _BYTE *))(*this + 1004))(this, this[70], &v8, v9);
  v3 = *this;
  v7 = v8;
  v4 = sub_10254130((int)this);
  (*(void (__stdcall **)(int, int))(v3 + 928))(v4 + 1, v7);
  if ( !*((_BYTE *)this + 285) )
  {
    if ( *((_BYTE *)this + 284) )
    {
      ++this[70];
      v5 = this[58];
      if ( this[70] > v5 )
        this[70] = v5;
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 976))(this);
}
