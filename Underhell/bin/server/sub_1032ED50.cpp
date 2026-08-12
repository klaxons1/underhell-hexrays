int __thiscall sub_1032ED50(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  float v6; // [esp+4h] [ebp-6Ch]
  _BYTE v7[80]; // [esp+1Ch] [ebp-54h] BYREF
  int v8; // [esp+6Ch] [ebp-4h]

  v2 = this + 55;
  if ( this[55] != 5 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    *v2 = 5;
  }
  v3 = *this;
  v8 = 2 * *v2;
  v6 = (float)v8;
  v4 = sub_10248110((int)v7, (int)this, (int)this, v6, 0, 0);
  return (*(int (__thiscall **)(_DWORD *, int))(v3 + 256))(this, v4);
}
