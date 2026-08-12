int __thiscall sub_10228DA0(float *this, float String)
{
  char *v3; // edi
  double v4; // st7
  int result; // eax
  bool v6; // zf
  char Buffer[32]; // [esp+14h] [ebp-24h] BYREF
  float v8; // [esp+34h] [ebp-4h]

  v8 = this[11];
  v3 = (char *)LODWORD(String);
  String = atof((const char *)LODWORD(String));
  if ( (*(unsigned __int8 (__thiscall **)(float *, float *))(*(_DWORD *)this + 52))(this, &String) )
  {
    sub_10228370(Buffer, 0x20u, "%f", String);
    v3 = Buffer;
  }
  v4 = String;
  this[11] = String;
  result = (int)v4;
  v6 = ((_DWORD)this[5] & 0x1000) == 0;
  *((_DWORD *)this + 12) = (int)v4;
  if ( v6 )
    return (*(int (__thiscall **)(float *, char *, float))(*(_DWORD *)this + 56))(this, v3, COERCE_FLOAT(LODWORD(v8)));
  return result;
}
