void __thiscall sub_10252F40(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  void (__thiscall *v4)(_DWORD *, int, int *, _BYTE *); // edx
  int v5; // eax
  int v6; // [esp-8h] [ebp-1Ch]
  int v7; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+10h] [ebp-4h] BYREF

  if ( !*((_BYTE *)this + 341) && *((_BYTE *)this + 380) )
  {
    v2 = this[94];
    if ( v2 > 0 )
    {
      while ( 1 )
      {
        v3 = v2 - 1;
        v4 = *(void (__thiscall **)(_DWORD *, int, int *, _BYTE *))(*this + 1004);
        v6 = this[70];
        this[94] = v2 - 1;
        v4(this, v6, &v7, v8);
        v5 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this) - 1;
        if ( v5 > 0 && v7 >= v5 )
          break;
        v2 = this[94];
        if ( v3 != v2 || v2 <= 0 )
          goto LABEL_10;
      }
      ++this[94];
    }
LABEL_10:
    (*(void (__thiscall **)(_DWORD *))(*this + 976))(this);
  }
}
