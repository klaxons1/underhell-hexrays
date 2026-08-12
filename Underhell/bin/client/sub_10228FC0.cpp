void __thiscall sub_10228FC0(float *this, int ArgList)
{
  int v2; // edi
  int (__thiscall *v4)(void *, int *); // edx
  char v5; // al
  double v6; // st7
  bool v7; // zf
  char Buffer[32]; // [esp+10h] [ebp-24h] BYREF
  float v9; // [esp+30h] [ebp-4h]

  v2 = ArgList;
  if ( ArgList != *((_DWORD *)this + 12) )
  {
    v4 = *(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 52);
    *(float *)&ArgList = (float)ArgList;
    v5 = v4(this, &ArgList);
    v6 = *(float *)&ArgList;
    if ( v5 )
      v2 = (int)v6;
    v7 = ((_DWORD)this[5] & 0x1000) == 0;
    v9 = this[11];
    *((_DWORD *)this + 12) = v2;
    this[11] = v6;
    if ( v7 )
    {
      sub_10228370(Buffer, 0x20u, "%d", v2);
      (*(void (__thiscall **)(float *, char *, float))(*(_DWORD *)this + 56))(this, Buffer, COERCE_FLOAT(LODWORD(v9)));
    }
  }
}
