void __thiscall sub_10272770(int (__thiscall ****this)(void *, int, int))
{
  int (__thiscall ***v2)(void *, int, int); // edi
  int v3; // eax
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( this[54] )
  {
    ((void (__thiscall *)(int (__thiscall ****)(void *, int, int), int *, int *))(*this)[70])(this, &v5, &v4);
    if ( ((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*this[54])[194])(this[54]) )
    {
      sub_10236200(this[54], 0, v5, v5, v4 - 2 * v5 + 1);
      sub_10236200(this[52], 0, 0, v5 - 1, v5);
      sub_10236200(this[53], 0, v4 - v5, v5 - 1, v5);
    }
    else
    {
      sub_10236200(this[54], v4, -1, v5 - 2 * v4 + 1, v4 + 1);
      sub_10236200(this[52], 0, 0, v4, v4);
      sub_10236200(this[53], v5 - v4, 0, v4, v4);
    }
    (*this[54])[61](this[54], 0, 0);
  }
  if ( *((_BYTE *)this + 230) )
  {
    v2 = *this;
    v3 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*this[54])[203])(this[54]);
    ((void (__thiscall *)(int (__thiscall ****)(void *, int, int), int))v2[206])(this, v3);
  }
  nullsub_4();
}
