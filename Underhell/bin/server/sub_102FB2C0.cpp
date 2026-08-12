float *__thiscall sub_102FB2C0(int *this, float *a2, int a3, char a4)
{
  int v5; // eax
  float *v6; // eax
  double v7; // st7
  float *result; // eax
  float v9; // edx
  float v10; // ecx
  float v11[3]; // [esp+8h] [ebp-24h] BYREF
  _BYTE v12[12]; // [esp+14h] [ebp-18h] BYREF
  float v13; // [esp+20h] [ebp-Ch] BYREF
  float v14; // [esp+24h] [ebp-8h]
  float v15; // [esp+28h] [ebp-4h]

  if ( this[1033] == -1 )
  {
    v5 = (*(int (__thiscall **)(int *))(*this + 208))(this);
    this[1033] = sub_100BEAD0(v5, "Antlion.Body_Bone");
  }
  sub_100BEB30((int)this, this[1033], (int)&v13, (int)v12);
  if ( a4 )
  {
    v6 = sub_1001F010(v11, -8.0, 8.0);
    *a2 = *v6 + v13;
    a2[1] = v6[1] + v14;
    v7 = v6[2];
    result = a2;
    a2[2] = v7 + v15;
  }
  else
  {
    result = a2;
    v9 = v14;
    *a2 = v13;
    v10 = v15;
    a2[1] = v9;
    a2[2] = v10;
  }
  return result;
}
