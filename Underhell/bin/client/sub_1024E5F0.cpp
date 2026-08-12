int __thiscall sub_1024E5F0(int this, int a2)
{
  _DWORD *v3; // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v3 = (_DWORD *)a2;
  if ( *(_BYTE *)(this + 353) )
  {
    sub_10236170((int (__thiscall ***)(void *, int, int))this, (int)&a2, (int)&v5);
    sub_1022ACA0(v3, "xpos", a2);
    sub_1022ACA0(v3, "ypos", v5);
  }
  if ( *(_BYTE *)(this + 352) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&a2, (int)&v5);
    sub_1022ACA0(v3, "wide", a2);
    sub_1022ACA0(v3, "tall", v5);
  }
  return sub_1024BB20((int (__thiscall ***)(void *, int, int))this, v3);
}
