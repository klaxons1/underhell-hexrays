void __thiscall sub_1026B750(_DWORD *this)
{
  int v2; // edx
  double v3; // st7
  int (__thiscall *v4)(_DWORD *); // eax
  unsigned int v5; // eax
  int v6; // [esp-4h] [ebp-1Ch]
  float v7[3]; // [esp+4h] [ebp-14h] BYREF
  __int16 v8; // [esp+10h] [ebp-8h]
  char v9; // [esp+12h] [ebp-6h]
  char v10; // [esp+13h] [ebp-5h]
  char v11; // [esp+14h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *))(*this + 284))(this);
  v2 = *this;
  this[101] = 0;
  v3 = *(float *)(dword_106B31C8 + 16);
  v8 = 0;
  v7[0] = v3;
  v9 = 0;
  v11 = 0;
  v4 = *(int (__thiscall **)(_DWORD *))(v2 + 236);
  v7[1] = 0.0;
  v7[2] = 0.0;
  v10 = v4(this);
  v5 = sub_1026B410((int)this, v7);
  if ( v5 != this[101] )
  {
    v6 = this[101];
    this[101] = v5;
    sub_1026A710((int)this, v6);
  }
}
