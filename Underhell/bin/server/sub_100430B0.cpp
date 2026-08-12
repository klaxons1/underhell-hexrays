int __thiscall sub_100430B0(int *this, float a2, int a3, int a4, char a5, float a6)
{
  int result; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  _DWORD v11[7]; // [esp+14h] [ebp-20h] BYREF
  char v12; // [esp+30h] [ebp-4h]

  *(float *)&v11[2] = 0.0;
  *(float *)&v11[3] = 100.0;
  *(float *)&v11[4] = 12.0;
  v11[0] = a4;
  *(float *)&v11[1] = a6;
  v11[6] = a3;
  v11[5] = 0;
  v12 = a5;
  result = sub_10083270(v11);
  v8 = result;
  if ( result >= 0 )
  {
    if ( result <= 1 )
    {
      v9 = *this;
      v10 = sub_1007DFE0(this[647]);
      (*(void (__thiscall **)(int *, _DWORD, int))(v9 + 2216))(this, LODWORD(a2), v10);
      return v8;
    }
    else if ( result == 2 )
    {
      sub_1003AB20(this);
      return 2;
    }
  }
  return result;
}
