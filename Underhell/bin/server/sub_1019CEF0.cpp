void __thiscall sub_1019CEF0(int *this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax
  _DWORD *v7; // [esp+B4h] [ebp-8h]
  int v8; // [esp+B8h] [ebp-4h] BYREF
  int savedregs; // [esp+BCh] [ebp+0h] BYREF

  v3 = a2;
  v5 = this + 17;
  v7 = this + 17;
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 17), 4, a2);
  if ( *v5 >= (unsigned int)dword_10632748 )
    dword_10632748 = *v5 + 1;
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 7), 4, v3);
  (**(void (__thiscall ***)(int, void *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, this, 12, v3);
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 3), 12, v3);
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 6), 4, v3);
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 13), 4, v3);
  sub_1019CD40((int)this, COERCE_FLOAT(&savedregs), (int)this, this[13]);
  if ( a3 == 6 )
    (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (char *)&a2 + 3, 1, v3);
  (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v8, 4, v3);
  this[8] = sub_1019D410(v8);
  (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v8, 4, v3);
  this[9] = sub_1019D410(v8);
  (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v8, 4, v3);
  this[10] = sub_1019D410(v8);
  (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v8, 4, v3);
  this[11] = sub_1019D410(v8);
  (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v8, 4, v3);
  v6 = sub_1019D410(v8);
  this[12] = v6;
  if ( !v6 )
    DevMsg(
      "ERROR: Unconnected ladder #%d bottom at ( %g, %g, %g )\n",
      *v7,
      *((float *)this + 3),
      *((float *)this + 4),
      *((float *)this + 5));
  if ( !this[8] && !this[9] && !this[10] )
    DevMsg(
      "ERROR: Unconnected ladder #%d top at ( %g, %g, %g )\n",
      *v7,
      *(float *)this,
      *((float *)this + 1),
      *((float *)this + 2));
}
