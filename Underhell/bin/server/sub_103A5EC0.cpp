char __thiscall sub_103A5EC0(float *this, float a2)
{
  char result; // al
  int v4; // ecx
  float *v5; // eax
  float v6; // [esp+4h] [ebp-20h]
  float v7; // [esp+8h] [ebp-1Ch]
  float v8[3]; // [esp+Ch] [ebp-18h] BYREF
  int v9[3]; // [esp+18h] [ebp-Ch] BYREF

  result = sub_103A5070((int)this);
  if ( result )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60(v4);
    v6 = ((double (__thiscall *)(float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 2256))(this, 32.0);
    v5 = sub_103A50F0(this, v8);
    sub_10329B60(this, (int)v9, v5, this + 145, v6, v7);
    return (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 2216))(this, LODWORD(a2));
  }
  return result;
}
