void __thiscall sub_10130100(unsigned __int8 *this)
{
  _DWORD *v2; // ecx
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl
  int v6; // eax
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 51);
  if ( v2 )
  {
    v3 = this[212];
    v7 = this[208];
    v4 = this[216];
    BYTE1(v7) = v3;
    v5 = this[220];
    BYTE2(v7) = v4;
    HIBYTE(v7) = v5;
    sub_1012FD40(v2, &v7);
    v6 = (**(int (__thiscall ***)(void *))this)(this);
    sub_1012FC70(*((int **)this + 51), v6, 0.0, 1.0);
  }
}
